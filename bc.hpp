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

#pragma once

#include <vector>
#include <memory>
#include <string>
#include <cstdlib>
#include <climits>
#include <unordered_map>

// XXX: Fix for 'this' used inside C code
#define this it
#include <bc.h>
#undef this

#ifndef MAX_ROUNDS
#define MAX_ROUNDS 1000
#endif

// IDEA: Add more constness (Vectors should be of consts, etc)
// IDEA: Create namespaces/static classes for bc enums.
//       So we could use enum classes and functions for these times properly


namespace bc {

// Logger
#ifdef NDEBUG
#define log_error(condition, message) ((void)0)
#define CHECK_ERRORS() ((void)0)
#else
#ifdef BACKTRACE
#include <execinfo.h>
#include <signal.h>
#include <unistd.h>

static void print_trace() {
  fflush(stdout);
  void *array[10];
  size_t size;

  // get void*'s for all entries on the stack
  size = backtrace(array, 10);

  // print out all the frames to stderr
  backtrace_symbols_fd(array, size, STDOUT_FILENO);
  exit(1);
}
#else
static void print_trace() {
  printf("Compile with -DBACKTRACE to see a backtrace\n");
}
#endif

#define S(x) #x
#define S_(x) S(x)
#define S__LINE__ S_(__LINE__)

#define log_error(condition, message)   \
if (!(condition)) {           \
  printf("[info] " __FILE__ ": " S__LINE__ ": " message "\n"); \
  print_trace(); \
  exit(1); \
}

#define CHECK_ERRORS() \
if (bc_has_err()) { \
  char* err; \
  uint8_t code = bc_get_last_err(&err); \
  printf("[ERROR](" __FILE__ ": " S__LINE__ ") code %d: %s\n", code, err); \
  bc_free_string(err); \
  print_trace(); \
  exit(1); \
}

#endif

static bool clear_error() {
  if (bc_has_err()) {
    char* err;
    bc_get_last_err(&err);
    bc_free_string(err);
    return true;
  }
  return false;
}

// Auxiliar function for vectors
// TODO: Write with C++ and constexpr
#define VEC_LEN(x) x ## _len
#define VEC_INDEX(x) x ## _index
#define VEC_DEL(x) delete_ ## x
#define VEC(dest, orig) \
static std::vector<dest> to_vector(orig* vec) { \
  std::vector<dest> ans;                        \
  size_t len = VEC_LEN(orig)(vec);              \
  for (size_t i = 0; i < len; i++)              \
    ans.emplace_back(VEC_INDEX(orig)(vec, i));  \
  VEC_DEL(orig)(vec);                           \
  return ans;                                   \
}

/** @cond PRIVATE */
template<class T, void(*F)(T*)>
struct Deleter {
  void operator()(T* loc) {
    if (loc) F(loc);
  }
};
/** @endcond */

/** @cond PRIVATE */
template<class T, void(*F)(T*)>
using UniquePtr = std::unique_ptr<T, Deleter<T, F>>;
/** @endcond */


/** @cond PRIVATE
 * Veci32
 * std::vector<int> to_vector(bc_Veci32*);
 */
VEC(int, bc_Veci32)
/** @endcond */


// Planet
using Planet = bc_Planet;

/**
 * Get other planet.
 * @param planet
 * @return the other planet
 */
inline Planet planet_other(Planet planet) { return bc_Planet_other(planet); }

/**
 * Create a human-readable representation of a Planet
 * @param planet
 * @return the human-readable string
 */
inline std::string to_string(Planet planet) { return bc_Planet_debug(planet); }

// Direction
using Direction = bc_Direction;

// IDEA: Add const vector of pairs for directions

/**
 * Returns the x displacement of this direction.
 * @param direction
 * @return the x displacement
 */
inline int direction_dx(Direction direction) { return bc_Direction_dx(direction); }

/**
 * Returns the y displacement of this direction.
 * @param direction
 * @return the y displacement
 */
inline int direction_dy(Direction direction) { return bc_Direction_dy(direction); }

/**
 * Returns whether this direction is a diagonal one.
 * @param direction
 * @return bool if the direction is diagonal or not
 */
inline bool direction_is_diagonal(Direction direction) { return bc_Direction_is_diagonal(direction); }

/**
 * Returns the direction opposite this one, or Center if it's Center
 * @param direction
 * @return the opposite direction
 */
inline Direction direction_opposite(Direction direction) { return bc_Direction_opposite(direction); }

/**
 * Returns the direction 45 degrees to the left (counter-clockwise) of this one, or Center if it's Center.
 * @param direction
 * @return the direction 45 degrees to the left
 */
inline Direction direction_rotate_left(Direction direction) { return bc_Direction_rotate_left(direction); }

/**
 * Returns the direction 45 degrees to the right (clockwise) of this one, or Center if it's Center.
 * @param direction
 * @return the direction 45 degrees to the right
 */
inline Direction direction_rotate_right(Direction direction) { return bc_Direction_rotate_right(direction); }

// TODO: Direction to_string


/****************************************************//**
 *  Two-dimensional coordinates in the Battlecode world.
 *******************************************************/
class MapLocation {
public:
  /**
   *  Empty Constructor
   */
  MapLocation() {}

