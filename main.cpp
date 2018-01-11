#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>

#include "bc.hpp"

using namespace bc;

int main() {
  printf("Player C++ bot starting\n");

  // TODO: Provide random numbers on C++ API code
  srand(0);

  Direction dir = North;
  Direction opposite = direction_opposite(dir);

  printf("Opposite direction of %d: %d\n", dir, opposite);

  // Make sure that the world is sane!
  assert(opposite == South);

  printf("Connecting to manager...\n");

  // Most methods return pointers; methods returning integers or enums are the only exception.
  GameController gc;

  if (bc_has_err()) {
    // If there was an error creating gc, just die.
    printf("Failed, dying.\n");
    exit(1);
  }
  printf("Connected!\n");

  // loop through the whole game.
  while (true) {
    unsigned round = gc.get_round();
    printf("Round: %d\n", round);


    auto units = gc.get_my_units();
    for (const auto unit : units) {
      if (unit.get_unit_type() == Factory) {
        auto garrison = unit.get_structure_garrison();
        if (garrison.size() > 0){
          if (gc.can_unload(unit.get_id(), North))
            gc.unload(unit.get_id(), North);
        } else if (gc.can_produce_robot(unit.get_id(), Knight)){
          gc.produce_robot(unit.get_id(), Knight);
        }
      }
      unsigned id = unit.get_id();
      if (unit.get_location().is_on_map()){
      // Calls on the controller take unit IDs for ownership reasons.
        auto locus = unit.get_location().get_map_location();
        auto nearby = gc.sense_nearby_units( locus, 2);
        for ( auto place : nearby ){
          if(gc.can_build(id, place.get_id()) && unit.get_unit_type() == Worker){
            gc.build(id, place.get_id());
          }
        }
      }
      if(gc.can_blueprint(id, Factory, North)){
        gc.blueprint(id, Factory, Northeast);
      }
    }
#if 0
      if (gc.can_move(id, Northeast) && gc.is_move_ready(id)) {
        gc.move_robot(id, Northeast);
      }
#else
#endif

    // this line helps the output logs make more sense by forcing output to be sent
    // to the manager.
    // it's not strictly necessary, but it helps.
    // pause and wait for the next turn.
    fflush(stdout);
    gc.next_turn();
  }

  // I'm convinced C++ is the better option :)
}
