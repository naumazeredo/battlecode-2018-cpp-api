/*
 * C++ API for Battlecode 2018
 *
 * https://github.com/naumazeredo/battlecode-2018-cpp-api
 *
 * authors:
 *   Naum Azeredo       < naumazeredo@gmail.com  >
 *   Luciano Barreira   < luciano@roboime.com.br >
 *   João Pedro Xavier  < joaopedroxavier@gmail.com >
 *   Sebastien Biollo   < sbiollo@gmail.com >
 *
 */

#include <vector>
#include <string>
#include <cstdlib>
#include <climits>

#include <bc.h>

// TODO: Think if it's good to save the bc pointer in every class
// TODO: Add to_bc() on classes to return the stored bc pointer


namespace bc {

// Logger
// TODO: Use bc_has_err and stuff
#ifdef NDEBUG
#define log_error(condition, message) ((void)0)
#else

#define S(x) #x
#define S_(x) S(x)
#define S__LINE__ S_(__LINE__)

#define log_error(condition, message)   \
if (!(condition)) {           \
  printf("[info] " __FILE__ ": " S__LINE__ ": " __func__ ": " (message)); \
}
#endif


// Auxiliar function for vectors
// TODO: Write with C++ and constexpr
#define VEC_LEN(x) x ## _len
#define VEC_INDEX(x) x ## _index
#define VEC_DEL(x) delete_ ## x
#define VEC(dest, orig) \
std::vector<dest> to_vector(orig* vec) {    \
  std::vector<dest> ans;                    \
  uintptr_t len = VEC_LEN(orig)(vec);       \
  for (uintptr_t i = 0; i < len; i++)       \
    ans.emplace_back(VEC_INDEX(orig)(vec)); \
  VEC_DEL(orig)(vec);                       \
  return ans;                               \
}


// Veci32
// std::vector<int> to_vector(bc_Veci32*);
VEC(int, bc_Veci32)


// Planet
using Planet = bc_Planet;

Planet      planet_other(Planet planet) { return bc_Planet_other(planet); }
std::string planet_to_json(Planet planet) { return bc_Planet_to_json(planet); }
Planet      planet_from_json(std::string s) { return bc_Planet_from_json(s.c_str()); }

std::string to_string(Planet planet) { return bc_Planet_debug(planet); }

// Direction
using Direction = bc_Direction;

// TODO: Change direction_dx/dy to const vector of pair
int         direction_dx(Direction direction) { return bc_Direction_dx(direction); }
int         direction_dy(Direction direction) { return bc_Direction_dy(direction); }
bool        direction_is_diagonal(Direction direction) { return bc_Direction_is_diagonal(direction); }
Direction   direction_opposite(Direction direction) { return bc_Direction_opposite(direction); }
Direction   direction_rotate_left(Direction direction) { return bc_Direction_rotate_left(direction); }
Direction   direction_rotate_right(Direction direction) { return bc_Direction_rotate_right(direction); }

Direction   direction_from_json(std::string s) { return bc_Direction_from_json(s.c_str()); }
std::string direction_to_json(Direction direction) { return bc_Direction_to_json(direction); }
// TODO: Direction to_string


// MapLocation
class MapLocation {
public:
  MapLocation(Planet planet, int x, int y) : m_planet { planet }, m_x { x }, m_y { y }
  {}

  MapLocation(bc_MapLocation* map_location) : m_map_location { map_location } {
    log_error(map_location, "Null bc_MapLocation!");

    m_planet = bc_MapLocation_planet_get(map_location);
    m_x      = bc_MapLocation_x_get(map_location);
    m_y      = bc_MapLocation_y_get(map_location);
  }

  ~MapLocation() {
    if (m_map_location)
      delete_bc_MapLocation(m_map_location);
  }

  // TODO: Copy/move semantics

  bc_MapLocation* to_bc() const {
    if (!m_map_location)
      m_map_location = new_bc_MapLocation(m_planet, m_x, m_y);
    return m_map_location;
  }

  Planet get_planet() const { return m_planet; }
  int get_x() const { return m_x; }
  int get_y() const { return m_y; }

  void set_planet(Planet planet) { m_planet = planet; }
  void set_x(int x) { m_x = x; }
  void set_y(int y) { m_y = y; }