  /**
   *  Constructor
   *  @param planet
   *  @param x
   *  @param y
   */
  MapLocation(Planet planet, int x, int y) :
      m_map_location { new_bc_MapLocation(planet, x, y) },
      m_planet { planet },
      m_x { x },
      m_y { y }
  {}

  /** @cond PRIVATE
   * Constructor used internally
   * @param map_location
   */
  explicit MapLocation(bc_MapLocation* map_location) : m_map_location { map_location } {
    log_error(map_location, "Null bc_MapLocation!");

    m_planet = bc_MapLocation_planet_get(map_location);
    m_x      = bc_MapLocation_x_get(map_location);
    m_y      = bc_MapLocation_y_get(map_location);
  }
  /** @endcond */

  /**
   * Copy constructur
   * @param map_location
   */
  MapLocation(const MapLocation& map_location) :
      m_map_location { bc_MapLocation_clone(map_location.get_bc()) },
      m_planet       { map_location.get_planet() },
      m_x            { map_location.get_x() },
      m_y            { map_location.get_y() }
  {}

  /**
   * Move constructor
   * @param map_location
   */
  MapLocation(MapLocation&&) = default;

  /**
   * Assignment operator (deep copy)
   * @param map_location
   * @return the assigned MapLocation
   */
  MapLocation& operator=(const MapLocation& map_location) {
    *this = std::move(MapLocation(map_location));
    return *this;
  }

  /**
   * Assignment operator (move)
   * @param map_location
   * @return the assigned MapLocation
   */
  MapLocation& operator=(MapLocation&&) = default;

  // XXX: Low-level use only
  /** @cond PRIVATE
   * Two-dimensional coordinates in the Battlecode world.
   */
  bc_MapLocation* get_bc() const { return m_map_location.get(); }
  /** @endcond */

  /**
   * Returns the planet the MapLocation is at
   * @return the planet the MapLocation is at
   */
  Planet get_planet() const { return m_planet; }

  /**
   * Returns the x coordinate
   * @return the x coordinate
   */
  int get_x() const { return m_x; }

  /**
   * Returns the y coordinate
   * @return the y coordinate
   */
  int get_y() const { return m_y; }

  /**
   * Set the planet
   * @param planet
   */
  void set_planet(Planet planet) { m_planet = planet; }

  /**
   * Set the x coordinate of the map location
   * @param x
   */
  void set_x(int x) { m_x = x; }

  /**
   * Set the y coordinate of the map location
   * @param y
   */
  void set_y(int y) { m_y = y; }


  /*
   * Returns the map location one square from this one in the given direction.
   * @param direction
   * @return the map location one square from this one in the given direction.
   */
  MapLocation add(Direction direction) const {
    // Hardcoded to avoid API calls
    return MapLocation(m_planet,
                      m_x + direction_dx(direction),
                      m_y + direction_dy(direction));
  }

  /*
   * Returns the map location one square from this one in the opposite direction.
   * @param direction
   * @return the map location one square from this one in the opposite direction.
   */
  MapLocation subtract(Direction direction) const {
    // Hardcoded to avoid API calls
    return MapLocation(m_planet,
                      m_x - direction_dx(direction),
                      m_y - direction_dy(direction));
  }

  /*
   * Returns the map location `multiple` squares from this one in the given
   * direction.
   * @param direction
   * @return Returns map the location `multiple` squares from this one in the given direction.
   */
  MapLocation add_multiple(Direction direction, int multiple) const {
    // Hardcoded to avoid API calls
    return MapLocation(m_planet,
                      m_x + direction_dx(direction) * multiple,
                      m_y + direction_dy(direction) * multiple);
  }

  /*
   * The location translated from this location by `dx` in the x direction and `dy`
   * in the y direction.
   * @param dx
   * @param dy
   * @return The location translated from this location by `dx` in the x direction and `dy` in the y direction.
   */
  MapLocation translate(int dx, int dy) const {
    // Hardcoded to avoid API calls
    return MapLocation(m_planet, m_x + dx, m_y + dy);
  }

