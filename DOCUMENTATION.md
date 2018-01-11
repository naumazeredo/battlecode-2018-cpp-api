# Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`namespace `[`bc`](#namespacebc) | 

# namespace `bc` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public std::vector< int > `[`to_vector`](#bc___8hpp_1a797801b6557219af30d83f363cf7c5b8)`(bc_Veci32 * vec)`            | 
`public Planet `[`planet_other`](#bc___8hpp_1ab129eac4d03e8919482be61bef489a9b)`(Planet planet)`            | 
`public std::string `[`to_string`](#bc___8hpp_1a3f46915eb6cdd13b92e04d4079796c76)`(Planet planet)`            | 
`public int `[`direction_dx`](#bc___8hpp_1a376b234b3b8e965a9a8c4750bf364b8c)`(Direction direction)`            | 
`public int `[`direction_dy`](#bc___8hpp_1a3f2be7da219ee9c159eafeb922fa67e5)`(Direction direction)`            | 
`public bool `[`direction_is_diagonal`](#bc___8hpp_1a4d2d6143d7bb8e6be938069c9077083d)`(Direction direction)`            | 
`public Direction `[`direction_opposite`](#bc___8hpp_1ae56f54d1c284dcbc7954060dac51779d)`(Direction direction)`            | 
`public Direction `[`direction_rotate_left`](#bc___8hpp_1a31ad846fb08f589e3acae67d8e1b977e)`(Direction direction)`            | 
`public Direction `[`direction_rotate_right`](#bc___8hpp_1a7050792e84c83b0955b34db7d707e15d)`(Direction direction)`            | 
`public std::vector< `[`MapLocation`](#classbc_1_1MapLocation)` > `[`to_vector`](#bc___8hpp_1a37c3a6ff7f923821d9871f7cff4daf15)`(bc_VecMapLocation * vec)`            | 
`public std::vector< unsigned > `[`to_vector`](#bc___8hpp_1a049a32b0d722318b4ecb5bdcf0346681)`(bc_VecUnitID * vec)`            | 
`public bool `[`is_robot`](#bc___8hpp_1a2ed320d0f77bc58e62def3a05bff51bd)`(UnitType unit_type)`            | 
`public bool `[`is_structure`](#bc___8hpp_1a367f7b1ad4bcce27bbd94a536393a89a)`(UnitType unit_type)`            | 
`public unsigned `[`unit_type_get_factory_cost`](#bc___8hpp_1ac2a1295865dd3ff78b0876dd8de3f353)`(UnitType unit_type)`            | 
`public unsigned `[`unit_type_get_blueprint_cost`](#bc___8hpp_1a772eff6f3ed29a705f5d0a49774281ee)`(UnitType unit_type)`            | 
`public unsigned `[`unit_type_get_replicate_cost`](#bc___8hpp_1a5f27ecfafdd951a7fa3dcca81a54141b)`()`            | 
`public unsigned `[`unit_type_get_value`](#bc___8hpp_1a31345858842950badc7c9e191ba5fa5b)`(UnitType unit_type)`            | 
`public std::vector< UnitType > `[`to_vector`](#bc___8hpp_1a926b587d5f3426f83b9362b8dfd9ec25)`(bc_VecUnitType * vec)`            | 
`public std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`to_vector`](#bc___8hpp_1abb74bc3933ffb4a6bac16bf142634c07)`(bc_VecUnit * vec)`            | 
`public std::vector< `[`RocketLanding`](#classbc_1_1RocketLanding)` > `[`to_vector`](#bc___8hpp_1a7b87d700e5f16b9b0509e34a057cadd9)`(bc_VecRocketLanding * vec)`            | 
`class `[`bc::AsteroidPattern`](#classbc_1_1AsteroidPattern) | 
`class `[`bc::AsteroidStrike`](#classbc_1_1AsteroidStrike) | 
`class `[`bc::GameController`](#classbc_1_1GameController) | 
`class `[`bc::Location`](#classbc_1_1Location) | 
`class `[`bc::MapLocation`](#classbc_1_1MapLocation) | 
`class `[`bc::OrbitPattern`](#classbc_1_1OrbitPattern) | 
`class `[`bc::PlanetMap`](#classbc_1_1PlanetMap) | 
`class `[`bc::ResearchInfo`](#classbc_1_1ResearchInfo) | 
`class `[`bc::RocketLanding`](#classbc_1_1RocketLanding) | 
`class `[`bc::RocketLandingInfo`](#classbc_1_1RocketLandingInfo) | 
`class `[`bc::Unit`](#classbc_1_1Unit) | 

## Members

#### `public std::vector< int > `[`to_vector`](#bc___8hpp_1a797801b6557219af30d83f363cf7c5b8)`(bc_Veci32 * vec)` 

#### `public Planet `[`planet_other`](#bc___8hpp_1ab129eac4d03e8919482be61bef489a9b)`(Planet planet)` 

#### `public std::string `[`to_string`](#bc___8hpp_1a3f46915eb6cdd13b92e04d4079796c76)`(Planet planet)` 

#### `public int `[`direction_dx`](#bc___8hpp_1a376b234b3b8e965a9a8c4750bf364b8c)`(Direction direction)` 

#### `public int `[`direction_dy`](#bc___8hpp_1a3f2be7da219ee9c159eafeb922fa67e5)`(Direction direction)` 

#### `public bool `[`direction_is_diagonal`](#bc___8hpp_1a4d2d6143d7bb8e6be938069c9077083d)`(Direction direction)` 

#### `public Direction `[`direction_opposite`](#bc___8hpp_1ae56f54d1c284dcbc7954060dac51779d)`(Direction direction)` 

#### `public Direction `[`direction_rotate_left`](#bc___8hpp_1a31ad846fb08f589e3acae67d8e1b977e)`(Direction direction)` 

#### `public Direction `[`direction_rotate_right`](#bc___8hpp_1a7050792e84c83b0955b34db7d707e15d)`(Direction direction)` 

#### `public std::vector< `[`MapLocation`](#classbc_1_1MapLocation)` > `[`to_vector`](#bc___8hpp_1a37c3a6ff7f923821d9871f7cff4daf15)`(bc_VecMapLocation * vec)` 

#### `public std::vector< unsigned > `[`to_vector`](#bc___8hpp_1a049a32b0d722318b4ecb5bdcf0346681)`(bc_VecUnitID * vec)` 

#### `public bool `[`is_robot`](#bc___8hpp_1a2ed320d0f77bc58e62def3a05bff51bd)`(UnitType unit_type)` 

#### `public bool `[`is_structure`](#bc___8hpp_1a367f7b1ad4bcce27bbd94a536393a89a)`(UnitType unit_type)` 

#### `public unsigned `[`unit_type_get_factory_cost`](#bc___8hpp_1ac2a1295865dd3ff78b0876dd8de3f353)`(UnitType unit_type)` 

#### `public unsigned `[`unit_type_get_blueprint_cost`](#bc___8hpp_1a772eff6f3ed29a705f5d0a49774281ee)`(UnitType unit_type)` 

#### `public unsigned `[`unit_type_get_replicate_cost`](#bc___8hpp_1a5f27ecfafdd951a7fa3dcca81a54141b)`()` 

#### `public unsigned `[`unit_type_get_value`](#bc___8hpp_1a31345858842950badc7c9e191ba5fa5b)`(UnitType unit_type)` 

#### `public std::vector< UnitType > `[`to_vector`](#bc___8hpp_1a926b587d5f3426f83b9362b8dfd9ec25)`(bc_VecUnitType * vec)` 

#### `public std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`to_vector`](#bc___8hpp_1abb74bc3933ffb4a6bac16bf142634c07)`(bc_VecUnit * vec)` 

#### `public std::vector< `[`RocketLanding`](#classbc_1_1RocketLanding)` > `[`to_vector`](#bc___8hpp_1a7b87d700e5f16b9b0509e34a057cadd9)`(bc_VecRocketLanding * vec)` 

# class `bc::AsteroidPattern` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`AsteroidPattern`](#classbc_1_1AsteroidPattern_1a9904cb9395dc76bd5674adbc5a6282b0)`(bc_AsteroidPattern * pattern)` | 
`public inline bool `[`has_asteroid_on_round`](#classbc_1_1AsteroidPattern_1a80e6f05c79d6fc9e36e20cc4464bec9f)`(unsigned round) const` | 
`public inline `[`AsteroidStrike`](#classbc_1_1AsteroidStrike)` `[`get_asteroid_on_round`](#classbc_1_1AsteroidPattern_1a41fcc0924ec3ff55eead2e38522585fe)`(unsigned round) const` | 

## Members

#### `public inline  `[`AsteroidPattern`](#classbc_1_1AsteroidPattern_1a9904cb9395dc76bd5674adbc5a6282b0)`(bc_AsteroidPattern * pattern)` 

#### `public inline bool `[`has_asteroid_on_round`](#classbc_1_1AsteroidPattern_1a80e6f05c79d6fc9e36e20cc4464bec9f)`(unsigned round) const` 

#### `public inline `[`AsteroidStrike`](#classbc_1_1AsteroidStrike)` `[`get_asteroid_on_round`](#classbc_1_1AsteroidPattern_1a41fcc0924ec3ff55eead2e38522585fe)`(unsigned round) const` 

# class `bc::AsteroidStrike` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`AsteroidStrike`](#classbc_1_1AsteroidStrike_1ab71a8215dfa01e65ba12d8d205b86c74)`(unsigned karbonite,const `[`MapLocation`](#classbc_1_1MapLocation)` & location)` | 
`public inline  `[`AsteroidStrike`](#classbc_1_1AsteroidStrike_1a867eccc4e42ed79b50bd43e52014377f)`(bc_AsteroidStrike * asteroid)` | 
`public inline unsigned `[`get_karbonite`](#classbc_1_1AsteroidStrike_1a6f84a334a68cebe4c191e240b096709d)`() const` | 
`public inline `[`MapLocation`](#classbc_1_1MapLocation)` `[`get_map_location`](#classbc_1_1AsteroidStrike_1a4ed03ef835c41f72f5d78ad9ddaf55b0)`() const` | 

## Members

#### `public inline  `[`AsteroidStrike`](#classbc_1_1AsteroidStrike_1ab71a8215dfa01e65ba12d8d205b86c74)`(unsigned karbonite,const `[`MapLocation`](#classbc_1_1MapLocation)` & location)` 

#### `public inline  `[`AsteroidStrike`](#classbc_1_1AsteroidStrike_1a867eccc4e42ed79b50bd43e52014377f)`(bc_AsteroidStrike * asteroid)` 

#### `public inline unsigned `[`get_karbonite`](#classbc_1_1AsteroidStrike_1a6f84a334a68cebe4c191e240b096709d)`() const` 

#### `public inline `[`MapLocation`](#classbc_1_1MapLocation)` `[`get_map_location`](#classbc_1_1AsteroidStrike_1a4ed03ef835c41f72f5d78ad9ddaf55b0)`() const` 

# class `bc::GameController` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`GameController`](#classbc_1_1GameController_1a11549ebb60606ce9fb7746e8dae2cecc)`()` | 
`public inline  `[`~GameController`](#classbc_1_1GameController_1a78770265fe3683efab5c20d8817a309e)`()` | 
`public inline void `[`next_turn`](#classbc_1_1GameController_1ae60afca5c3214ddd7545ce8b0378bbd9)`() const` | 
`public inline unsigned `[`get_round`](#classbc_1_1GameController_1a1d5f54077115253ef2a4a3185b563b25)`() const` | 
`public inline Planet `[`get_planet`](#classbc_1_1GameController_1ad50934738b703c0dac02fc2a85a72a10)`() const` | 
`public inline Team `[`get_team`](#classbc_1_1GameController_1a5254f80cb4350fb98ddf0ba4fafb036d)`() const` | 
`public inline const `[`PlanetMap`](#classbc_1_1PlanetMap)` & `[`get_starting_planet`](#classbc_1_1GameController_1a0ebb9fbc48d6022fd636f258e9679973)`(Planet planet)` | 
`public inline const `[`PlanetMap`](#classbc_1_1PlanetMap)` & `[`get_earth_map`](#classbc_1_1GameController_1a79693f1105a141212b52126a1fa0de51)`() const` | 
`public inline const `[`PlanetMap`](#classbc_1_1PlanetMap)` & `[`get_mars_map`](#classbc_1_1GameController_1a000f53d4e933b19d2432fd734ffa4c9e)`() const` | 
`public inline unsigned `[`get_karbonite`](#classbc_1_1GameController_1a54f8745e7fcf48c796689381c2177f36)`() const` | 
`public inline `[`Unit`](#classbc_1_1Unit)` `[`get_unit`](#classbc_1_1GameController_1a53cb3fc02161c27e54edd14269c0fe47)`(unsigned id) const` | 
`public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`get_units`](#classbc_1_1GameController_1acbba4a8b8432ab46d807f8c266a02619)`() const` | 
`public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`get_my_units`](#classbc_1_1GameController_1a21737a1bd2dd66534937ddd80e2105c0)`() const` | 
`public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`get_units_in_space`](#classbc_1_1GameController_1a0de2c06a5130266d093ef962580d1f53)`() const` | 
`public inline unsigned `[`get_karbonite_at`](#classbc_1_1GameController_1a219209d98dc0f25a0b092ed3fafd7691)`(`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` | 
`public inline std::vector< `[`MapLocation`](#classbc_1_1MapLocation)` > `[`get_all_locations_within`](#classbc_1_1GameController_1a4e45a2febc2700e6cb50b98a692530fb)`(`[`MapLocation`](#classbc_1_1MapLocation)` map_location,unsigned radius_squared) const` | 
`public inline bool `[`can_sense_location`](#classbc_1_1GameController_1a77f912c59dac7c56000b06ff6166feb7)`(`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` | 
`public inline bool `[`can_sense_unit`](#classbc_1_1GameController_1a57914ebe1f56841f33ed6ed4f83b8f27)`(unsigned id) const` | 
`public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`sense_nearby_units`](#classbc_1_1GameController_1a22ab6db729e5aa80a0491f15cab4da7a)`(`[`MapLocation`](#classbc_1_1MapLocation)` map_location,unsigned radius_squared) const` | 
`public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`sense_nearby_units_by_team`](#classbc_1_1GameController_1af86f4a1d56b1492d0daa004f98861cd1)`(`[`MapLocation`](#classbc_1_1MapLocation)` map_location,unsigned radius_squared,Team team) const` | 
`public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`sense_nearby_units_by_type`](#classbc_1_1GameController_1acb98208d86574de686bfd600538c30f2)`(`[`MapLocation`](#classbc_1_1MapLocation)` map_location,unsigned radius_squared,UnitType type) const` | 
`public inline bool `[`has_unit_at_location`](#classbc_1_1GameController_1a671b894e97b54964349e604dfd914107)`(`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` | 
`public inline `[`Unit`](#classbc_1_1Unit)` `[`sense_unit_at_location`](#classbc_1_1GameController_1ae95d3d92ca38fabd331522f15ae005c2)`(`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` | 
`public inline const `[`AsteroidPattern`](#classbc_1_1AsteroidPattern)` & `[`get_asteroid_pattern`](#classbc_1_1GameController_1aeeee9efb73ccbaab47c7fc9f00560607)`() const` | 
`public inline const `[`OrbitPattern`](#classbc_1_1OrbitPattern)` & `[`get_orbit_pattern`](#classbc_1_1GameController_1aff7c9034b27f65de970dd175c0d594c2)`() const` | 
`public inline unsigned `[`get_current_duration_of_flight`](#classbc_1_1GameController_1a360710a324bc0ad53186ba0946a1e661)`() const` | 
`public inline std::vector< int > `[`get_team_array`](#classbc_1_1GameController_1ab95456005163781b3b885e6c0b40e95e)`(Planet planet) const` | 
`public inline void `[`write_team_array`](#classbc_1_1GameController_1a3b14db43392828f3cfdf0dd900aa5826)`(unsigned index,int value) const` | 
`public inline void `[`disintegrate_unit`](#classbc_1_1GameController_1af7960d09585c4619da3af1adeda1d7cd)`(unsigned id) const` | 
`public inline bool `[`is_occupiable`](#classbc_1_1GameController_1aa4514059e7eb2a144202c398a8db3c0f)`(`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` | 
`public inline bool `[`can_move`](#classbc_1_1GameController_1ae7f2fd1a41274fdce9a807fcc89bb31a)`(unsigned id,Direction direction) const` | 
`public inline bool `[`is_move_ready`](#classbc_1_1GameController_1ae244044dddf7f6b256ee5b58ad64b6ce)`(unsigned id) const` | 
`public inline void `[`move_robot`](#classbc_1_1GameController_1a9022d8a19326124643dbd9a009bc5cfe)`(unsigned id,Direction direction) const` | 
`public inline bool `[`can_attack`](#classbc_1_1GameController_1a51a8d1903c272e83a4c267362028743f)`(unsigned id,unsigned target_id) const` | 
`public inline bool `[`is_attack_ready`](#classbc_1_1GameController_1a2a27b60bac652885232e1e1bc1e06fc6)`(unsigned id) const` | 
`public inline void `[`attack`](#classbc_1_1GameController_1a8edb6cb5ffa04ba6f71e8a5e0d4bf2e4)`(unsigned id,unsigned target_id) const` | 
`public inline `[`ResearchInfo`](#classbc_1_1ResearchInfo)` `[`get_research_info`](#classbc_1_1GameController_1a1a65e6ac5be817a6251e27c06276be0b)`() const` | 
`public inline bool `[`reset_research`](#classbc_1_1GameController_1aab3bcd9ceedc3279f3939ab801038270)`() const` | 
`public inline bool `[`queue_research`](#classbc_1_1GameController_1adfc5d172ac0c9e6825a9b0605de562f6)`(UnitType branch) const` | 
`public inline bool `[`can_harvest`](#classbc_1_1GameController_1a4438df72f6c0bfde90c7a10f1e85b042)`(unsigned id,Direction direction) const` | 
`public inline void `[`harvest`](#classbc_1_1GameController_1a68a172d79b6153ca4f58b3eb291a958f)`(unsigned id,Direction direction) const` | 
`public inline bool `[`can_blueprint`](#classbc_1_1GameController_1a4377a846104f1a865d0f6229a89eeabd)`(unsigned id,UnitType unit_type,Direction direction) const` | 
`public inline void `[`blueprint`](#classbc_1_1GameController_1ad36c5ce85d509124d4f6de835ceac5fd)`(unsigned id,UnitType unit_type,Direction direction) const` | 
`public inline bool `[`can_build`](#classbc_1_1GameController_1a6d617745de46f37e5a0187e2c4590f68)`(unsigned worker_id,unsigned blueprint_id) const` | 
`public inline void `[`build`](#classbc_1_1GameController_1ae9ba265dafa4edc2fab8a11673545549)`(unsigned worker_id,unsigned blueprint_id) const` | 
`public inline bool `[`can_repair`](#classbc_1_1GameController_1a8111a6261382763c0d290e1727b71a7c)`(unsigned worker_id,unsigned structure_id) const` | 
`public inline void `[`repair`](#classbc_1_1GameController_1a7f1ba949b58b8ec3328cc3ba984c26a7)`(unsigned worker_id,unsigned structure_id) const` | 
`public inline void `[`replicate`](#classbc_1_1GameController_1a6938f4b7e8a073e3acae4133686e34e3)`(unsigned worker_id,Direction direction) const` | 
`public inline bool `[`can_javelin`](#classbc_1_1GameController_1a77c53b59eb533f6e22ff079a25503d36)`(unsigned knight_id,unsigned target_id) const` | 
`public inline bool `[`is_javelin_ready`](#classbc_1_1GameController_1ac1a328922aa28243c6fb064585ef715d)`(unsigned knight_id) const` | 
`public inline void `[`javelin`](#classbc_1_1GameController_1a0d0df58c37778e08516a75429fb49bd8)`(unsigned knight_id,unsigned target_id) const` | 
`public inline bool `[`can_begin_snipe`](#classbc_1_1GameController_1aac5742e3f39055bb0a147c215cacd51b)`(unsigned ranger_id,`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` | 
`public inline void `[`begin_snipe`](#classbc_1_1GameController_1a7edb36194237d50d2cdb27b683059e64)`(unsigned ranger_id,`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` | 
`public inline bool `[`can_begin_blink`](#classbc_1_1GameController_1a03427b65ca860f0be427a8803d951d36)`(unsigned mage_id,`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` | 
`public inline bool `[`is_blink_ready`](#classbc_1_1GameController_1a4b624a44370544aab3da812e36866646)`(unsigned mage_id) const` | 
`public inline void `[`blink`](#classbc_1_1GameController_1a377dd53e81a4a4c3abca8cf0a6974813)`(unsigned mage_id,`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` | 
`public inline bool `[`can_heal`](#classbc_1_1GameController_1aabd6b77ff681b5cff80fe3804eb91b6b)`(unsigned healer_id,unsigned target_id) const` | 
`public inline bool `[`is_heal_ready`](#classbc_1_1GameController_1a550cc28d4942640a3a1453f87be53f27)`(unsigned healer_id) const` | 
`public inline void `[`heal`](#classbc_1_1GameController_1ac030023653b0864dcf858f203d7bdb46)`(unsigned healer_id,unsigned target_id) const` | 
`public inline bool `[`is_overcharge_ready`](#classbc_1_1GameController_1a9a1d2569d67de48eb351964dac899c83)`(unsigned healer_id) const` | 
`public inline void `[`overcharge`](#classbc_1_1GameController_1a93ad878d8eeb286d1c9f3223404fed9b)`(unsigned healer_id,unsigned target_id) const` | 
`public inline bool `[`can_load`](#classbc_1_1GameController_1a51c816f85e9c0f40f10ee65ff100f48d)`(unsigned structure_id,unsigned robot_id) const` | 
`public inline void `[`load`](#classbc_1_1GameController_1a4edaefa7459063b354193c3ad96cc24e)`(unsigned structure_id,unsigned robot_id) const` | 
`public inline bool `[`can_unload`](#classbc_1_1GameController_1a8b0217178de5bc93dd4208f5ecc33332)`(unsigned structure_id,Direction direction) const` | 
`public inline void `[`unload`](#classbc_1_1GameController_1a2cfce8136583d6c5049355b3f8d5086f)`(unsigned structure_id,Direction direction) const` | 
`public inline bool `[`can_produce_robot`](#classbc_1_1GameController_1a1b2f66ca3750889f429f2784dd2d2fa1)`(unsigned factory_id,UnitType unit_type) const` | 
`public inline void `[`produce_robot`](#classbc_1_1GameController_1ad23baf92fdaa8b0a971ba0cf921046f6)`(unsigned factory_id,UnitType unit_type) const` | 
`public inline `[`RocketLandingInfo`](#classbc_1_1RocketLandingInfo)` `[`get_rocket_landings`](#classbc_1_1GameController_1a2c2ed052db056af0a3269c9b377e95f3)`() const` | 
`public inline bool `[`can_launch_rocket`](#classbc_1_1GameController_1aad3896c7562f79d9f6e575059086519f)`(unsigned rocket_id,`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` | 
`public inline void `[`launch_rocket`](#classbc_1_1GameController_1ad7730457a175c0e02b673e9048ce9c84)`(unsigned rocket_id,`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` | 
`public inline bool `[`is_over`](#classbc_1_1GameController_1ad1fd0e92f15833e3c10181161aa8b47b)`() const` | 
`public inline Team `[`get_winning_team`](#classbc_1_1GameController_1af5d8f6949de85a9523edbf5a851ecfc7)`() const` | 

## Members

#### `public inline  `[`GameController`](#classbc_1_1GameController_1a11549ebb60606ce9fb7746e8dae2cecc)`()` 

#### `public inline  `[`~GameController`](#classbc_1_1GameController_1a78770265fe3683efab5c20d8817a309e)`()` 

#### `public inline void `[`next_turn`](#classbc_1_1GameController_1ae60afca5c3214ddd7545ce8b0378bbd9)`() const` 

#### `public inline unsigned `[`get_round`](#classbc_1_1GameController_1a1d5f54077115253ef2a4a3185b563b25)`() const` 

#### `public inline Planet `[`get_planet`](#classbc_1_1GameController_1ad50934738b703c0dac02fc2a85a72a10)`() const` 

#### `public inline Team `[`get_team`](#classbc_1_1GameController_1a5254f80cb4350fb98ddf0ba4fafb036d)`() const` 

#### `public inline const `[`PlanetMap`](#classbc_1_1PlanetMap)` & `[`get_starting_planet`](#classbc_1_1GameController_1a0ebb9fbc48d6022fd636f258e9679973)`(Planet planet)` 

#### `public inline const `[`PlanetMap`](#classbc_1_1PlanetMap)` & `[`get_earth_map`](#classbc_1_1GameController_1a79693f1105a141212b52126a1fa0de51)`() const` 

#### `public inline const `[`PlanetMap`](#classbc_1_1PlanetMap)` & `[`get_mars_map`](#classbc_1_1GameController_1a000f53d4e933b19d2432fd734ffa4c9e)`() const` 

#### `public inline unsigned `[`get_karbonite`](#classbc_1_1GameController_1a54f8745e7fcf48c796689381c2177f36)`() const` 

#### `public inline `[`Unit`](#classbc_1_1Unit)` `[`get_unit`](#classbc_1_1GameController_1a53cb3fc02161c27e54edd14269c0fe47)`(unsigned id) const` 

#### `public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`get_units`](#classbc_1_1GameController_1acbba4a8b8432ab46d807f8c266a02619)`() const` 

#### `public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`get_my_units`](#classbc_1_1GameController_1a21737a1bd2dd66534937ddd80e2105c0)`() const` 

#### `public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`get_units_in_space`](#classbc_1_1GameController_1a0de2c06a5130266d093ef962580d1f53)`() const` 

#### `public inline unsigned `[`get_karbonite_at`](#classbc_1_1GameController_1a219209d98dc0f25a0b092ed3fafd7691)`(`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` 

#### `public inline std::vector< `[`MapLocation`](#classbc_1_1MapLocation)` > `[`get_all_locations_within`](#classbc_1_1GameController_1a4e45a2febc2700e6cb50b98a692530fb)`(`[`MapLocation`](#classbc_1_1MapLocation)` map_location,unsigned radius_squared) const` 

#### `public inline bool `[`can_sense_location`](#classbc_1_1GameController_1a77f912c59dac7c56000b06ff6166feb7)`(`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` 

#### `public inline bool `[`can_sense_unit`](#classbc_1_1GameController_1a57914ebe1f56841f33ed6ed4f83b8f27)`(unsigned id) const` 

#### `public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`sense_nearby_units`](#classbc_1_1GameController_1a22ab6db729e5aa80a0491f15cab4da7a)`(`[`MapLocation`](#classbc_1_1MapLocation)` map_location,unsigned radius_squared) const` 

#### `public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`sense_nearby_units_by_team`](#classbc_1_1GameController_1af86f4a1d56b1492d0daa004f98861cd1)`(`[`MapLocation`](#classbc_1_1MapLocation)` map_location,unsigned radius_squared,Team team) const` 

#### `public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`sense_nearby_units_by_type`](#classbc_1_1GameController_1acb98208d86574de686bfd600538c30f2)`(`[`MapLocation`](#classbc_1_1MapLocation)` map_location,unsigned radius_squared,UnitType type) const` 

#### `public inline bool `[`has_unit_at_location`](#classbc_1_1GameController_1a671b894e97b54964349e604dfd914107)`(`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` 

#### `public inline `[`Unit`](#classbc_1_1Unit)` `[`sense_unit_at_location`](#classbc_1_1GameController_1ae95d3d92ca38fabd331522f15ae005c2)`(`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` 

#### `public inline const `[`AsteroidPattern`](#classbc_1_1AsteroidPattern)` & `[`get_asteroid_pattern`](#classbc_1_1GameController_1aeeee9efb73ccbaab47c7fc9f00560607)`() const` 

#### `public inline const `[`OrbitPattern`](#classbc_1_1OrbitPattern)` & `[`get_orbit_pattern`](#classbc_1_1GameController_1aff7c9034b27f65de970dd175c0d594c2)`() const` 

#### `public inline unsigned `[`get_current_duration_of_flight`](#classbc_1_1GameController_1a360710a324bc0ad53186ba0946a1e661)`() const` 

#### `public inline std::vector< int > `[`get_team_array`](#classbc_1_1GameController_1ab95456005163781b3b885e6c0b40e95e)`(Planet planet) const` 

#### `public inline void `[`write_team_array`](#classbc_1_1GameController_1a3b14db43392828f3cfdf0dd900aa5826)`(unsigned index,int value) const` 

#### `public inline void `[`disintegrate_unit`](#classbc_1_1GameController_1af7960d09585c4619da3af1adeda1d7cd)`(unsigned id) const` 

#### `public inline bool `[`is_occupiable`](#classbc_1_1GameController_1aa4514059e7eb2a144202c398a8db3c0f)`(`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` 

#### `public inline bool `[`can_move`](#classbc_1_1GameController_1ae7f2fd1a41274fdce9a807fcc89bb31a)`(unsigned id,Direction direction) const` 

#### `public inline bool `[`is_move_ready`](#classbc_1_1GameController_1ae244044dddf7f6b256ee5b58ad64b6ce)`(unsigned id) const` 

#### `public inline void `[`move_robot`](#classbc_1_1GameController_1a9022d8a19326124643dbd9a009bc5cfe)`(unsigned id,Direction direction) const` 

#### `public inline bool `[`can_attack`](#classbc_1_1GameController_1a51a8d1903c272e83a4c267362028743f)`(unsigned id,unsigned target_id) const` 

#### `public inline bool `[`is_attack_ready`](#classbc_1_1GameController_1a2a27b60bac652885232e1e1bc1e06fc6)`(unsigned id) const` 

#### `public inline void `[`attack`](#classbc_1_1GameController_1a8edb6cb5ffa04ba6f71e8a5e0d4bf2e4)`(unsigned id,unsigned target_id) const` 

#### `public inline `[`ResearchInfo`](#classbc_1_1ResearchInfo)` `[`get_research_info`](#classbc_1_1GameController_1a1a65e6ac5be817a6251e27c06276be0b)`() const` 

#### `public inline bool `[`reset_research`](#classbc_1_1GameController_1aab3bcd9ceedc3279f3939ab801038270)`() const` 

#### `public inline bool `[`queue_research`](#classbc_1_1GameController_1adfc5d172ac0c9e6825a9b0605de562f6)`(UnitType branch) const` 

#### `public inline bool `[`can_harvest`](#classbc_1_1GameController_1a4438df72f6c0bfde90c7a10f1e85b042)`(unsigned id,Direction direction) const` 

#### `public inline void `[`harvest`](#classbc_1_1GameController_1a68a172d79b6153ca4f58b3eb291a958f)`(unsigned id,Direction direction) const` 

#### `public inline bool `[`can_blueprint`](#classbc_1_1GameController_1a4377a846104f1a865d0f6229a89eeabd)`(unsigned id,UnitType unit_type,Direction direction) const` 

#### `public inline void `[`blueprint`](#classbc_1_1GameController_1ad36c5ce85d509124d4f6de835ceac5fd)`(unsigned id,UnitType unit_type,Direction direction) const` 

#### `public inline bool `[`can_build`](#classbc_1_1GameController_1a6d617745de46f37e5a0187e2c4590f68)`(unsigned worker_id,unsigned blueprint_id) const` 

#### `public inline void `[`build`](#classbc_1_1GameController_1ae9ba265dafa4edc2fab8a11673545549)`(unsigned worker_id,unsigned blueprint_id) const` 

#### `public inline bool `[`can_repair`](#classbc_1_1GameController_1a8111a6261382763c0d290e1727b71a7c)`(unsigned worker_id,unsigned structure_id) const` 

#### `public inline void `[`repair`](#classbc_1_1GameController_1a7f1ba949b58b8ec3328cc3ba984c26a7)`(unsigned worker_id,unsigned structure_id) const` 

#### `public inline void `[`replicate`](#classbc_1_1GameController_1a6938f4b7e8a073e3acae4133686e34e3)`(unsigned worker_id,Direction direction) const` 

#### `public inline bool `[`can_javelin`](#classbc_1_1GameController_1a77c53b59eb533f6e22ff079a25503d36)`(unsigned knight_id,unsigned target_id) const` 

#### `public inline bool `[`is_javelin_ready`](#classbc_1_1GameController_1ac1a328922aa28243c6fb064585ef715d)`(unsigned knight_id) const` 

#### `public inline void `[`javelin`](#classbc_1_1GameController_1a0d0df58c37778e08516a75429fb49bd8)`(unsigned knight_id,unsigned target_id) const` 

#### `public inline bool `[`can_begin_snipe`](#classbc_1_1GameController_1aac5742e3f39055bb0a147c215cacd51b)`(unsigned ranger_id,`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` 

#### `public inline void `[`begin_snipe`](#classbc_1_1GameController_1a7edb36194237d50d2cdb27b683059e64)`(unsigned ranger_id,`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` 

#### `public inline bool `[`can_begin_blink`](#classbc_1_1GameController_1a03427b65ca860f0be427a8803d951d36)`(unsigned mage_id,`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` 

#### `public inline bool `[`is_blink_ready`](#classbc_1_1GameController_1a4b624a44370544aab3da812e36866646)`(unsigned mage_id) const` 

#### `public inline void `[`blink`](#classbc_1_1GameController_1a377dd53e81a4a4c3abca8cf0a6974813)`(unsigned mage_id,`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` 

#### `public inline bool `[`can_heal`](#classbc_1_1GameController_1aabd6b77ff681b5cff80fe3804eb91b6b)`(unsigned healer_id,unsigned target_id) const` 

#### `public inline bool `[`is_heal_ready`](#classbc_1_1GameController_1a550cc28d4942640a3a1453f87be53f27)`(unsigned healer_id) const` 

#### `public inline void `[`heal`](#classbc_1_1GameController_1ac030023653b0864dcf858f203d7bdb46)`(unsigned healer_id,unsigned target_id) const` 

#### `public inline bool `[`is_overcharge_ready`](#classbc_1_1GameController_1a9a1d2569d67de48eb351964dac899c83)`(unsigned healer_id) const` 

#### `public inline void `[`overcharge`](#classbc_1_1GameController_1a93ad878d8eeb286d1c9f3223404fed9b)`(unsigned healer_id,unsigned target_id) const` 

#### `public inline bool `[`can_load`](#classbc_1_1GameController_1a51c816f85e9c0f40f10ee65ff100f48d)`(unsigned structure_id,unsigned robot_id) const` 

#### `public inline void `[`load`](#classbc_1_1GameController_1a4edaefa7459063b354193c3ad96cc24e)`(unsigned structure_id,unsigned robot_id) const` 

#### `public inline bool `[`can_unload`](#classbc_1_1GameController_1a8b0217178de5bc93dd4208f5ecc33332)`(unsigned structure_id,Direction direction) const` 

#### `public inline void `[`unload`](#classbc_1_1GameController_1a2cfce8136583d6c5049355b3f8d5086f)`(unsigned structure_id,Direction direction) const` 

#### `public inline bool `[`can_produce_robot`](#classbc_1_1GameController_1a1b2f66ca3750889f429f2784dd2d2fa1)`(unsigned factory_id,UnitType unit_type) const` 

#### `public inline void `[`produce_robot`](#classbc_1_1GameController_1ad23baf92fdaa8b0a971ba0cf921046f6)`(unsigned factory_id,UnitType unit_type) const` 

#### `public inline `[`RocketLandingInfo`](#classbc_1_1RocketLandingInfo)` `[`get_rocket_landings`](#classbc_1_1GameController_1a2c2ed052db056af0a3269c9b377e95f3)`() const` 

#### `public inline bool `[`can_launch_rocket`](#classbc_1_1GameController_1aad3896c7562f79d9f6e575059086519f)`(unsigned rocket_id,`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` 

#### `public inline void `[`launch_rocket`](#classbc_1_1GameController_1ad7730457a175c0e02b673e9048ce9c84)`(unsigned rocket_id,`[`MapLocation`](#classbc_1_1MapLocation)` map_location) const` 

#### `public inline bool `[`is_over`](#classbc_1_1GameController_1ad1fd0e92f15833e3c10181161aa8b47b)`() const` 

#### `public inline Team `[`get_winning_team`](#classbc_1_1GameController_1af5d8f6949de85a9523edbf5a851ecfc7)`() const` 

# class `bc::Location` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`Location`](#classbc_1_1Location_1a43ba54b5f426dd24fd7fea853ce5c317)`()` | 
`public inline  `[`Location`](#classbc_1_1Location_1add423c24b5c085f94566eb11deedb5eb)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location)` | 
`public inline  `[`Location`](#classbc_1_1Location_1a92c667b813c9cfa4098cebaa302734c5)`(unsigned garrison_id)` | 
`public inline  `[`Location`](#classbc_1_1Location_1afe850c4a72ca963384f83acbcdfb741c)`(bc_Location * location)` | 
`public inline bool `[`is_on_map`](#classbc_1_1Location_1a015b69417ffccdc52a83b564629969d2)`() const` | 
`public inline bool `[`is_on_planet`](#classbc_1_1Location_1a55c0cfb8c723796f9b599f2f221c73ed)`(Planet planet) const` | 
`public inline `[`MapLocation`](#classbc_1_1MapLocation)` `[`get_map_location`](#classbc_1_1Location_1a4f808381446b013ff22abe857069ad23)`() const` | 
`public inline bool `[`is_in_garrison`](#classbc_1_1Location_1ab20057515771adf0f40f1a5a7adb9dee)`() const` | 
`public inline int `[`get_structure`](#classbc_1_1Location_1aa5f04b7a6068504184c119bbfd9ea18f)`() const` | 
`public inline bool `[`is_in_space`](#classbc_1_1Location_1aadb76f4fe212663cfe7f5c7a850bc12f)`() const` | 
`public inline bool `[`is_adjacent_to`](#classbc_1_1Location_1a43d991642f7b8792cd28ae8a8d5a6a76)`(`[`Location`](#classbc_1_1Location)` location)` | 
`public inline bool `[`is_within_range`](#classbc_1_1Location_1a1e32ea6b52c81b834b0c4588c451457f)`(unsigned range,`[`Location`](#classbc_1_1Location)` location)` | 

## Members

#### `public inline  `[`Location`](#classbc_1_1Location_1a43ba54b5f426dd24fd7fea853ce5c317)`()` 

#### `public inline  `[`Location`](#classbc_1_1Location_1add423c24b5c085f94566eb11deedb5eb)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location)` 

#### `public inline  `[`Location`](#classbc_1_1Location_1a92c667b813c9cfa4098cebaa302734c5)`(unsigned garrison_id)` 

#### `public inline  `[`Location`](#classbc_1_1Location_1afe850c4a72ca963384f83acbcdfb741c)`(bc_Location * location)` 

#### `public inline bool `[`is_on_map`](#classbc_1_1Location_1a015b69417ffccdc52a83b564629969d2)`() const` 

#### `public inline bool `[`is_on_planet`](#classbc_1_1Location_1a55c0cfb8c723796f9b599f2f221c73ed)`(Planet planet) const` 

#### `public inline `[`MapLocation`](#classbc_1_1MapLocation)` `[`get_map_location`](#classbc_1_1Location_1a4f808381446b013ff22abe857069ad23)`() const` 

#### `public inline bool `[`is_in_garrison`](#classbc_1_1Location_1ab20057515771adf0f40f1a5a7adb9dee)`() const` 

#### `public inline int `[`get_structure`](#classbc_1_1Location_1aa5f04b7a6068504184c119bbfd9ea18f)`() const` 

#### `public inline bool `[`is_in_space`](#classbc_1_1Location_1aadb76f4fe212663cfe7f5c7a850bc12f)`() const` 

#### `public inline bool `[`is_adjacent_to`](#classbc_1_1Location_1a43d991642f7b8792cd28ae8a8d5a6a76)`(`[`Location`](#classbc_1_1Location)` location)` 

#### `public inline bool `[`is_within_range`](#classbc_1_1Location_1a1e32ea6b52c81b834b0c4588c451457f)`(unsigned range,`[`Location`](#classbc_1_1Location)` location)` 

# class `bc::MapLocation` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`MapLocation`](#classbc_1_1MapLocation_1ab313f647684390e3e78ec9fc26999305)`()` | 
`public inline  `[`MapLocation`](#classbc_1_1MapLocation_1aee5b70cc3589b43b42996e8f55c12e5b)`(Planet planet,int x,int y)` | 
`public inline  `[`MapLocation`](#classbc_1_1MapLocation_1a2a428a7d66834f1dfa64174c81031064)`(bc_MapLocation * map_location)` | 
`public inline  `[`~MapLocation`](#classbc_1_1MapLocation_1acd3a96f437d8511659def5078b58e0d5)`()` | 
`public inline  `[`MapLocation`](#classbc_1_1MapLocation_1a0cc7e8519db71c6ccf462bb498b67d50)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location)` | 
`public inline `[`MapLocation`](#classbc_1_1MapLocation)` & `[`operator=`](#classbc_1_1MapLocation_1a309cf8e4b945567f8f01e2f22ed2eac1)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location)` | 
`public inline  `[`MapLocation`](#classbc_1_1MapLocation_1a2d59a82c59b9aa251b8327bb71445a0c)`(`[`MapLocation`](#classbc_1_1MapLocation)` && map_location)` | 
`public inline `[`MapLocation`](#classbc_1_1MapLocation)` & `[`operator=`](#classbc_1_1MapLocation_1a64755bb8a2b3ac27bb6cb8eac5ac4c0f)`(`[`MapLocation`](#classbc_1_1MapLocation)` && map_location)` | 
`public inline bc_MapLocation * `[`get_bc`](#classbc_1_1MapLocation_1a0cecbbadfe4cf90de047eaeea8e6ecd7)`() const` | 
`public inline Planet `[`get_planet`](#classbc_1_1MapLocation_1a985fd5880ada52a524857c01292eea54)`() const` | 
`public inline int `[`get_x`](#classbc_1_1MapLocation_1a3e06a1063a6d1215b05eb395ba3657f5)`() const` | 
`public inline int `[`get_y`](#classbc_1_1MapLocation_1a06dbaa3ed5a43c024dfa5125c634a35c)`() const` | 
`public inline void `[`set_planet`](#classbc_1_1MapLocation_1adc404e0ed18b9d3701b03379c9e56f00)`(Planet planet)` | 
`public inline void `[`set_x`](#classbc_1_1MapLocation_1a57cd1f71b3680fea48615d15574a9706)`(int x)` | 
`public inline void `[`set_y`](#classbc_1_1MapLocation_1ad82adb7e6a7d84f44245e097d08e6908)`(int y)` | 
`public inline `[`MapLocation`](#classbc_1_1MapLocation)` `[`add`](#classbc_1_1MapLocation_1afacfd29329458a5861bbcd17745f0ca0)`(Direction direction) const` | 
`public inline `[`MapLocation`](#classbc_1_1MapLocation)` `[`subtract`](#classbc_1_1MapLocation_1a518baf92a9903130089f7fb98b810cb5)`(Direction direction) const` | 
`public inline `[`MapLocation`](#classbc_1_1MapLocation)` `[`add_multiple`](#classbc_1_1MapLocation_1a185e1f6170366b8686b5601ba6d91c6c)`(Direction direction,int multiple) const` | 
`public inline `[`MapLocation`](#classbc_1_1MapLocation)` `[`translate`](#classbc_1_1MapLocation_1a07f9f22a4ce93b7d9202d3497dd41253)`(int dx,int dy) const` | 
`public inline unsigned `[`distance_squared_to`](#classbc_1_1MapLocation_1ac448524d2dc59e144d4839fefe6e4cb7)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` | 
`public inline Direction `[`direction_to`](#classbc_1_1MapLocation_1ad46b170b01f805bc23d0c1fc34e9e0eb)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` | 
`public inline bool `[`is_adjacent_to`](#classbc_1_1MapLocation_1a74eab87af0155901216f2f48d40d854e)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` | 
`public inline bool `[`is_within_range`](#classbc_1_1MapLocation_1ad9e1d075d5fb142fc9920bced92a2ea2)`(unsigned range,const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` | 
`public inline bool `[`operator==`](#classbc_1_1MapLocation_1a5a039fbf186050dadf1234b3689adc02)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` | 
`public inline bool `[`operator!=`](#classbc_1_1MapLocation_1af9cf32ce1a51f5325479d2fa527a3e1f)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` | 

## Members

#### `public inline  `[`MapLocation`](#classbc_1_1MapLocation_1ab313f647684390e3e78ec9fc26999305)`()` 

#### `public inline  `[`MapLocation`](#classbc_1_1MapLocation_1aee5b70cc3589b43b42996e8f55c12e5b)`(Planet planet,int x,int y)` 

#### `public inline  `[`MapLocation`](#classbc_1_1MapLocation_1a2a428a7d66834f1dfa64174c81031064)`(bc_MapLocation * map_location)` 

#### `public inline  `[`~MapLocation`](#classbc_1_1MapLocation_1acd3a96f437d8511659def5078b58e0d5)`()` 

#### `public inline  `[`MapLocation`](#classbc_1_1MapLocation_1a0cc7e8519db71c6ccf462bb498b67d50)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location)` 

#### `public inline `[`MapLocation`](#classbc_1_1MapLocation)` & `[`operator=`](#classbc_1_1MapLocation_1a309cf8e4b945567f8f01e2f22ed2eac1)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location)` 

#### `public inline  `[`MapLocation`](#classbc_1_1MapLocation_1a2d59a82c59b9aa251b8327bb71445a0c)`(`[`MapLocation`](#classbc_1_1MapLocation)` && map_location)` 

#### `public inline `[`MapLocation`](#classbc_1_1MapLocation)` & `[`operator=`](#classbc_1_1MapLocation_1a64755bb8a2b3ac27bb6cb8eac5ac4c0f)`(`[`MapLocation`](#classbc_1_1MapLocation)` && map_location)` 

#### `public inline bc_MapLocation * `[`get_bc`](#classbc_1_1MapLocation_1a0cecbbadfe4cf90de047eaeea8e6ecd7)`() const` 

#### `public inline Planet `[`get_planet`](#classbc_1_1MapLocation_1a985fd5880ada52a524857c01292eea54)`() const` 

#### `public inline int `[`get_x`](#classbc_1_1MapLocation_1a3e06a1063a6d1215b05eb395ba3657f5)`() const` 

#### `public inline int `[`get_y`](#classbc_1_1MapLocation_1a06dbaa3ed5a43c024dfa5125c634a35c)`() const` 

#### `public inline void `[`set_planet`](#classbc_1_1MapLocation_1adc404e0ed18b9d3701b03379c9e56f00)`(Planet planet)` 

#### `public inline void `[`set_x`](#classbc_1_1MapLocation_1a57cd1f71b3680fea48615d15574a9706)`(int x)` 

#### `public inline void `[`set_y`](#classbc_1_1MapLocation_1ad82adb7e6a7d84f44245e097d08e6908)`(int y)` 

#### `public inline `[`MapLocation`](#classbc_1_1MapLocation)` `[`add`](#classbc_1_1MapLocation_1afacfd29329458a5861bbcd17745f0ca0)`(Direction direction) const` 

#### `public inline `[`MapLocation`](#classbc_1_1MapLocation)` `[`subtract`](#classbc_1_1MapLocation_1a518baf92a9903130089f7fb98b810cb5)`(Direction direction) const` 

#### `public inline `[`MapLocation`](#classbc_1_1MapLocation)` `[`add_multiple`](#classbc_1_1MapLocation_1a185e1f6170366b8686b5601ba6d91c6c)`(Direction direction,int multiple) const` 

#### `public inline `[`MapLocation`](#classbc_1_1MapLocation)` `[`translate`](#classbc_1_1MapLocation_1a07f9f22a4ce93b7d9202d3497dd41253)`(int dx,int dy) const` 

#### `public inline unsigned `[`distance_squared_to`](#classbc_1_1MapLocation_1ac448524d2dc59e144d4839fefe6e4cb7)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` 

#### `public inline Direction `[`direction_to`](#classbc_1_1MapLocation_1ad46b170b01f805bc23d0c1fc34e9e0eb)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` 

#### `public inline bool `[`is_adjacent_to`](#classbc_1_1MapLocation_1a74eab87af0155901216f2f48d40d854e)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` 

#### `public inline bool `[`is_within_range`](#classbc_1_1MapLocation_1ad9e1d075d5fb142fc9920bced92a2ea2)`(unsigned range,const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` 

#### `public inline bool `[`operator==`](#classbc_1_1MapLocation_1a5a039fbf186050dadf1234b3689adc02)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` 

#### `public inline bool `[`operator!=`](#classbc_1_1MapLocation_1af9cf32ce1a51f5325479d2fa527a3e1f)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` 

# class `bc::OrbitPattern` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`OrbitPattern`](#classbc_1_1OrbitPattern_1a55262c3f6f13fe4a722d38fb8aadafe1)`(bc_OrbitPattern * orbit_pattern)` | 
`public inline unsigned `[`get_amplitude`](#classbc_1_1OrbitPattern_1a6249e7452dbd93a9375b1bcca526bf12)`() const` | 
`public inline unsigned `[`get_period`](#classbc_1_1OrbitPattern_1a1d810c50aeb9448280370d6ea69c0539)`() const` | 
`public inline unsigned `[`get_center`](#classbc_1_1OrbitPattern_1a45b97832066611392122e5aee865b616)`() const` | 
`public inline unsigned `[`duration`](#classbc_1_1OrbitPattern_1ae51c9df8b7562b3963a13ad45b14a101)`(unsigned round) const` | 

## Members

#### `public inline  `[`OrbitPattern`](#classbc_1_1OrbitPattern_1a55262c3f6f13fe4a722d38fb8aadafe1)`(bc_OrbitPattern * orbit_pattern)` 

#### `public inline unsigned `[`get_amplitude`](#classbc_1_1OrbitPattern_1a6249e7452dbd93a9375b1bcca526bf12)`() const` 

#### `public inline unsigned `[`get_period`](#classbc_1_1OrbitPattern_1a1d810c50aeb9448280370d6ea69c0539)`() const` 

#### `public inline unsigned `[`get_center`](#classbc_1_1OrbitPattern_1a45b97832066611392122e5aee865b616)`() const` 

#### `public inline unsigned `[`duration`](#classbc_1_1OrbitPattern_1ae51c9df8b7562b3963a13ad45b14a101)`(unsigned round) const` 

# class `bc::PlanetMap` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`PlanetMap`](#classbc_1_1PlanetMap_1adbb40a38be6b197ff711ed727c1d9ef4)`()` | 
`public inline  `[`PlanetMap`](#classbc_1_1PlanetMap_1a3b970b469fc63b69d712425c2c6e534e)`(bc_PlanetMap * planet_map)` | 
`public inline  `[`~PlanetMap`](#classbc_1_1PlanetMap_1a23993bb2f191fdf2e7067c6d5fb5b515)`()` | 
`public inline Planet `[`get_planet`](#classbc_1_1PlanetMap_1ad4f666a39d7d1a67150562901e457a6f)`() const` | 
`public inline unsigned `[`get_height`](#classbc_1_1PlanetMap_1a0075bdf4c8363229047875317dc5ff35)`() const` | 
`public inline unsigned `[`get_width`](#classbc_1_1PlanetMap_1ae58125fd7979ac1f5ee215ac7785a572)`() const` | 
`public inline const std::vector< `[`Unit`](#classbc_1_1Unit)` > & `[`get_initial_units`](#classbc_1_1PlanetMap_1ae8f7ff10beed0194b6ce49ec8286a55f)`() const` | 
`public inline bool `[`is_on_map`](#classbc_1_1PlanetMap_1aeff5395b01ec946b0337e148fd33caec)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & location) const` | 
`public inline bool `[`is_passable_terrain_at`](#classbc_1_1PlanetMap_1a2b416adb3155fc7964cf570f20f97224)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` | 
`public inline unsigned `[`get_initial_karbonite_at`](#classbc_1_1PlanetMap_1a39d912a61d2668da5262e7f564c55234)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` | 

## Members

#### `public inline  `[`PlanetMap`](#classbc_1_1PlanetMap_1adbb40a38be6b197ff711ed727c1d9ef4)`()` 

#### `public inline  `[`PlanetMap`](#classbc_1_1PlanetMap_1a3b970b469fc63b69d712425c2c6e534e)`(bc_PlanetMap * planet_map)` 

#### `public inline  `[`~PlanetMap`](#classbc_1_1PlanetMap_1a23993bb2f191fdf2e7067c6d5fb5b515)`()` 

#### `public inline Planet `[`get_planet`](#classbc_1_1PlanetMap_1ad4f666a39d7d1a67150562901e457a6f)`() const` 

#### `public inline unsigned `[`get_height`](#classbc_1_1PlanetMap_1a0075bdf4c8363229047875317dc5ff35)`() const` 

#### `public inline unsigned `[`get_width`](#classbc_1_1PlanetMap_1ae58125fd7979ac1f5ee215ac7785a572)`() const` 

#### `public inline const std::vector< `[`Unit`](#classbc_1_1Unit)` > & `[`get_initial_units`](#classbc_1_1PlanetMap_1ae8f7ff10beed0194b6ce49ec8286a55f)`() const` 

#### `public inline bool `[`is_on_map`](#classbc_1_1PlanetMap_1aeff5395b01ec946b0337e148fd33caec)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & location) const` 

#### `public inline bool `[`is_passable_terrain_at`](#classbc_1_1PlanetMap_1a2b416adb3155fc7964cf570f20f97224)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` 

#### `public inline unsigned `[`get_initial_karbonite_at`](#classbc_1_1PlanetMap_1a39d912a61d2668da5262e7f564c55234)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` 

# class `bc::ResearchInfo` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`ResearchInfo`](#classbc_1_1ResearchInfo_1a9f7f52e1e77bea859b19bb0978e0a8fa)`(bc_ResearchInfo * info)` | 
`public inline  `[`~ResearchInfo`](#classbc_1_1ResearchInfo_1a39003cc40c6042409d6d0811cd46ad81)`()` | 
`public inline unsigned `[`max_level`](#classbc_1_1ResearchInfo_1a04105d849dafe3a3a73521508f5ab698)`(UnitType branch) const` | 
`public inline unsigned `[`cost_of`](#classbc_1_1ResearchInfo_1a118b912a25b2651d5d19df4ca2bbdd52)`(UnitType branch,unsigned level) const` | 
`public inline unsigned `[`get_level`](#classbc_1_1ResearchInfo_1a08af7a4f8594ffab04ac8c4040c742c4)`(UnitType branch) const` | 
`public inline std::vector< UnitType > `[`get_queue`](#classbc_1_1ResearchInfo_1a939db9bb1af916c07079143d45071aa8)`() const` | 
`public inline bool `[`has_next_in_queue`](#classbc_1_1ResearchInfo_1adaa6e9a78008146f11ffb75945b806b2)`() const` | 
`public inline UnitType `[`next_in_queue`](#classbc_1_1ResearchInfo_1af2730634f508ffe66a9e0779cc45a42d)`() const` | 
`public inline unsigned `[`rounds_lext`](#classbc_1_1ResearchInfo_1aa3b80632a6c005579c6ff860b8d9db77)`() const` | 

## Members

#### `public inline  `[`ResearchInfo`](#classbc_1_1ResearchInfo_1a9f7f52e1e77bea859b19bb0978e0a8fa)`(bc_ResearchInfo * info)` 

#### `public inline  `[`~ResearchInfo`](#classbc_1_1ResearchInfo_1a39003cc40c6042409d6d0811cd46ad81)`()` 

#### `public inline unsigned `[`max_level`](#classbc_1_1ResearchInfo_1a04105d849dafe3a3a73521508f5ab698)`(UnitType branch) const` 

#### `public inline unsigned `[`cost_of`](#classbc_1_1ResearchInfo_1a118b912a25b2651d5d19df4ca2bbdd52)`(UnitType branch,unsigned level) const` 

#### `public inline unsigned `[`get_level`](#classbc_1_1ResearchInfo_1a08af7a4f8594ffab04ac8c4040c742c4)`(UnitType branch) const` 

#### `public inline std::vector< UnitType > `[`get_queue`](#classbc_1_1ResearchInfo_1a939db9bb1af916c07079143d45071aa8)`() const` 

#### `public inline bool `[`has_next_in_queue`](#classbc_1_1ResearchInfo_1adaa6e9a78008146f11ffb75945b806b2)`() const` 

#### `public inline UnitType `[`next_in_queue`](#classbc_1_1ResearchInfo_1af2730634f508ffe66a9e0779cc45a42d)`() const` 

#### `public inline unsigned `[`rounds_lext`](#classbc_1_1ResearchInfo_1aa3b80632a6c005579c6ff860b8d9db77)`() const` 

# class `bc::RocketLanding` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`RocketLanding`](#classbc_1_1RocketLanding_1a9b42a38991fbafac0bca780699e7fa17)`(bc_RocketLanding * rocket_landing)` | 
`public inline unsigned `[`get_rocket_id`](#classbc_1_1RocketLanding_1a8a4261266192a1bc6320da13d7fc18ce)`() const` | 
`public inline const `[`MapLocation`](#classbc_1_1MapLocation)` & `[`get_destination`](#classbc_1_1RocketLanding_1a90655bf5123e039b607c930dd1f48a1e)`() const` | 

## Members

#### `public inline  `[`RocketLanding`](#classbc_1_1RocketLanding_1a9b42a38991fbafac0bca780699e7fa17)`(bc_RocketLanding * rocket_landing)` 

#### `public inline unsigned `[`get_rocket_id`](#classbc_1_1RocketLanding_1a8a4261266192a1bc6320da13d7fc18ce)`() const` 

#### `public inline const `[`MapLocation`](#classbc_1_1MapLocation)` & `[`get_destination`](#classbc_1_1RocketLanding_1a90655bf5123e039b607c930dd1f48a1e)`() const` 

# class `bc::RocketLandingInfo` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`RocketLandingInfo`](#classbc_1_1RocketLandingInfo_1afc3c4a4358f025f2489b1240fccbc00a)`(bc_RocketLandingInfo * rocket_landing_info)` | 
`public inline  `[`~RocketLandingInfo`](#classbc_1_1RocketLandingInfo_1a340b47ce391d7ce1b531ba54c35433da)`()` | 
`public inline std::vector< `[`RocketLanding`](#classbc_1_1RocketLanding)` > `[`get_landings_on_round`](#classbc_1_1RocketLandingInfo_1ada1ff7da67865d9fb919f2f974f1d724)`(unsigned round)` | 

## Members

#### `public inline  `[`RocketLandingInfo`](#classbc_1_1RocketLandingInfo_1afc3c4a4358f025f2489b1240fccbc00a)`(bc_RocketLandingInfo * rocket_landing_info)` 

#### `public inline  `[`~RocketLandingInfo`](#classbc_1_1RocketLandingInfo_1a340b47ce391d7ce1b531ba54c35433da)`()` 

#### `public inline std::vector< `[`RocketLanding`](#classbc_1_1RocketLanding)` > `[`get_landings_on_round`](#classbc_1_1RocketLandingInfo_1ada1ff7da67865d9fb919f2f974f1d724)`(unsigned round)` 

# class `bc::Unit` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`Unit`](#classbc_1_1Unit_1adc7c66deaef5289f43380c0c86d51e20)`(bc_Unit * unit)` | 
`public inline  `[`~Unit`](#classbc_1_1Unit_1a97390e2a82681e3b6f0197b1ff6bf253)`()` | 
`public inline  `[`Unit`](#classbc_1_1Unit_1abbd01a2f8804a90592f98a8f2011123d)`(const `[`Unit`](#classbc_1_1Unit)` & unit)` | 
`public inline `[`Unit`](#classbc_1_1Unit)` & `[`operator=`](#classbc_1_1Unit_1a4ef7b8486af4cbb33688a4027015ee3c)`(const `[`Unit`](#classbc_1_1Unit)` & unit)` | 
`public inline  `[`Unit`](#classbc_1_1Unit_1aa5a179321e59b42a0c070146dd0ee069)`(`[`Unit`](#classbc_1_1Unit)` && unit)` | 
`public inline `[`Unit`](#classbc_1_1Unit)` & `[`operator=`](#classbc_1_1Unit_1a81c518e519ebb7a85ad5f46a4232737a)`(`[`Unit`](#classbc_1_1Unit)` && unit)` | 
`public inline UnitType `[`get_unit_type`](#classbc_1_1Unit_1a2895d7f4687e1db8ad427a47ff709f5e)`() const` | 
`public inline Team `[`get_team`](#classbc_1_1Unit_1ac12f4a7ed90083f5e94276433dbf2fe1)`() const` | 
`public inline `[`Location`](#classbc_1_1Location)` `[`get_location`](#classbc_1_1Unit_1a6e02bd4fd491a7fdc698d2b64f485e37)`() const` | 
`public inline unsigned `[`get_id`](#classbc_1_1Unit_1a0651ba67f733ebc6974e5eda99e69d82)`() const` | 
`public inline unsigned `[`get_health`](#classbc_1_1Unit_1a87a7228914b309722d455328ef668fe0)`() const` | 
`public inline unsigned `[`get_max_health`](#classbc_1_1Unit_1a2331dcd04bbe2fd2484a7722352774d5)`() const` | 
`public inline unsigned `[`get_vision_range`](#classbc_1_1Unit_1a8685f362be1643863207fc39c0c0e24e)`() const` | 
`public inline int `[`get_damage`](#classbc_1_1Unit_1a19096593adc701760c2e80a17c2ae3c9)`() const` | 
`public inline unsigned `[`get_movement_heat`](#classbc_1_1Unit_1a8123c09b7340e2ff4f579467810c8093)`() const` | 
`public inline unsigned `[`get_movement_cooldown`](#classbc_1_1Unit_1a48d43363f0f177f2fd2d3cd5f1323af4)`() const` | 
`public inline unsigned `[`get_attack_heat`](#classbc_1_1Unit_1add0f7bf216e63d40ea24f02f2da9295e)`() const` | 
`public inline unsigned `[`get_attack_cooldown`](#classbc_1_1Unit_1ab2e4c013c576fad6c409380935e9217f)`() const` | 
`public inline unsigned `[`get_attack_range`](#classbc_1_1Unit_1a477039dce8a9f8786ede9c4b7d007248)`() const` | 
`public inline unsigned `[`get_ability_heat`](#classbc_1_1Unit_1a452e5a308876d03b4f351181ef67df98)`() const` | 
`public inline unsigned `[`get_ability_cooldown`](#classbc_1_1Unit_1a4238419858b61b0b40ae6d082bf4e7f2)`() const` | 
`public inline unsigned `[`get_ability_range`](#classbc_1_1Unit_1abd3162f3e9de901318dd34b23a71f691)`() const` | 
`public inline bool `[`is_ability_unlocked`](#classbc_1_1Unit_1a67299f3a941b7ea1224e247235a87de8)`() const` | 
`public inline bool `[`worker_has_acted`](#classbc_1_1Unit_1aeb00fdbf8583d58bb0a2ee6929a9188c)`() const` | 
`public inline unsigned `[`get_worker_build_health`](#classbc_1_1Unit_1ae22bd1a4a036a61c6195e68dad0bf871)`() const` | 
`public inline unsigned `[`get_worker_repair_health`](#classbc_1_1Unit_1a9fa7747b481c880afe6b70966fa0b756)`() const` | 
`public inline unsigned `[`get_worker_harvest_amount`](#classbc_1_1Unit_1aa50fa48bccd3cd30361249680d054fb7)`() const` | 
`public inline unsigned `[`get_knight_defense`](#classbc_1_1Unit_1a2e1e57d82edb483233dff0c5fea0a0ea)`() const` | 
`public inline unsigned `[`get_ranger_cannot_attack_range`](#classbc_1_1Unit_1ace00cd7b45f9a8d439b9b3341bb7f0bb)`() const` | 
`public inline unsigned `[`get_ranger_max_countdown`](#classbc_1_1Unit_1ad76f2c791d62c1edc7a409826ba82d7f)`() const` | 
`public inline unsigned `[`get_ranger_countdown`](#classbc_1_1Unit_1aaa13e6f01577032471caaeb32bdc54e1)`() const` | 
`public inline bool `[`ranger_is_sniping`](#classbc_1_1Unit_1a1681c51a005c3271248804331b8b59bd)`() const` | 
`public inline `[`MapLocation`](#classbc_1_1MapLocation)` `[`get_ranger_target_location`](#classbc_1_1Unit_1a4fa10106b45c19ae124b92e102d4dbd9)`() const` | 
`public inline unsigned `[`get_healer_self_heal_amount`](#classbc_1_1Unit_1a0ae50e9b417de1ffc12b793ed60bfbfb)`() const` | 
`public inline bool `[`structure_is_built`](#classbc_1_1Unit_1ac907166215faf9372a9f2cc7a0a2ce35)`() const` | 
`public inline unsigned `[`get_structure_max_capacity`](#classbc_1_1Unit_1a5c507cf496f05ef159912e7b8e6b193c)`() const` | 
`public inline std::vector< unsigned > `[`get_structure_garrison`](#classbc_1_1Unit_1a426a6f40cf51cd868de044156e3081af)`() const` | 
`public inline bool `[`is_factory_producing`](#classbc_1_1Unit_1a6ffbd965a8a67b737b864001f5b48b28)`() const` | 
`public inline UnitType `[`get_factory_unit_type`](#classbc_1_1Unit_1aee3e3badc7a2669b58924cf95d2a883b)`() const` | 
`public inline unsigned `[`get_factory_rounds_left`](#classbc_1_1Unit_1a1e0eb59e5af3a75b8314ae154ab81db7)`() const` | 
`public inline unsigned `[`get_factory_max_rounds_left`](#classbc_1_1Unit_1a933aca6455be358cb1f70422ccb9c94d)`() const` | 
`public inline bool `[`rocket_is_used`](#classbc_1_1Unit_1ac661e30c2538cd5543c60a84c3bb5cd8)`() const` | 
`public inline int `[`get_rocket_blast_damage`](#classbc_1_1Unit_1abdb17ac7cf496f5e29718474b348bcbd)`() const` | 
`public inline unsigned `[`get_rocket_travel_time_decrease`](#classbc_1_1Unit_1ab0b2b8ea6b1035d2ba68f6f1474594c8)`() const` | 

## Members

#### `public inline  `[`Unit`](#classbc_1_1Unit_1adc7c66deaef5289f43380c0c86d51e20)`(bc_Unit * unit)` 

#### `public inline  `[`~Unit`](#classbc_1_1Unit_1a97390e2a82681e3b6f0197b1ff6bf253)`()` 

#### `public inline  `[`Unit`](#classbc_1_1Unit_1abbd01a2f8804a90592f98a8f2011123d)`(const `[`Unit`](#classbc_1_1Unit)` & unit)` 

#### `public inline `[`Unit`](#classbc_1_1Unit)` & `[`operator=`](#classbc_1_1Unit_1a4ef7b8486af4cbb33688a4027015ee3c)`(const `[`Unit`](#classbc_1_1Unit)` & unit)` 

#### `public inline  `[`Unit`](#classbc_1_1Unit_1aa5a179321e59b42a0c070146dd0ee069)`(`[`Unit`](#classbc_1_1Unit)` && unit)` 

#### `public inline `[`Unit`](#classbc_1_1Unit)` & `[`operator=`](#classbc_1_1Unit_1a81c518e519ebb7a85ad5f46a4232737a)`(`[`Unit`](#classbc_1_1Unit)` && unit)` 

#### `public inline UnitType `[`get_unit_type`](#classbc_1_1Unit_1a2895d7f4687e1db8ad427a47ff709f5e)`() const` 

#### `public inline Team `[`get_team`](#classbc_1_1Unit_1ac12f4a7ed90083f5e94276433dbf2fe1)`() const` 

#### `public inline `[`Location`](#classbc_1_1Location)` `[`get_location`](#classbc_1_1Unit_1a6e02bd4fd491a7fdc698d2b64f485e37)`() const` 

#### `public inline unsigned `[`get_id`](#classbc_1_1Unit_1a0651ba67f733ebc6974e5eda99e69d82)`() const` 

#### `public inline unsigned `[`get_health`](#classbc_1_1Unit_1a87a7228914b309722d455328ef668fe0)`() const` 

#### `public inline unsigned `[`get_max_health`](#classbc_1_1Unit_1a2331dcd04bbe2fd2484a7722352774d5)`() const` 

#### `public inline unsigned `[`get_vision_range`](#classbc_1_1Unit_1a8685f362be1643863207fc39c0c0e24e)`() const` 

#### `public inline int `[`get_damage`](#classbc_1_1Unit_1a19096593adc701760c2e80a17c2ae3c9)`() const` 

#### `public inline unsigned `[`get_movement_heat`](#classbc_1_1Unit_1a8123c09b7340e2ff4f579467810c8093)`() const` 

#### `public inline unsigned `[`get_movement_cooldown`](#classbc_1_1Unit_1a48d43363f0f177f2fd2d3cd5f1323af4)`() const` 

#### `public inline unsigned `[`get_attack_heat`](#classbc_1_1Unit_1add0f7bf216e63d40ea24f02f2da9295e)`() const` 

#### `public inline unsigned `[`get_attack_cooldown`](#classbc_1_1Unit_1ab2e4c013c576fad6c409380935e9217f)`() const` 

#### `public inline unsigned `[`get_attack_range`](#classbc_1_1Unit_1a477039dce8a9f8786ede9c4b7d007248)`() const` 

#### `public inline unsigned `[`get_ability_heat`](#classbc_1_1Unit_1a452e5a308876d03b4f351181ef67df98)`() const` 

#### `public inline unsigned `[`get_ability_cooldown`](#classbc_1_1Unit_1a4238419858b61b0b40ae6d082bf4e7f2)`() const` 

#### `public inline unsigned `[`get_ability_range`](#classbc_1_1Unit_1abd3162f3e9de901318dd34b23a71f691)`() const` 

#### `public inline bool `[`is_ability_unlocked`](#classbc_1_1Unit_1a67299f3a941b7ea1224e247235a87de8)`() const` 

#### `public inline bool `[`worker_has_acted`](#classbc_1_1Unit_1aeb00fdbf8583d58bb0a2ee6929a9188c)`() const` 

#### `public inline unsigned `[`get_worker_build_health`](#classbc_1_1Unit_1ae22bd1a4a036a61c6195e68dad0bf871)`() const` 

#### `public inline unsigned `[`get_worker_repair_health`](#classbc_1_1Unit_1a9fa7747b481c880afe6b70966fa0b756)`() const` 

#### `public inline unsigned `[`get_worker_harvest_amount`](#classbc_1_1Unit_1aa50fa48bccd3cd30361249680d054fb7)`() const` 

#### `public inline unsigned `[`get_knight_defense`](#classbc_1_1Unit_1a2e1e57d82edb483233dff0c5fea0a0ea)`() const` 

#### `public inline unsigned `[`get_ranger_cannot_attack_range`](#classbc_1_1Unit_1ace00cd7b45f9a8d439b9b3341bb7f0bb)`() const` 

#### `public inline unsigned `[`get_ranger_max_countdown`](#classbc_1_1Unit_1ad76f2c791d62c1edc7a409826ba82d7f)`() const` 

#### `public inline unsigned `[`get_ranger_countdown`](#classbc_1_1Unit_1aaa13e6f01577032471caaeb32bdc54e1)`() const` 

#### `public inline bool `[`ranger_is_sniping`](#classbc_1_1Unit_1a1681c51a005c3271248804331b8b59bd)`() const` 

#### `public inline `[`MapLocation`](#classbc_1_1MapLocation)` `[`get_ranger_target_location`](#classbc_1_1Unit_1a4fa10106b45c19ae124b92e102d4dbd9)`() const` 

#### `public inline unsigned `[`get_healer_self_heal_amount`](#classbc_1_1Unit_1a0ae50e9b417de1ffc12b793ed60bfbfb)`() const` 

#### `public inline bool `[`structure_is_built`](#classbc_1_1Unit_1ac907166215faf9372a9f2cc7a0a2ce35)`() const` 

#### `public inline unsigned `[`get_structure_max_capacity`](#classbc_1_1Unit_1a5c507cf496f05ef159912e7b8e6b193c)`() const` 

#### `public inline std::vector< unsigned > `[`get_structure_garrison`](#classbc_1_1Unit_1a426a6f40cf51cd868de044156e3081af)`() const` 

#### `public inline bool `[`is_factory_producing`](#classbc_1_1Unit_1a6ffbd965a8a67b737b864001f5b48b28)`() const` 

#### `public inline UnitType `[`get_factory_unit_type`](#classbc_1_1Unit_1aee3e3badc7a2669b58924cf95d2a883b)`() const` 

#### `public inline unsigned `[`get_factory_rounds_left`](#classbc_1_1Unit_1a1e0eb59e5af3a75b8314ae154ab81db7)`() const` 

#### `public inline unsigned `[`get_factory_max_rounds_left`](#classbc_1_1Unit_1a933aca6455be358cb1f70422ccb9c94d)`() const` 

#### `public inline bool `[`rocket_is_used`](#classbc_1_1Unit_1ac661e30c2538cd5543c60a84c3bb5cd8)`() const` 

#### `public inline int `[`get_rocket_blast_damage`](#classbc_1_1Unit_1abdb17ac7cf496f5e29718474b348bcbd)`() const` 

#### `public inline unsigned `[`get_rocket_travel_time_decrease`](#classbc_1_1Unit_1ab0b2b8ea6b1035d2ba68f6f1474594c8)`() const` 

Generated by [Moxygen](https://sourcey.com/moxygen)