  MapLocation add(Direction direction) const {
    return MapLocation(m_planet,
                       m_x + direction_dx(direction),
                       m_y + direction_dy(direction));
  }

  MapLocation subtract(Direction direction) const {
    return MapLocation(m_planet,
                       m_x - direction_dx(direction),
                       m_y - direction_dy(direction));
  }

  MapLocation add_multiple(Direction direction, int multiple) const {
    return MapLocation(m_planet,
                       m_x + direction_dx(direction) * multiple,
                       m_y + direction_dy(direction) * multiple);
  }

  MapLocation translate(int dx, int dy) const {
    return MapLocation(m_planet, m_x + dx, m_y + dy);
  }

  unsigned distance_squared_to(MapLocation map_location) const {
    if (m_planet != map_location.get_planet())
      return INT_MAX;
    int dx = m_x - map_location.get_x();
    int dy = m_y - map_location.get_y();
    return dx * dx + dy * dy;
  }

  // TODO
  Direction direction_to(MapLocation map_location) const;

  bool is_adjacent_to(MapLocation map_location) const {
    return ((*this) != map_location and
            std::abs(m_x - map_location.get_x()) <= 1 and
            std::abs(m_y - map_location.get_y()) <= 1);

  }

  bool is_within_range(unsigned range, MapLocation map_location) const {
    return range >= distance_squared_to(map_location);
  }

  bool operator ==(const MapLocation& map_location) const {
    return (map_location.get_planet() == m_planet and
            map_location.get_x() == m_x and
            map_location.get_y() == m_y);
  }
  bool operator !=(const MapLocation& map_location) const { return !((*this) == map_location); }

  // TODO: MapLocation to_string
  // TODO: MapLocation JSON

private:
  bc_MapLocation* m_map_location = nullptr;

  Planet m_planet;
  int m_x;
  int m_y;
};


// VecMapLocation
// std::vector<MapLocation> to_vector(bc_VecMapLocation*);
VEC(MapLocation, bc_VecMapLocation)


// Location
class Location {
public:
  Location() : m_type { Space } {}
  Location(MapLocation map_location) : m_type { Map }, m_map_location { map_location } {}
  Location(int garrison_id) : m_type { Garrison }, m_garrison_id { garrison_id } {}

  Location(bc_Location* location) {
    log_error(location, "Null bc_Location!");

    if (bc_Location_is_on_map(location)) {
      m_type = Map;
      m_map_location = bc_Location_map_location(location);
    } else if (bc_Location_is_in_garrison(location)) {
      m_type = Garrison;
      m_garrison = bc_Location_structure(location);
    } else {
      m_type = Space;
    }

    delete_bc_Location(location);
  }

  // TODO: Copy/move semantics

  bool is_on_map() const { return m_type == Map; }
  bool is_on_planet(Planet planet) const {
    return (m_type == Map and m_map_location.get_planet() == planet());
  }

  MapLocation get_map_location() const {
    log_error(m_type == Map, "Location is not MapLocation!");

    return m_map_location;
  }

  bool is_in_garrison() const { return m_type == Garrison; }
  int get_structure() const {
    log_error(m_type == Garrison, "Location is not Garrison!");

    return m_garrison;
  }

  bool is_in_space() const { return m_type == Space; }

  bool is_adjacent_to(Location location) {
    log_error(m_type == Map, "Location is not MapLocation!");

    return get_map_location().is_adjacent_to(location.get_map_location());
  }

  bool is_within_range(unsigned range, Location location) {
    log_error(m_type == Map, "Location is not MapLocation!");

    return get_map_location().is_within_range(range, location.get_map_location());
  }

  // TODO: Location to_string
  // TODO: Location JSON

private:
  enum {
    Map,
    Garrison,
    Space
  } m_type;

  union {
    MapLocation m_map_location;
    int m_garrison_id;
  };
};


// Team
using Team = bc_Team;

// Player
class Player {
public:
  Player(Team team, Planet planet) : m_planet { planet }, m_team { team }
  {}

  // TODO: Copy/move constructors
  // TODO: Move operator
  Player& operator=(const Player& player) { m_team = player.m_team; m_planet = player.m_planet; return *this; }

  Team    get_team() const { return m_team; }
  Planet  get_planet() const { return m_planet; }

  void    set_team()(Team team) { m_team = team; }
  void    set_planet()(Planet planet) { m_planet = planet; }