  /*
   * Computes the square of the distance from this location to the specified
   * location. If on different planets, returns the maximum integer.
   * @param map_location
   * @return the square of the distance from this location to the specified location. If on different planets, returns the maximum integer.
   */
  unsigned distance_squared_to(const MapLocation& map_location) const {
    // Hardcoded to avoid API calls
    if (m_planet != map_location.get_planet())
      return INT_MAX;
    int dx = m_x - map_location.get_x();
    int dy = m_y - map_location.get_y();
    return dx * dx + dy * dy;
  }

  /*
  *  The Direction from this location to the specified location.
  * @param map_location :
  * @return The Direction from this location to the specified location.
  * @throw DifferentPlanet - The locations are on different planets.
  */
  Direction direction_to(const MapLocation& map_location) const {
    auto ans = bc_MapLocation_direction_to(get_bc(), map_location.get_bc());
    CHECK_ERRORS();
    return ans;
  }

  /*
   * Determines whether this location is adjacent to the specified location,
   * including diagonally. Note that squares are not adjacent to themselves,
   * and squares on different planets are not adjacent to each other.
   * @param map_location
   * @return if this location is adjacent to the specified location
   */
  bool is_adjacent_to(const MapLocation& map_location) const {
    // Hardcoded to avoid API calls
    return ((*this) != map_location and
            std::abs(m_x - map_location.get_x()) <= 1 and
            std::abs(m_y - map_location.get_y()) <= 1);
  }

  /*
   * Whether this location is within the distance squared range of the
   * specified location, inclusive. False for locations on different planets.
   * @param range
   * @param map_location
   * @return if this location is within the distance squared range of the specified location inclusive
   */
  bool is_within_range(unsigned range, const MapLocation& map_location) const {
    // Hardcoded to avoid API calls
    return range >= distance_squared_to(map_location);
  }

  /*
   * Overloading of the == operator
   * @param map_location
   * @return if the current MapLocation is equal to map_location
   */
  bool operator ==(const MapLocation& map_location) const {
    return (map_location.get_planet() == m_planet and
            map_location.get_x() == m_x and
            map_location.get_y() == m_y);
  }

  /*
   * Overloading of the != operator
   * @param map_location
   * @return if the current MapLocation is not equal to map_location
   */
  bool operator !=(const MapLocation& map_location) const {
    return !((*this) == map_location);
  }

  // TODO: MapLocation to_string

private:
  UniquePtr<bc_MapLocation, delete_bc_MapLocation> m_map_location;

  Planet m_planet;
  int m_x;
  int m_y;
};


/** @cond PRIVATE
 * VecMapLocation
 * std::vector<MapLocation> to_vector(bc_VecMapLocation*);
 */
VEC(MapLocation, bc_VecMapLocation)
/** @endcond */


// Location
class Location {
public:
  Location() : m_type { Space } {}
  Location(const MapLocation& map_location) : m_type { Map }, m_map_location { map_location } {}
  Location(unsigned garrison_id) : m_type { Garrison }, m_garrison_id { garrison_id } {}

  explicit Location(bc_Location* location) {
    log_error(location, "Null bc_Location!");

    if (bc_Location_is_on_map(location)) {
      m_type = Map;
      m_map_location = MapLocation(bc_Location_map_location(location));
    } else if (bc_Location_is_in_garrison(location)) {
      m_type = Garrison;
      m_garrison_id = bc_Location_structure(location);
    } else {
      m_type = Space;
    }

    delete_bc_Location(location);
  }

  bool is_on_map() const { return m_type == Map; }
  bool is_on_planet(Planet planet) const {
    return (m_type == Map and m_map_location.get_planet() == planet);
  }

  MapLocation get_map_location() const {
    log_error(m_type == Map, "Location is not MapLocation!");

    return m_map_location;
  }

