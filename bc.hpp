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
  // TODO: Copy/move semantics

  Planet get_planet() const { return m_planet; }
  int get_x() const { return m_x; }
  int get_y() const { return m_y; }

  void set_planet(Planet planet) { m_planet = p; }
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

  MapLocation translate(Direction direction, int dx, int dy) const {
    return MapLocation(m_planet, m_x + dx, m_y + dy);
  }

  int distance_squared_to(MapLocation map_location) const {
    if (m_planet != map_location.get_planet())
      return INT_MAX;
    int dx = m_x - map_location.get_x();
    int dy = m_y - map_location.get_y();
    return dx * dx + dy * dy;
  }

  // TODO
  Direction direction_to(MapLocation other) const;

  Direction is_adjacent_to(MapLocation other) const {
    return ((*this) != map_location and
            std::abs(m_x - map_location.get_x()) <= 1 and
            std::abs(m_y - map_location.get_y()) <= 1);

  }

  bool is_within_range(unsigned int range, MapLocation map_location) const {
    return range >= distance_squared_to(map_location);
  }

  operator ==(cosnt MapLocation& map_location) const {
    return (map_location.get_planet() == m_planet() and
            map_location.get_x() == m_x and
            map_location.get_y() == m_y);
  }

  operator !=(const MapLocation& map_location) const { return !((*this) == map_location); }

  // TODO: MapLocation to_string
  // TODO: MapLocation JSON

private:
  Planet m_planet;
  int m_x;
  int m_y;
};


// Location
class Location {
public:
  Location() : m_type { Space } {}
  Location(MapLocation map_location) : m_type { Map }, m_map_location { map_location } {}
  Location(int garrison_id) : m_type { Garrison }, m_garrison_id { garrison_id } {}

  // TODO: Copy/move semantics

  bool is_on_map() const { return m_type == Map; }
  bool is_on_planet(Planet planet) const {
    return (m_type == Map and m_map_location.get_planet() == planet());
  }

  MapLocation get_map_location() const {
    if (m_type != Map) {
      // TODO: Use Logger
    }

    return m_map_location;
  }

  bool is_in_garrison() const { return m_type == Garrison; }
  int get_structure() const {
    if (m_type != Garrison) {
      // TODO: Use Logger
    }

    return m_garrison;
  }

  bool is_in_space() const { return m_type == Space; }

  bool is_adjacent_to(Location location) {
    if (m_type != Map) {
      // TODO: Use Logger
    }

    return get_map_location().is_adjacent_to(location.get_map_location());
  }

  bool is_within_range(unsigned range, Location location) {
    if (m_type != Map) {
      // TODO: Use Logger
    }

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

private:
  Team   m_team;
  Planet m_planet;
};

// TODO: move to Player class
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

}