  bool    operator==(const Player& player) { return m_team == player.m_team and m_planet == player.m_planet; }

  // TODO: Player to_string
  // TODO: Player JSON

private:
  Team   m_team;
  Planet m_planet;
};


// VecUnitID
// std::vector<unsigned> to_vector(bc_VecUnitID*);
VEC(unsigned, bc_VecUnitID*)


// UnitType
using UnitType = bc_UnitType;

bool is_robot(UnitType unittype) { return unittype == Factory or unittype == Rocket; }
bool is_structure(UnitType unittype) { return !is_robot(); }

int unittype_get_factory_cost(UnitType unit_type) {
  log_error(is_robot(), "UnitType is not Robot!");

  return bc_UnitType_factory_cost(unit_type);
}

int unittype_get_blueprint_cost(UnitType unit_type) {
  log_error(is_structure(), "UnitType is not Structure!");

  return bc_UnitType_blueprint_cost(unit_type);
}

// Don't need to receive UnitType as C API, because it makes no sense...
int unittype_get_replicate_cost() { return bc_UnitType_replicate_cost(Worker); }

int unittype_get_value(UnitType unit_type) { return bc_UnitType_value(unit_type); }

// TODO: UnitType JSON


// VecUnitType
// std::vector<UnitType> to_vector(bc_VecUnitType*);
VEC(UnitType, bc_VecUnitType)


// Unit
class Unit {
public:
  Unit(bc_Unit* unit) : m_unit { unit } {
    log_error(unit, "Null bc_Unit!");
    m_unittype = bc_Unit_unit_type(unit);
  }

  ~Unit() {
    if (m_unit)
      delete_bc_Unit(m_unit);
  }

  // TODO: Copy/move semantics

  // NOT IMPLEMENT: bc_Unit_research_level

  // FIXME: Don't use macros. Write better function names!

  // Magic!
#define F(x) bc_Unit_ ## x
#define G(x) get_ ## x
#define GET(ret, var) ret G(var)() const { return F(func)(m_unit); }
#define GET_CAST(ret, var) ret G(var)() const { return ret { F(func)(m_unit) }; }
#define GET_ERROR(ret, var, cond, err) ret G(var)() const { log_error((cond), (err)); return ret { F(func)(m_unit) }; }
#define IS_ERROR(var, cond, err) bool var() const { log_error((cond), (err)); return ret { F(func)(m_unit) }; }
#define GET_FUNC(ret, var, func, cond, err) ret G(var)() const { log_error((cond), (err)); return func( F(func)(m_unit) ); }

  GET(Team, team);
  GET_CAST(Location, location);

  // All units
  GET(unsigned, id);
  GET(unsigned, health);
  GET(unsigned, max_health);
  GET(unsigned, vision_range);

  // Robots
  GET_ERROR(unsigned, damage, is_robot(m_unittype), "Not Robot!");

  GET_ERROR(unsigned, movement_heat, is_robot(m_unittype), "Not Robot!");
  GET_ERROR(unsigned, movement_cooldow, is_robot(m_unittype), "Not Robot!"n);

  GET_ERROR(unsigned, attack_heat, is_robot(m_unittype), "Not Robot!");
  GET_ERROR(unsigned, attack_cooldown, is_robot(m_unittype), "Not Robot!");
  GET_ERROR(unsigned, attack_heat, is_robot(m_unittype), "Not Robot!");

  GET_ERROR(unsigned, attack_heat, is_robot(m_unittype), "Not Robot!");
  GET_ERROR(unsigned, attack_cooldown, is_robot(m_unittype), "Not Robot!");
  GET_ERROR(unsigned, attack_range, is_robot(m_unittype), "Not Robot!");

  GET_ERROR(unsigned, ability_heat, is_robot(m_unittype), "Not Robot!");
  GET_ERROR(unsigned, ability_cooldown, is_robot(m_unittype), "Not Robot!");
  GET_ERROR(unsigned, ability_range, is_robot(m_unittype), "Not Robot!");

  IS_ERROR (is_ability_unlocked, is_robot(m_unittype), "Not Robot!");