  bool is_in_garrison() const { return m_type == Garrison; }
  int get_structure() const {
    log_error(m_type == Garrison, "Location is not Garrison!");

    return m_garrison_id;
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

private:
  enum {
    Map,
    Garrison,
    Space
  } m_type;

  unsigned    m_garrison_id;
  MapLocation m_map_location;
};


// Team
using Team = bc_Team;


/** @cond PRIVATE
 * VecUnitID
 * std::vector<unsigned> to_vector(bc_VecUnitID*);
 */
VEC(unsigned, bc_VecUnitID)
/** @endcond */


// UnitType
/*  */
using UnitType = bc_UnitType;

/*  */
inline bool is_structure(UnitType unit_type) { return unit_type == Factory or unit_type == Rocket; }
/*  */
inline bool is_robot(UnitType unit_type) { return !is_structure(unit_type); }

/*  */
static unsigned unit_type_get_factory_cost(UnitType unit_type) {
  unsigned ans = bc_UnitType_factory_cost(unit_type);
  CHECK_ERRORS();
  return ans;
}

/*  */
static unsigned unit_type_get_blueprint_cost(UnitType unit_type) {
  unsigned ans = bc_UnitType_blueprint_cost(unit_type);
  CHECK_ERRORS();
  return ans;
}

// Don't need to receive UnitType as C API, because it makes no sense...
/*  */
static unsigned unit_type_get_replicate_cost() {
  unsigned ans = bc_UnitType_replicate_cost(Worker);
  CHECK_ERRORS();
  return ans;
}

/*  */
inline unsigned unit_type_get_value(UnitType unit_type) { return bc_UnitType_value(unit_type); }


/** @cond PRIVATE
 * VecUnitType
 * std::vector<UnitType> to_vector(bc_VecUnitType*);
 */
VEC(UnitType, bc_VecUnitType)
/** @endcond */


// Unit
class Unit {
public:
  Unit() {}

  explicit Unit(bc_Unit* unit) : m_unit { unit } {
    log_error(unit, "Null bc_Unit!");
    m_unit_type = bc_Unit_unit_type(unit);
    m_id   = bc_Unit_id(unit);
  }

  Unit(const Unit& unit) :
    m_unit { bc_Unit_clone(unit.m_unit.get()) },
    m_unit_type { bc_Unit_unit_type(unit.m_unit.get()) },
    m_id { bc_Unit_id(unit.m_unit.get()) }
  {}
  Unit(Unit&& unit) = default;

  Unit& operator=(const Unit& unit) {
    *this = std::move(Unit(unit));
    return *this;
  }
  Unit& operator=(Unit&& unit) = default;

  UnitType get_unit_type() const { return m_unit_type; }

  // NOT IMPLEMENT: bc_Unit_research_level

  // FIXME: Don't use macros. Write better function names!

  // Magic!
#define F(x) bc_Unit_ ## x
#define G(x) get_ ## x
#define GET(ret, var) \
  ret G(var)() const { auto ans = static_cast<ret>(F(var)(m_unit.get())); CHECK_ERRORS(); return ans; }
#define IS(var) \
  bool var()   const { bool ans = F(var)(m_unit.get()); CHECK_ERRORS(); return ans; }
#define GET_FUNC(ret, var, func) \
  ret G(var)() const { auto ans = func( F(var)(m_unit.get()) ); CHECK_ERRORS(); return ans; }

  GET(Team, team);
  GET(Location, location);
  bool is_on_map() const { return get_location().is_on_map(); }
  MapLocation get_map_location() const { return get_location().get_map_location(); }

  // All units
  //GET(unsigned, id);
  unsigned get_id() const { return m_id; }
  GET(unsigned, health);
  GET(unsigned, max_health);
  GET(unsigned, vision_range);

  // Robots
  GET(int, damage);

  GET(unsigned, movement_heat);
  GET(unsigned, movement_cooldown);

  GET(unsigned, attack_heat);
  GET(unsigned, attack_cooldown);
  GET(unsigned, attack_range);

  GET(unsigned, ability_heat);
  GET(unsigned, ability_cooldown);
  GET(unsigned, ability_range);

  IS (is_ability_unlocked);

  // Worker
  IS (worker_has_acted);
  GET(unsigned, worker_build_health);
  GET(unsigned, worker_repair_health);
  GET(unsigned, worker_harvest_amount);

  // Knight
  GET(unsigned, knight_defense);

  // Ranger
  GET(unsigned, ranger_cannot_attack_range);
  GET(unsigned, ranger_max_countdown);
  GET(unsigned, ranger_countdown);
  IS (ranger_is_sniping);
  GET(MapLocation, ranger_target_location);

  // Healer
  GET(unsigned, healer_self_heal_amount);

  // Structures
  IS (structure_is_built);
  GET(unsigned, structure_max_capacity);
  GET_FUNC(std::vector<unsigned>, structure_garrison, to_vector);

  // Factory
  IS (is_factory_producing);
  GET(UnitType, factory_unit_type);
  GET(unsigned, factory_rounds_left);
  GET(unsigned, factory_max_rounds_left);

  // Rocket
  IS (rocket_is_used);
  GET(int, rocket_blast_damage);
  GET(unsigned, rocket_travel_time_decrease);

  // C++ API
  bool is_structure() const { return m_unit_type == Factory or m_unit_type == Rocket; }
  bool is_robot    () const { return !is_structure(); }

private:
  UniquePtr<bc_Unit, delete_bc_Unit> m_unit;

