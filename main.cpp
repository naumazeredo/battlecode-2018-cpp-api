#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>
#include <random>
#include <functional>

#include "bc.hpp"

using namespace bc;


int main() {
  printf("Player C++ bot starting\n");
  printf("Connecting to manager...\n");
  std::default_random_engine generator;
  std::uniform_int_distribution<int> distribution (0,8);
  auto dice = std::bind ( distribution , generator );
  // Most methods return pointers; methods returning integers or enums are the only exception.
  GameController gc;
  gc.queue_research(Knight);
  gc.queue_research(Knight);
  gc.queue_research(Knight);

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
      const unsigned id = unit.get_id();

      if (unit.get_unit_type() == Factory) {
        auto garrison = unit.get_structure_garrison();

        if (garrison.size() > 0){
          Direction dir = (Direction) dice();
          if (gc.can_unload(id, dir)){
            gc.unload(id, dir);
            continue;
          }
        } else if (gc.can_produce_robot(id, Knight)){
          gc.produce_robot(id, Knight);
          continue;
        }
      }

      if (unit.get_location().is_on_map()){
      // Calls on the controller take unit IDs for ownership reasons.
        const auto locus = unit.get_location().get_map_location();
        const auto nearby = gc.sense_nearby_units(locus, 2);
        for ( auto place : nearby ){
          //Building 'em blueprints
          if(gc.can_build(id, place.get_id()) && unit.get_unit_type() == Worker){
            gc.build(id, place.get_id());
            continue;
          }
          //Attacking 'em enemies
          if( place.get_team() != unit.get_team() and
              gc.is_attack_ready(id) and
              gc.can_attack(id, place.get_id()) ){
              gc.attack(id, place.get_id());
              continue;
          }
        }
      }

      Direction d = (Direction) dice();
      // Placing 'em blueprints
      if(gc.can_blueprint(id, Factory, d) and gc.get_karbonite() > unit_type_get_blueprint_cost(Factory)){
        gc.blueprint(id, Factory, d);
      } else if (gc.is_move_ready(id) && gc.can_move(id,d)){ // Moving otherwise (if possible)
        gc.move_robot(id,d);
      }
    }
    // this line helps the output logs make more sense by forcing output to be sent
    // to the manager.
    // it's not strictly necessary, but it helps.
    // pause and wait for the next turn.
    fflush(stdout);
    gc.next_turn();
  }
  // I'm convinced C++ is the better option :)
}