  // Worker
  IS_ERROR (worker_has_acted, (m_unittype == Worker), "Not Worker!");
  GET_ERROR(unsigned, worker_build_health, (m_unittype == Worker), "Not Worker!");
  GET_ERROR(unsigned, worker_repair_health, (m_unittype == Worker), "Not Worker!");
  GET_ERROR(unsigned, worker_harvest_amount, (m_unittype == Worker), "Not Worker!");

  // Knight
  GET_ERROR(unsigned, knight_defense, (m_unittype == Knight), "Not Knight!");

  // Ranger
  GET_ERROR(unsigned, ranger_cannot_attack_range, (m_unittype == Ranger), "Not Ranger!");
  GET_ERROR(unsigned, ranger_max_countdown, (m_unittype == Ranger), "Not Ranger!");
  GET_ERROR(unsigned, ranger_countdown, (m_unittype == Ranger), "Not Ranger!");
  IS_ERROR (ranger_is_sniping, (m_unittype == Ranger), "Not Ranger!");
  GET_ERROR(MapLocation, ranger_target_location, ranger_is_sniping(), "Ranger sniping!");

  // Healer
  GET_ERROR(unsigned, healer_self_heal_amount, (m_unittype == Healer), "Not Healer!");

  // Structures
  IS_ERROR (structure_is_build, is_structure(m_unittype), "Not Structure!");
  GET_ERROR(unsigned, structure_max_capacity, is_structure(m_unittype), "Not Structure!");
  GET_FUNC(vector<unsigned>, structure_garrison, to_vector, is_structure(m_unittype), "Not Structure!");

  // Factory
  IS_ERROR (is_factory_producting, (m_unittype == Factory), "Not Factory!");
  GET_ERROR(UnitType, factory_unit_type, (m_unittype == Factory), "Not Factory!");
  GET_ERROR(unsigned, factory_rounds_left, (m_unittype == Factory), "Not Factory!");
  GET_ERROR(unsigned, factory_max_rounds_left, (m_unittype == Factory), "Not Factory!");

  // Rocket
  IS_ERROR (rocket_is_used, (m_unittype == Rocket), "Not Rocket!");
  GET_ERROR(unsigned, rocket_blast_damage, (m_unittype == Rocket), "Not Rocket!");
  GET_ERROR(unsigned, rocket_travel_time_decrease, (m_unittype == Rocket), "Not Rocket!");

//private:
  bc_Unit* m_unit;

  // XXX: Stored because it's used for every assertion
  UnitType m_unittype;
};


// VecUnit
// std::vector<Unit> to_vector(bc_VecUnit*);
VEC(Unit, bc_VecUnit)


// PlanetMap
class PlanetMap {
public:
  PlanetMap() {}

  PlanetMap(bc_PlanetMap* planet_map) : m_planet_map { planet_map } {
    log_error(planet_map, "Null bc_PlanetMap!");

    m_planet = bc_PlanetMap_planet_get(m_planet_map);
    m_height = bc_PlanetMap_height_get(m_planet_map);
    m_width  = bc_PlanetMap_width_get (m_planet_map);
    m_initial_units = to_vector(bc_PlanetMap_initial_map_get(m_planet_map));
  }

  ~PlanetMap() {
    if (m_planet_map)
      delete_bc_PlanetMap(m_planet_map);
  }

  Planet   get_planet() const { return m_planet; }
  unsigned get_height() const { return m_height; }
  unsigned get_width () const { return m_width; }
  const    std::vector<Unit>& get_initial_units() const { return m_initial_units; }

  /*
  // XXX: Not needed! We only need 2 planets: earth and mars. It's not needed to set stuff
  void set_planet(Planet   planet) { m_planet = planet; }
  void set_height(unsigned height) { m_height = height; }
  void set_width (unsigned width ) { m_width = width; }
  */

  bool is_on_map(MapLocation location ) const {
    return (location.get_x()< m_width) &&
           (location.get_y()< m_height) &&
           (location.get_planet() == m_planet);
  }

  bool is_passable_terrain_at(const MapLocation& map_location) const {
    log_error(m_planet_map, "PlanetMap not loaded!");
    return bc_PlanetMap_is_passable_terrain_at(m_planet_map, map_location.to_bc());
  }

  unsigned get_initial_karbonite_at(const MapLocation& map_location) const {
    log_error(m_planet_map, "PlanetMap not loaded!");
    return bc_PlanetMap_initial_karbonite_at(m_planet_map, map_location.to_bc());
  }