  // XXX: Stored for cache reasons
  UnitType m_unit_type;
  unsigned m_id;
};


/** @cond PRIVATE
 * VecUnit
 * std::vector<Unit> to_vector(bc_VecUnit*);
 */
VEC(Unit, bc_VecUnit)
/** @endcond */


// PlanetMap
class PlanetMap {
public:
  PlanetMap() {}

  PlanetMap(bc_PlanetMap* planet_map) : m_planet_map { planet_map } {
    log_error(planet_map, "Null bc_PlanetMap!");

    m_planet = bc_PlanetMap_planet_get(m_planet_map.get());
    m_height = bc_PlanetMap_height_get(m_planet_map.get());
    m_width  = bc_PlanetMap_width_get (m_planet_map.get());
    m_initial_units = to_vector(bc_PlanetMap_initial_units_get(m_planet_map.get()));
  }

  PlanetMap(const PlanetMap& planet_map) :
    m_planet_map { bc_PlanetMap_clone(planet_map.m_planet_map.get()) },
    m_planet { planet_map.m_planet },
    m_height { planet_map.m_height },
    m_width { planet_map.m_width },
    m_initial_units { planet_map.m_initial_units }
  {}

  PlanetMap(PlanetMap&& planet_map) = default;

  PlanetMap& operator=(const PlanetMap& planet_map) {
    *this = std::move(PlanetMap(planet_map));
    return *this;
  }

  PlanetMap& operator=(PlanetMap&& planet_map) = default;

  Planet                   get_planet()        const { return m_planet; }
  unsigned                 get_height()        const { return m_height; }
  unsigned                 get_width ()        const { return m_width; }
  const std::vector<Unit>& get_initial_units() const { return m_initial_units; }

  /*
  // XXX: Not needed! We only need 2 planets: earth and mars. It's not needed to set stuff
  void set_planet(Planet   planet) { m_planet = planet; }
  void set_height(unsigned height) { m_height = height; }
  void set_width (unsigned width ) { m_width = width; }
  */

  bool is_on_map(const MapLocation& location) const {
    return
      (location.get_x() >= 0 and location.get_x() < (int)m_width) and
      (location.get_y() >= 0 and location.get_y() < (int)m_height) and
      (location.get_planet() == m_planet);
  }

  bool is_passable_terrain_at(const MapLocation& map_location) const {
    log_error(m_planet_map, "PlanetMap not loaded!");
    auto ans = bc_PlanetMap_is_passable_terrain_at(m_planet_map.get(), map_location.get_bc());
    CHECK_ERRORS();
    return ans;
  }

  unsigned get_initial_karbonite_at(const MapLocation& map_location) const {
    log_error(m_planet_map, "PlanetMap not loaded!");
    auto ans = bc_PlanetMap_initial_karbonite_at(m_planet_map.get(), map_location.get_bc());
    CHECK_ERRORS();
    return ans;
  }

  /**
   * Get the initial map passable and karbonite values.
   * This information is constant, so it's useful to have it since the beginning and never use the
   * API for this.
   *
   * @return the matrix of pair (is passable cell, initial karbonite at cell)
   */
  std::vector<std::vector<std::pair<bool, unsigned>>> get_initial_map() const {
    std::vector<std::vector<std::pair<bool, unsigned>>> ans { m_height, std::vector<std::pair<bool, unsigned>> { m_width } };

    for (int i = 0; i < (int)m_height; i++) {
      for (int j = 0; j < (int)m_width; j++) {
        MapLocation mp { m_planet, j, i };
        bool passable  = bc_PlanetMap_is_passable_terrain_at(m_planet_map.get(), mp.get_bc());
        auto karbonite = bc_PlanetMap_initial_karbonite_at(m_planet_map.get(), mp.get_bc());
        ans[i][j] = { passable, karbonite };
      }
    }

    return ans;
  }

  // TODO: PlanetMap to_string

private:
  UniquePtr<bc_PlanetMap, delete_bc_PlanetMap> m_planet_map;
  Planet            m_planet;
  unsigned          m_height, m_width;
  std::vector<Unit> m_initial_units;

  // TODO: Use the maps to store the values and never query the same position again
  //std::vector<std::vector<bool>> m_is_passable_terrain;
  //std::vector<std::vector<unsigned>> m_initial_karbonite;
};


// AsteroidStrike

class AsteroidStrike {
public:
  AsteroidStrike() = default;
  AsteroidStrike(unsigned karbonite, const MapLocation& location) :
    m_karbonite { karbonite }, m_location { location }
  {}

