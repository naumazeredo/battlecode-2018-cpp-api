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

Planet planet_other(Planet p) { return bc_Planet_other(p); }
string planet_debug(Planet p) { return bc_Planet_debug(p); }
string planet_eq(Planet p, Planet other) { return bc_Planet_eq(p, other); }
Planet planet_from_json(string s) { return bc_Planet_from_json(s); }


// Direction
using Direction = bc_Direction;

Direction direction_opposite(Direction d) { return bc_Direction_opposite(d); }
Direction direction_rotate_left(Direction d) { return bc_Direction_rotate_left(Direction d); }
Direction direction_rotate_right(Direction d) { return bc_Direction_rotate_right(Direction d); }
Direction direction_from_json(string s) { return bc_Direction_from_json(s); }
string    direction_to_json(Direction d) { return bc_Direction_to_json(d); }
int       direction_dx(Direction d) { return bc_Direction_dx(d); }
int       direction_dy(Direction d) { return bc_Direction_dy(d); }
bool      direction_is_diagonal(Direction d) { return bc_Direction_is_diagonal(d); }


// MapLocation
class MapLocation {
public:
  MapLocation(Planet planet, int x, int y) : m_planet { planet }, m_x { x }, m_y { y }
  {}

  Planet get_planet() const { return m_planet; }
  int get_x() const { return m_x; }
  int get_y() const { return m_y; }

  void set_planet(Planet planet) { m_planet = p; }
  void set_x(int x) { m_x = x; }
  void set_y(int y) { m_y = y; }

  MapLocation add(Direction direction) {
    return MapLocation(m_planet,
                       m_x + direction_dx(direction),
                       m_y + direction_dy(direction));
  }

  MapLocation subtract(Direction direction) {
    return MapLocation(m_planet,
                       m_x - direction_dx(direction),
                       m_y - direction_dy(direction));
  }

  MapLocation add_multiple(Direction direction, int multiple) {
    return MapLocation(m_planet,
                       m_x + direction_dx(direction) * multiple,
                       m_y + direction_dy(direction) * multiple);
  }

  MapLocation translate(Direction direction, int dx, int dy) {
    return MapLocation(m_planet, m_x + dx, m_y + dy);
  }

  int distance_squared_to(MapLocation map_location) {
    if (m_planet != map_location.get_planet())
      return INT_MAX;
    int dx = m_x - map_location.get_x();
    int dy = m_y - map_location.get_y();
    return dx * dx + dy * dy;
  }

  // TODO
  Direction direction_to(MapLocation other);

  // TODO
  Direction is_adjacent_to(MapLocation other);

  // TODO
  bool is_within_range(unsigned int range, MapLocation map_location) {
    return range >= distance_squared_to(map_location);
  }

private:
  Planet m_planet;
  int m_x;
  int m_y;
};

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