  // TODO: PlanetMap to_string
  // TODO: PlanetMap JSON

private:
  bc_PlanetMap*                      m_planet_map = nullptr;
  Planet                             m_planet;
  unsigned                           m_height, width;
  std::vector<Unit>                  m_initial_units;

  // TODO: Use the maps to store the values and never query the same position again
  //std::vector<std::vector<bool>> m_is_passable_terrain;
  //std::vector<std::vector<unsigned>> m_initial_karbonite;
};


// AsteroidStrike

class AsteroidStrike {
public:
  AsteroidStrike(unsigned karbonite, const MapLocation& location) :
    m_karbonite { karbonite }, m_location { location }
  {}

  AsteroidStrike(bc_AsteroidStrike* asteroid) {
    log_error(asteroid, "Null bc_AsteroidStrike!");

    m_karbonite = bc_AsteroidStrike_karbonite_get(asteroid);
    m_location = MapLocation(bc_AsteroidStrike_location_get(asteroid));
    delete_bc_AsteroidStrike(asteroid);
  }

  // TODO: Copy/Move semantics

  unsigned get_karbonite() const { return m_karbonite; }
  MapLocation get_map_location() const { return m_location; }

  // Set methods not needed

  // TODO: AsteroidStrike to_string
  // TODO: AsteroidStrike JSON

private:
  unsigned    m_karbonite;
  MapLocation m_location;
};


// AsteroidPattern

class AsteroidPattern {
public:
  AsteroidPattern(bc_AsteroidPattern* pattern) : m_pattern { pattern }
  {}

  bool has_asteroid_on_round(unsigned round) const {
    return bc_AsteroidPattern_has_asteroid(m_pattern, round);
  }

  AsteroidStrike get_asteroid_on_round(unsigned round) const {
    return bc_AsteroidPattern_asteroid(m_pattern, round);
  }

  // TODO: AsteroidPattern to_string
  // TODO: AsteroidPattern JSON

private:
  // IMPORTANT: weak pointer
  bc_AsteroidPattern* m_pattern;
};

// OrbitPattern
class OrbitPattern {
public:
  OrbitPattern(bc_OrbitPattern* orbit_pattern) : m_orbit_pattern { orbit_pattern }{
    m_amplitude = bc_OrbitPattern_amplitude_get( orbit_pattern );
    m_period    = bc_OrbitPattern_period_get( orbit_pattern );
    m_center    = bc_OrbitPattern_center_get( orbit_pattern );
  }

  unsigned get_amplitude() const { return m_amplitude; }
  unsigned get_period   () const { return m_period; }
  unsigned get_center   () const { return m_center; }

  unsigned duration(unsigned round) const {
    return bc_OrbitPattern_duration( m_orbit_pattern, round );
  }

private:
  // IMPORTANT: weak pointer
  bc_OrbitPattern* m_orbit_pattern;
  unsigned         m_amplitude;
  unsigned         m_period;
  unsigned         m_center;
};


//ResearchInfo
class ResearchInfo {
  ResearchInfo(bc_ResearchInfo* info) : m_info { info } {
    log_error(info, "Null bc_ResearchInfo!");
  }

  ~ResearchInfo(){
    if (m_info)
      delete_bc_ResearchInfo( m_info );
  }

  // These two methods are stand-alone ones from C API, so we decided to
  // put them into ResearchInfo class
  unsigned max_level(UnitType branch)                 const { return ::max_level( branch ); }
  unsigned cost_of  (UnitType branch, unsigned level) const { return ::cost_of( branch,level ); }

  unsigned get_level(UnitType branch) const { return bc_ResearchInfo_get_level( m_info, branch ); }
  std::vector<UnitType> get_queue()   const { return to_vector(bc_ResearchInfo_queue( m_info )); }
  bool has_next_in_queue         ()   const { return bc_ResearchInfo_has_next_in_queue( m_info ); }
  UnitType next_in_queue         ()   const { return bc_ResearchInfo_next_in_queue( m_info ); }
  unsigned rounds_lext           ()   const { return bc_ResearchInfo_rounds_left( m_info ); }

private:
  bc_ResearchInfo* m_info = nullptr;
};


// RocketLanding
class RocketLanding {
public:
  RocketLanding(bc_RocketLanding* rocket_landing, MapLocation destination) :
      m_rocket { rocket_landing }, m_destination { destination }
  {
    log_error(rocket_landing, "Null bc_RocketLanding!");
  }