  AsteroidStrike(bc_AsteroidStrike* asteroid) {
    log_error(asteroid, "Null bc_AsteroidStrike!");

    m_karbonite = bc_AsteroidStrike_karbonite_get(asteroid);
    m_location = MapLocation(bc_AsteroidStrike_location_get(asteroid));
    delete_bc_AsteroidStrike(asteroid);
  }

  unsigned get_karbonite() const { return m_karbonite; }
  MapLocation get_map_location() const { return m_location; }

  // Set methods not needed

  // TODO: AsteroidStrike to_string

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

  /**
   * Utility function for gathering all strikes info rather than consulting
   * for each round (they don't change the whole game)
   * @return the map strikes for each round
   */
  std::unordered_map< unsigned , AsteroidStrike>  get_all_strikes() {
    std::unordered_map < unsigned , AsteroidStrike> ans;
    for (int i = 0 ; i < MAX_ROUNDS ; ++i){
      if (has_asteroid_on_round(i))
        ans[i] = get_asteroid_on_round(i);
    }
    return ans;
  }

  // TODO: AsteroidPattern to_string

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
public:
  ResearchInfo(bc_ResearchInfo* info) : m_info { info } {
    log_error(info, "Null bc_ResearchInfo!");
  }

  // These two methods are stand-alone ones from C API, so we decided to
  // put them into ResearchInfo class
  unsigned max_level(UnitType branch)                 const { return ::max_level( branch ); }
  unsigned cost_of  (UnitType branch, unsigned level) const { return ::cost_of( branch,level ); }

  unsigned get_level(UnitType branch) const { auto r = bc_ResearchInfo_get_level( m_info.get(), branch ); CHECK_ERRORS(); return r; }
  std::vector<UnitType> get_queue  () const { auto r = to_vector(bc_ResearchInfo_queue( m_info.get() )); CHECK_ERRORS(); return r; }
  bool has_next_in_queue           () const { auto r = bc_ResearchInfo_has_next_in_queue( m_info.get() ); CHECK_ERRORS(); return r; }
  UnitType next_in_queue           () const { auto r = bc_ResearchInfo_next_in_queue( m_info.get() ); CHECK_ERRORS(); return r; }
  unsigned rounds_left             () const { auto r = bc_ResearchInfo_rounds_left( m_info.get() ); CHECK_ERRORS(); return r; }

private:
  UniquePtr<bc_ResearchInfo, delete_bc_ResearchInfo> m_info;
};


// RocketLanding
class RocketLanding {
public:
  RocketLanding(bc_RocketLanding* rocket_landing) {
    log_error(rocket_landing, "Null bc_RocketLanding!");
    m_rocket_id   = bc_RocketLanding_rocket_id_get(rocket_landing);
    m_destination = MapLocation(bc_RocketLanding_destination_get(rocket_landing));
    delete_bc_RocketLanding(rocket_landing);
  }

  unsigned           get_rocket_id  () const { return m_rocket_id; }
  const MapLocation& get_destination() const { return m_destination; }

private:
  unsigned    m_rocket_id;
  MapLocation m_destination;
};


/** @cond PRIVATE
 * VecRocketLanding
 * std::vector<RocketLanding> to_vector(bc_VecRocketLanding*);
 */
VEC(RocketLanding, bc_VecRocketLanding)
/** @endcond */


// RocketLandingInfo
class RocketLandingInfo {
public:
  explicit RocketLandingInfo(bc_RocketLandingInfo* rocket_landing_info) :
      m_rocket_landing_info { rocket_landing_info }
  {
    log_error(rocket_landing_info, "Null bc_RocketLandingInfo!");
  }

  std::vector<RocketLanding> get_landings_on_round(unsigned round) { return to_vector(bc_RocketLandingInfo_landings_on(m_rocket_landing_info.get(), round)); }

private:
  UniquePtr<bc_RocketLandingInfo, delete_bc_RocketLandingInfo> m_rocket_landing_info;
};


// GameController
// IMPORTANT: Don't instantiate twice, might fail creating multiple bc_GameController
class GameController {
public:
  GameController() :
      m_gc { new_bc_GameController() },
      m_earth_map { bc_GameController_starting_map(m_gc, Earth) },
      m_mars_map { bc_GameController_starting_map(m_gc, Mars) },
      m_asteroid_pattern { bc_GameController_asteroid_pattern(m_gc) },
      m_orbit_pattern { bc_GameController_orbit_pattern(m_gc) }
  {
    CHECK_ERRORS();
  }

  ~GameController() {
    if (m_gc)
      delete_bc_GameController(m_gc);
  }

  GameController(const GameController& that) = delete;
  GameController& operator=(const GameController& that) = delete;

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

