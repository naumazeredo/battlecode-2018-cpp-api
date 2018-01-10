/*
 * C++ API for Battlecode 2018
 *
 * created by Naum Azeredo (https://github.com/naumazeredo/battlecode-2018-cpp-api)
 *
 */

// XXX: Update when C API is released (using Python as reference)

#include <vector>

#include <bc.h>


namespace bc {

// TODO: Implement the classes/namespaces/everything using C++11/C++14/C++17
// TODO: Order classes correctly

// Planet
using Planet = bc_Planet;


// Direction
using Direction = bc_Direction;

inline Direction opposite_direction(Direction d) { return bc_Direction_opposite(d); }



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