  ~RocketLanding() {
    if (m_rocket)
      delete_bc_RocketLanding(m_rocket);
  }

  unsigned           get_rocket_id  () const { return m_rocket_id; }
  const MapLocation& get_destination() const { return m_destination; }

private:
  bc_RocketLanding* m_rocket;
  MapLocation       m_destination;
  unsigned          m_rocket_id;
};


// VecRocketLanding
// std::vector<RocketLanding> to_vector(bc_VecRocketLanding*);
VEC(RocketLanding, bc_VecRocketLanding)


// RocketLandingInfo
class RocketLandingInfo {
  RocketLandingInfo(bc_RocketLandingInfo* rocket_landing_info) :
      m_rocket_landing_info { rocket_landing_info }
  {
    log_error(rocket_landing_info, "Null bc_RocketLandingInfo!");
  }

  ~RocketLandingInfo(){
    if (m_rocket_landing_info)
      delete_bc_RocketLandingInfo(m_rocket_landing_info);
  }

  std::vector<RocketLanding> get_landings_on_round(unsigned round) { return to_vector(bc_RocketLandingInfo_landings_on(m_rocket_landing_info, round)); }

private:
  bc_RocketLandingInfo* m_rocket_landing_info;
};


// GameController
// IMPORTANT: Don't instantiate twice, might fail creating multiple bc_GameController
class GameController {
public:
  GameController() :
      m_gc { new_bc_GameController() },
      m_earth_map { bc_GameController_get_starting_map(m_gc, Earth) },
      m_mars_map { bc_GameController_get_starting_map(m_gc, Mars) },
      m_asteroid_pattern { bc_GameController_asteroids_pattern(m_gc) },
      m_orbit_pattern { bc_GameController_orbit_pattern(m_gc) }
  {}

  void next_turn() const { bc_GameController_next_turn(m_gc); }
  unsigned get_round() const { return bc_GameController_round(m_gc); }
  Planet get_planet() const { return bc_GameController_planet(m_gc); }
  Team get_team() const { return bc_GameController_team(m_gc); }

  const PlanetMap& get_starting_planet(Planet planet) {
    if (planet == Earth) return m_earth_map;
    return m_mars_map;
  }

  // Not in C API
  const PlanetMap& get_earth_map() const { return m_earth_map; }
  const PlanetMap& get_mars_map()  const { return m_mars_map; }

  unsigned get_karbonite() const { return bc_GameController_karbonite(m_gc); }

  Unit get_unit(unsigned id) const {
    bc_Unit* unit = bc_GameController_unit(m_gc, id);
    log_error(!bc_has_err(), "Incorrect Unit ID!");

    return Unit { unit };
  }

  std::vector<Unit> get_units() const { return to_vector(bc_GameController_units(m_gc)); }
  std::vector<Unit> get_my_units() const { return to_vector(bc_GameController_my_units(m_gc)); }
  std::vector<Unit> get_units_in_space() const { return to_vector(bc_GameController_units_in_space(m_gc)); }

  unsigned get_karbonite_at(MapLocation map_location) const {
    unsigned val = bc_GameController_karbonite_at(m_gc, map_location.to_bc());
    log_error(!bc_has_err(), "?");

    return val;
  }

  std::vector<MapLocation> get_all_locations_within(MapLocation map_location, unsigned radius_squared) const {
    return to_vector(bc_GameController_all_locations_within(m_gc, map_location.to_bc(), radius_squared));
  }

  bool can_sense_location(MapLocation map_location) const {
    return bc_GameController_can_sense_location(m_gc, map_location.to_bc());
  }

  bool can_sense_unit(unsigned id) const { return bc_GameController_can_sense_unit(m_gc, id); }

  std::vector<Unit> sense_nearby_units(MapLocation map_location, unsigned radius_squared) const {
    return to_vector(bc_GameController_sense_nearby_units(m_gc, map_location.to_bc(), radius_squared));
  }

  std::vector<Unit> sense_nearby_units_by_team(MapLocation map_location, unsigned radius_squared, Team team) const {
    return to_vector(bc_GameController_sense_nearby_units_by_team(m_gc, map_location.to_bc(), radius_squared, team));
  }