  // Not in C API
  bool has_unit(unsigned id) const {
    clear_error();
    bc_Unit* unit = bc_GameController_unit(m_gc, id);
    bool exists = !clear_error();
    if (exists) delete_bc_Unit(unit);
    return exists;
  }

  Unit get_unit(unsigned id) const {
    bc_Unit* unit = bc_GameController_unit(m_gc, id);
    CHECK_ERRORS();
    return Unit { unit };
  }

  std::vector<Unit> get_units() const { return to_vector(bc_GameController_units(m_gc)); }
  std::vector<Unit> get_my_units() const { return to_vector(bc_GameController_my_units(m_gc)); }
  std::vector<Unit> get_units_in_space() const { return to_vector(bc_GameController_units_in_space(m_gc)); }

  unsigned get_karbonite_at(const MapLocation& map_location) const {
    unsigned val = bc_GameController_karbonite_at(m_gc, map_location.get_bc());
    CHECK_ERRORS();
    return val;
  }

  std::vector<MapLocation> get_all_locations_within(const MapLocation& map_location, unsigned radius_squared) const {
    return to_vector(bc_GameController_all_locations_within(m_gc, map_location.get_bc(), radius_squared));
  }

  bool can_sense_location(const MapLocation& map_location) const {
    return bc_GameController_can_sense_location(m_gc, map_location.get_bc());
  }

  bool can_sense_unit(unsigned id) const { return bc_GameController_can_sense_unit(m_gc, id); }

  std::vector<Unit> sense_nearby_units(const MapLocation& map_location, unsigned radius_squared) const {
    return to_vector(bc_GameController_sense_nearby_units(m_gc, map_location.get_bc(), radius_squared));
  }

  std::vector<Unit> sense_nearby_units_by_team(const MapLocation& map_location, unsigned radius_squared, Team team) const {
    return to_vector(bc_GameController_sense_nearby_units_by_team(m_gc, map_location.get_bc(), radius_squared, team));
  }

  std::vector<Unit> sense_nearby_units_by_type(const MapLocation& map_location, unsigned radius_squared, UnitType type) const {
    return to_vector(bc_GameController_sense_nearby_units_by_type(m_gc, map_location.get_bc(), radius_squared, type));
  }

  bool has_unit_at_location(const MapLocation& map_location) const {
    return bc_GameController_has_unit_at_location(m_gc, map_location.get_bc());
  }

  // XXX: Only use if after has_unit_at_location! Might crash if not
  Unit sense_unit_at_location(const MapLocation& map_location) const {
    auto ans = bc_GameController_sense_unit_at_location(m_gc, map_location.get_bc());
    CHECK_ERRORS();
    return Unit(ans);
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
    CHECK_ERRORS();
  }

  void disintegrate_unit(unsigned id) const {
    bc_GameController_disintegrate_unit(m_gc, id);
    CHECK_ERRORS();
  }

  bool is_occupiable(const MapLocation& map_location) const {
    auto ans = bc_GameController_is_occupiable(m_gc, map_location.get_bc());
    CHECK_ERRORS();
    return ans;
  }

  bool can_move(unsigned id, Direction direction) const {
    return bc_GameController_can_move(m_gc, id, direction);
  }

  bool is_move_ready(unsigned id) const {
    return bc_GameController_is_move_ready(m_gc, id);
  }

  void move_robot(unsigned id, Direction direction) const {
    bc_GameController_move_robot(m_gc, id, direction);
    CHECK_ERRORS();
  }

  bool can_attack(unsigned id, unsigned target_id) const {
    return bc_GameController_can_attack(m_gc, id, target_id);
  }

  bool is_attack_ready(unsigned id) const {
    return bc_GameController_is_attack_ready(m_gc, id);
  }

  void attack(unsigned id, unsigned target_id) const {
    bc_GameController_attack(m_gc, id, target_id);
    CHECK_ERRORS();
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
    CHECK_ERRORS();
  }

  bool can_blueprint(unsigned id, UnitType unit_type, Direction direction) const {
    return bc_GameController_can_blueprint(m_gc, id, unit_type, direction);
  }

  void blueprint(unsigned id, UnitType unit_type, Direction direction) const {
    bc_GameController_blueprint(m_gc, id, unit_type, direction);
    CHECK_ERRORS();
  }

  bool can_build(unsigned worker_id, unsigned blueprint_id) const {
    return bc_GameController_can_build(m_gc, worker_id, blueprint_id);
  }

  void build(unsigned worker_id, unsigned blueprint_id) const {
    bc_GameController_build(m_gc, worker_id, blueprint_id);
    CHECK_ERRORS();
  }

