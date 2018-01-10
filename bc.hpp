/*
 * C++ API for Battlecode 2018
 *
 * created by Naum Azeredo (https://github.com/naumazeredo/battlecode-2018-cpp-api)
 *
 */

// XXX: Update when C API is released (using Python as reference)

#include <bc.h>

namespace bc {

// TODO: Implement the classes/namespaces/everything using C++11/C++14/C++17

// AsteroidPattern
// AsteroidStrike
// Delta (?)

// Direction
using Direction = bc_Direction;

inline Direction opposite_direction(Direction d) { return bc_Direction_opposite(d); }

// ErrorMessage (?)

// GameController
// Don't instantiate twice, might fail creating multiple bc_GameController
class GameController {
public:
  // new GameController failing? shouldn't ever!
  GameController() : m_gc { new_bc_GameController() }
  {}

  inline uint32_t get_round() const { return bc_GameController_round(m_gc); }

//private:
  bc_GameController* m_gc;

}

// GameMap
// InitialTurnApplication (?)
// Location
// MapLocation
// OrbitPattern
// Planet
// PlanetMap
// Player (?)
// ResearchInfo
// RocketLanding
// RocketLandingInfo
// StartGameMessage (?)
// StartTurnMessage (?)
// Team
// TurnApplication (?)
// TurnMessage (?)
// Unit
// UnitType
// VecMapLocation
// VecRocketLanding
// VecUnit
// VecUnitID
// VecUnitType
// Veci32
// ViewerKeyframe (?)
// ViewerMessage (?)

}