  std::vector<Unit> sense_nearby_units_by_type(MapLocation map_location, unsigned radius_squared, UnitType type) const {
    return to_vector(bc_GameController_sense_nearby_units_by_type(m_gc, map_location.to_bc(), radius_squared, type));
  }

  bool has_unit_at_location(MapLocation map_location) const {
    return bc_GameController_has_unit_at_location(m_gc, map_location.to_bc());
  }

  // XXX: Only use if after has_unit_at_location! Might crash if not
  Unit sense_unit_at_location(MapLocation map_location) const {
    return bc_GameController_sense_unit_at_location(m_gc, map_location.to_bc());
  }

  const AsteroidPattern& get_asteroid_pattern() const { return m_asteroid_pattern; }
  const OrbitPattern& get_orbit_pattern()       const { return m_orbit_pattern; }

  unsigned get_current_duration_of_flight() const {
    return bc_GameController_current_duration_of_flight(m_gc);
  }

  std::vector<int> get_team_array(Planet planet) const {
    return to_vector(bc_GameController_get_team_array(m_gc, planet));
  }

  void write_team_array(unsigned index, int value) const {
    bc_GameController_write_team_array(m_gc, index, value);
    log_error(!has_bc_err(), "ArrayOutOfBounds");
  }

  void disintegrate_unit(unsigned id) const {
    bc_GameController_disintegrate_unit(m_gc, id);
    log_error(!has_bc_err(), "?");
  }

  bool is_occupiable(MapLocation map_location) const {
    bool ans = bc_GameController_is_occupiable(m_gc, map_location.to_gc());
    log_error(!has_bc_err(), "?");
    return ans;
  }

  bool can_move(unsigned id, Direction direction) const {
    return bc_GameController_can_move(m_gc, id, direction);
  }

  bool is_move_ready(unsigned id) const {
    return bc_GameController_is_move_ready(m_gc, id);
  }

  void move_robot(unsigned id, Direction direction) const {
    bc_GameController_move_robot(id, direction);
    log_error(!has_bc_err(), "?");
  }

  bool can_attack(unsigned id, unsigned target_id) const {
    return bc_GameController_can_attack(m_gc, id, target_id);
  }

  bool is_attack_ready(unsigned id) const {
    return bc_GameController_is_attack_ready(m_gc, id);
  }

  void attack(unsigned id, unsigned target_id) const {
    bc_GameController_attack(id, target_id);
    log_error(!has_bc_err(), "?");
  }

  ResearchInfo get_research_info() const {
    return ResearchInfo { bc_GameController_research_info(m_gc) };
  }

  bool reset_research() const {
    return bc_GameController_reset_research(m_gc);
  }

  bool queue_research(UnitType branch) const {
    return bc_GameController_queue_research(m_gc, branch);
  }

  bool can_harvest(unsigned id, Direction direction) const {
    return bc_GameController_can_harvest(m_gc, id, direction);
  }

  void harvest(unsigned id, Direction direction) const {
    bc_GameController_harvest(m_gc, id, direction);
    log_error(!has_bc_err(), "?");
  }

  bool can_blueprint(unsigned id, UnitType unittype, Direction direction) const {
    return bc_GameController_can_blueprint(m_gc, id, unittype, direction);
  }

  void blueprint(unsigned id, UnitType unittype, Direction direction) const {
    bc_GameController_blueprint(m_gc, id, unittype, direction);
    log_error(!has_bc_err(), "?");
  }

  bool can_build(unsigned worker_id, unsigned blueprint_id) const {
    return bc_GameController_can_build(m_gc, worker_id, blueprint_id);
  }

  void build(unsigned worker_id, unsigned blueprint_id) const {
    bc_GameController_build(m_gc, worker_id, blueprint_id);
    log_error(!has_bc_err(), "?");
  }

  bool can_repair(unsigned worker_id, unsigned structure_id) const {
    return bc_GameController_can_repair(m_gc, worker_id, structure_id);
  }

  void repair(unsigned worker_id, unsigned structure_id) const {
    bc_GameController_repair(m_gc, worker_id, structure_id);
    log_error(!has_bc_err(), "?");
  }

  void replicate(unsigned worker_id, Direction direction) const {
    bc_GameController_replicate(m_gc, worker_id, direction);
    log_error(!has_bc_err(), "?");
  }