  bool can_repair(unsigned worker_id, unsigned structure_id) const {
    return bc_GameController_can_repair(m_gc, worker_id, structure_id);
  }

  void repair(unsigned worker_id, unsigned structure_id) const {
    bc_GameController_repair(m_gc, worker_id, structure_id);
    CHECK_ERRORS();
  }

  bool can_replicate(unsigned worker_id, Direction direction) const {
    return bc_GameController_can_replicate(m_gc, worker_id, direction);
  }

  void replicate(unsigned worker_id, Direction direction) const {
    bc_GameController_replicate(m_gc, worker_id, direction);
    CHECK_ERRORS();
  }

  bool can_javelin(unsigned knight_id, unsigned target_id) const {
    return bc_GameController_can_javelin(m_gc, knight_id, target_id);
  }

  bool is_javelin_ready(unsigned knight_id) const {
    return bc_GameController_is_javelin_ready(m_gc, knight_id);
  }

  void javelin(unsigned knight_id, unsigned target_id) const {
    bc_GameController_javelin(m_gc, knight_id, target_id);
    CHECK_ERRORS();
  }

  bool can_begin_snipe(unsigned ranger_id, const MapLocation& map_location) const {
    return bc_GameController_can_begin_snipe(m_gc, ranger_id, map_location.get_bc());
  }

  void begin_snipe(unsigned ranger_id, const MapLocation& map_location) const {
    bc_GameController_begin_snipe(m_gc, ranger_id, map_location.get_bc());
    CHECK_ERRORS();
  }

  bool can_begin_blink(unsigned mage_id, const MapLocation& map_location) const {
    return bc_GameController_can_blink(m_gc, mage_id, map_location.get_bc());
  }

  bool is_blink_ready(unsigned mage_id) const {
    return bc_GameController_is_blink_ready(m_gc, mage_id);
  }

  void blink(unsigned mage_id, const MapLocation& map_location) const {
    bc_GameController_blink(m_gc, mage_id, map_location.get_bc());
    CHECK_ERRORS();
  }

  bool can_heal(unsigned healer_id, unsigned target_id) const {
    return bc_GameController_can_heal(m_gc, healer_id, target_id);
  }

  bool is_heal_ready(unsigned healer_id) const {
    return bc_GameController_is_heal_ready(m_gc, healer_id);
  }

  void heal(unsigned healer_id, unsigned target_id) const {
    bc_GameController_heal(m_gc, healer_id, target_id);
    CHECK_ERRORS();
  }

  bool can_overcharge(unsigned healer_id, unsigned target_id) const {
    return bc_GameController_can_overcharge(m_gc, healer_id, target_id);
  }

  bool is_overcharge_ready(unsigned healer_id) const {
    return bc_GameController_is_overcharge_ready(m_gc, healer_id);
  }

  void overcharge(unsigned healer_id, unsigned target_id) const {
    bc_GameController_overcharge(m_gc, healer_id, target_id);
    CHECK_ERRORS();
  }

  bool can_load(unsigned structure_id, unsigned robot_id) const {
    return bc_GameController_can_load(m_gc, structure_id, robot_id);
  }

  void load(unsigned structure_id, unsigned robot_id) const {
    bc_GameController_load(m_gc, structure_id, robot_id);
    CHECK_ERRORS();
  }

  bool can_unload(unsigned structure_id, Direction direction) const {
    return bc_GameController_can_unload(m_gc, structure_id, direction);
  }

  void unload(unsigned structure_id, Direction direction) const {
    bc_GameController_unload(m_gc, structure_id, direction);
    CHECK_ERRORS();
  }

  bool can_produce_robot(unsigned factory_id, UnitType unit_type) const {
    return bc_GameController_can_produce_robot(m_gc, factory_id, unit_type);
  }

  void produce_robot(unsigned factory_id, UnitType unit_type) const {
    bc_GameController_produce_robot(m_gc, factory_id, unit_type);
    CHECK_ERRORS();
  }

  RocketLandingInfo get_rocket_landings() const {
    return RocketLandingInfo { bc_GameController_rocket_landings(m_gc) };
  }

  bool can_launch_rocket(unsigned rocket_id, const MapLocation& map_location) const {
    return bc_GameController_can_launch_rocket(m_gc, rocket_id, map_location.get_bc());
  }

  void launch_rocket(unsigned rocket_id, const MapLocation& map_location) const {
    bc_GameController_launch_rocket(m_gc, rocket_id, map_location.get_bc());
    CHECK_ERRORS();
  }

  unsigned get_time_left_ms() const {
    return bc_GameController_get_time_left_ms(m_gc);
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
