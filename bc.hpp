/*
 * C++ API for Battlecode 2018
 *
 * created by Naum Azeredo (https://github.com/naumazeredo/battlecode-2018-cpp-api)
 *
 */

// XXX: Update when C API is released (using Python as reference)

#include <vector>
#include <climits>

#include <bc.h>


namespace bc {

// TODO: Implement the classes/namespaces/everything using C++11/C++14/C++17
// TODO: Order classes correctly


// Planet
using Planet = bc_Planet;

Planet      planet_other(Planet planet) { return bc_Planet_other(planet); }
std::string planet_debug(Planet planet) { return bc_Planet_debug(planet); }
std::string planet_to_json(Planet planet) { return bc_Planet_to_json(planet); }
Planet      planet_from_json(std::string s) { return bc_Planet_from_json(s.c_str()); }

// Direction
using Direction = bc_Direction;

int         direction_dx(Direction direction) { return bc_Direction_dx(direction); }
int         direction_dy(Direction direction) { return bc_Direction_dy(direction); }
bool        direction_is_diagonal(Direction direction) { return bc_Direction_is_diagonal(direction); }
Direction   direction_opposite(Direction direction) { return bc_Direction_opposite(direction); }
Direction   direction_rotate_left(Direction direction) { return bc_Direction_rotate_left(direction); }
Direction   direction_rotate_right(Direction direction) { return bc_Direction_rotate_right(direction); }

Direction   direction_from_json(std::string s) { return bc_Direction_from_json(s.c_str()); }
std::string direction_to_json(Direction direction) { return bc_Direction_to_json(direction); }


// MapLocation
class MapLocation {
public:
  MapLocation(Planet planet, int x, int y) : m_planet { planet }, m_x { x }, m_y { y }
  {}

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
  Direction direction_to(MapLocation other) const;

  Direction is_adjacent_to(MapLocation other) const {
    return ((*this) != other and
            std::abs(m_x - other.get_x()) <= 1 and
            std::abs(m_y - other.get_y()) <= 1);

  }

  bool is_within_range(unsigned int range, MapLocation map_location) const {
    return range >= distance_squared_to(map_location);
  }

  bool operator ==(const MapLocation& map_location) const {
    return (map_location.get_planet() == m_planet and
            map_location.get_x() == m_x and
            map_location.get_y() == m_y);
  }
  bool operator !=(const MapLocation& map_location) const { return !((*this) == map_location); }

  // TODO: JSON

private:
  Planet m_planet;
  int m_x;
  int m_y;
};


// Location
class Location {
};


// Team
using Team = bc_Team;

// Player
class Player {
public:
  Player(Team team, Planet planet) : m_planet { planet }, m_team { team }
  {}

  Team    get_team() const { return m_team; }
  Planet  get_planet() const { return m_planet; }

  void    set_team()(Team team) { m_team = team; }
  void    set_planet()(Planet planet) { m_planet = planet; }

  Player& operator=(const Player& player) { m_team = player.m_team; m_planet = player.m_planet; return *this; }
  bool    operator==(const Player& player) { return m_team == player.m_team and m_planet == player.m_planet; }

private:
  Team   m_team;
  Planet m_planet;
};

Player      player_from_json(std::string s) { return bc_Player_from_json(s.c_str()); }
std::string player_debug(Player player) { return bc_Player_debug(player); }
std::string player_to_json(Player player) { return bc_Player_to_json(player); }



// GameController
// Don't instantiate twice, might fail creating multiple bc_GameController
class GameController {
public:
  // new GameController failing? shouldn't ever!
  GameController() : m_gc { new_bc_GameController() }
  {}

  inline uint32_t round() const { return bc_GameController_round(m_gc); }
  inline VecUnit my_units() const {
    VecUnit units;
  }

//private:
  bc_GameController* m_gc;

};



// Unit
class Unit {
public:
  Unit(bc_Unit* unit) : m_unit { unit }, m_id { 0 }
  {}

  inline uint16_t get_id() {
    if (m_id) return m_id;
    return m_id = bc_Unit_id(m_unit);
  }

//private:
  bc_Unit* m_unit;
  uint16_t m_id;
};



// VecUnit
class VecUnit {
public:
  VecUnit() : m_vec { nullptr }
  {}

  operator =(

  ~VecUnit() {
    if (m_vec)
      delete m_vec;
  }

//private;
  bc_VecUnit* m_vec;
};


}

//TODO:UnitType
using UnitType = bc_UnitType;

//TODO:Unit
//

//TODO:PlanetMap
class PlanetMap{
public:
  PlanetMap();
  ~PlanetMap();

  Planet get_planet() const { return planet_; }
  unsigned get_height() const { return height_; }
  unsigned get_width() const { return width_; }
  const vector<Unit>& get_initial_units() const { return initial_units_; }

  void set_planet(Planet planet) { planet_ = planet; }
  void set_height(unsigned height) { height_ = height; }
  void set_width(unsigned width) { width_ = width; }
  //TODO: void set_initial_units()
  bool is_on_map(MapLocation location ) const {
    return (location.get_x()< width_) &&
           (location.get_y()< height_) &&
           (location.get_planet() == planet_);
  }
  bool is_passable_terrain_at(const MapLocation& location) const {
    return is_passable_terrain_[location.get_x()][location.get_y()];
  }
private:
  Planet                      planet_;
  unsigned                    height_,width_;
  vector<Unit>                initial_units_;
  vector< vector <bool> >     is_passable_terrain_;
  vector< vector <unsigned> > initial_karbonite_;
};

//TODO:AsteroidStrike

class AsteroidStrike{
public:
  AsteroidStrike(unsigned karbonite, MapLocation location) :
    karbonite_ { karbonite }
    location_ { location }
    {}
  ~AsteroidStrike() = default;
  unsigned get_karbonite() const { return karbonite_; }
  MapLocation get_location() const { return location_; }
  void set_karbonite(unsigned karbonite) { karbonite_ = karbonite; }
  void set_location(MapLocation location) { location_ = location; }
private:
  unsigned    karbonite_;
  MapLocation location_;
};

//TODO:AsteroidPattern

class AsteroidPattern{
public:
  bool hasAsteroid(unsigned round);

private:

};

//TODO:OrbitPattern
//
//TODO:GameMap
//
//TODO:ResearchInfo
//
//TODO:RocketLanding
//
//TODO:RocketLandingInfo
//
//TODO:GameController