  bool can_javelin(unsigned knight_id, unsigned target_id) const {
    return bc_GameController_can_javelin(m_gc, knight_id, target_id);
  }

  bool is_javelin_ready(unsigned knight_id) const {
    return bc_GameController_is_javelin_ready(m_gc, knight_id);
  }

  void javelin(unsigned knight_id, unsigned target_id) const {
    bc_GameController_javelin(m_gc, knight_id, target_id);
    log_error(!has_bc_err(), "?");
  }

  bool can_begin_snipe(unsigned ranger_id, MapLocation map_location) const {
    return bc_GameController_can_begin_snipe(m_gc, ranger_id, map_location.to_bc());
  }

  void begin_snipe(unsigned ranger, MapLocation map_location) const {
    bc_GameController_begin_snipe(m_gc, ranger_id, map_location.to_bc());
    log_error(!has_bc_err(), "?");
  }

  bool can_begin_blink(unsigned mage_id, MapLocation map_location) const {
    return bc_GameController_can_begin_blink(m_gc, mage_id, map_location.to_bc());
  }

  bool is_blink_ready(unsigned mage_id) const {
    return bc_GameController_is_blink_ready(m_gc, mage_id);
  }

  void blink(unsigned mage_id, MapLocation map_location) const {
    bc_GameController_blink(m_gc, mage_id, map_location.to_bc());
    log_error(!has_bc_err(), "?");
  }

  bool can_heal(unsigned healer_id, unsigned target_id) const {
    return bc_GameController_can_heal(m_gc, healer_id, target_id);
  }

  bool is_heal_ready(unsigned healer_id) const {
    return bc_GameController_is_heal_ready(m_gc, healer_id);
  }

  void heal(unsigned healer_id, unsigned target_id) const {
    bc_GameController_heal(m_gc, healer_id, target_id);
    log_error(!has_bc_err(), "?");
  }

  bool is_overcharge_ready(unsigned healer_id) const {
    return bc_GameController_is_overcharge_ready(m_gc, healer_id);
  }

  void overcharge(unsigned healer_id, unsigned target_id) const {
    bc_GameController_overcharge(m_gc, healer_id, target_id);
    log_error(!has_bc_err(), "?");
  }

  bool is_load_ready(unsigned structure_id, unsigned robot_id) const {
    return bc_GameController_is_load_ready(m_gc, structure_id, robot_id);
  }

  void load(unsigned structure_id, unsigned robot_id) const {
    bc_GameController_load(m_gc, structure_id, robot_id);
    log_error(!has_bc_err(), "?");
  }

  bool is_unload_ready(unsigned structure_id, Direction direction) const {
    return bc_GameController_is_unload_ready(m_gc, structure_id, direction);
  }

  void unload(unsigned structure_id, Direction direction) const {
    bc_GameController_unload(m_gc, structure_id, direction);
    log_error(!has_bc_err(), "?");
  }

  bool can_produce_robot(unsigned factory_id, UnitType unittype) const {
    return bc_GameController_can_produce_robot(m_gc, factory_id, unittype);
  }

  void produce_robot(unsigned factory_id, UnitType unittype) const {
    bc_GameController_produce_robot(m_gc, factory_id, unittype);
    log_error(!has_bc_err(), "?");
  }

  RocketLandingInfo get_rocket_landings() const {
    return RocketLandingInfo { bc_GameController_rocket_landings(m_gc); };
  }

  bool can_launch_rocket(unsigned rocket_id, MapLocation map_location) const {
    return bc_GameController_can_launch_rocket(m_gc, rocket_id, map_location.to_bc());
  }

  void launch_rocket(unsigned rocket_id, MapLocation map_location) const {
    bc_GameController_launch_rocket(m_gc, rocket_id, map_location.to_bc());
    log_error(!has_bc_err(), "?");
  }

  bool is_over() const {
    return bc_GameController_is_over(m_gc);
  }

  Team get_winning_team() const {
    return bc_GameController_winning_team(m_gc);
  }

private:
  bc_GameController* m_gc;

  PlanetMap       m_earth_map;
  PlanetMap       m_mars_map;
  AsteroidPattern m_asteroid_pattern;
  OrbitPattern    m_orbit_pattern;
};


}
