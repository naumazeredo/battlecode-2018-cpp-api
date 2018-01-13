
Table of Contents
=================

   * [Summary](#summary)
   * [namespace bc](#namespace-bc)
      * [Summary](#summary-1)
      * [Members](#members)
         * [public void<a href="#bc___8hpp_1afd310c582a13a726edb7e8d259468a69"><code>print_trace</code></a><code>()</code>](#public-voidprint_trace)
         * [public static bool<a href="#bc___8hpp_1a9eab1af869a744de81383a51ab14b882"><code>clear_error</code></a><code>()</code>](#public-static-boolclear_error)
         * [public inline Planet<a href="#bc___8hpp_1ab129eac4d03e8919482be61bef489a9b"><code>planet_other</code></a><code>(Planet planet)</code>](#public-inline-planetplanet_otherplanet-planet)
         * [public inline std::string<a href="#bc___8hpp_1a3f46915eb6cdd13b92e04d4079796c76"><code>to_string</code></a><code>(Planet planet)</code>](#public-inline-stdstringto_stringplanet-planet)
         * [public inline int<a href="#bc___8hpp_1a376b234b3b8e965a9a8c4750bf364b8c"><code>direction_dx</code></a><code>(Direction direction)</code>](#public-inline-intdirection_dxdirection-direction)
         * [public inline int<a href="#bc___8hpp_1a3f2be7da219ee9c159eafeb922fa67e5"><code>direction_dy</code></a><code>(Direction direction)</code>](#public-inline-intdirection_dydirection-direction)
         * [public inline bool<a href="#bc___8hpp_1a4d2d6143d7bb8e6be938069c9077083d"><code>direction_is_diagonal</code></a><code>(Direction direction)</code>](#public-inline-booldirection_is_diagonaldirection-direction)
         * [public inline Direction<a href="#bc___8hpp_1ae56f54d1c284dcbc7954060dac51779d"><code>direction_opposite</code></a><code>(Direction direction)</code>](#public-inline-directiondirection_oppositedirection-direction)
         * [public inline Direction<a href="#bc___8hpp_1a31ad846fb08f589e3acae67d8e1b977e"><code>direction_rotate_left</code></a><code>(Direction direction)</code>](#public-inline-directiondirection_rotate_leftdirection-direction)
         * [public inline Direction<a href="#bc___8hpp_1a7050792e84c83b0955b34db7d707e15d"><code>direction_rotate_right</code></a><code>(Direction direction)</code>](#public-inline-directiondirection_rotate_rightdirection-direction)
         * [public inline bool<a href="#bc___8hpp_1a367f7b1ad4bcce27bbd94a536393a89a"><code>is_structure</code></a><code>(UnitType unit_type)</code>](#public-inline-boolis_structureunittype-unit_type)
         * [public inline bool<a href="#bc___8hpp_1a2ed320d0f77bc58e62def3a05bff51bd"><code>is_robot</code></a><code>(UnitType unit_type)</code>](#public-inline-boolis_robotunittype-unit_type)
         * [public static unsigned<a href="#bc___8hpp_1abb55faf487cf5b743e55d6b3a031387a"><code>unit_type_get_factory_cost</code></a><code>(UnitType unit_type)</code>](#public-static-unsignedunit_type_get_factory_costunittype-unit_type)
         * [public static unsigned<a href="#bc___8hpp_1aa9e9a53ac05a811bacf821801eb4e2f2"><code>unit_type_get_blueprint_cost</code></a><code>(UnitType unit_type)</code>](#public-static-unsignedunit_type_get_blueprint_costunittype-unit_type)
         * [public static unsigned<a href="#bc___8hpp_1a859c53ef3db54acef1c97d2239833968"><code>unit_type_get_replicate_cost</code></a><code>()</code>](#public-static-unsignedunit_type_get_replicate_cost)
         * [public inline unsigned<a href="#bc___8hpp_1a31345858842950badc7c9e191ba5fa5b"><code>unit_type_get_value</code></a><code>(UnitType unit_type)</code>](#public-inline-unsignedunit_type_get_valueunittype-unit_type)
   * [class bc::AsteroidPattern](#class-bcasteroidpattern)
      * [Summary](#summary-2)
      * [Members](#members-1)
         * [public inline<a href="#classbc_1_1AsteroidPattern_1a9904cb9395dc76bd5674adbc5a6282b0"><code>AsteroidPattern</code></a><code>(bc_AsteroidPattern * pattern)</code>](#public-inlineasteroidpatternbc_asteroidpattern--pattern)
         * [public inline bool<a href="#classbc_1_1AsteroidPattern_1a80e6f05c79d6fc9e36e20cc4464bec9f"><code>has_asteroid_on_round</code></a><code>(unsigned round) const</code>](#public-inline-boolhas_asteroid_on_roundunsigned-round-const)
         * [public inline<a href="#classbc_1_1AsteroidStrike"><code>AsteroidStrike</code></a><code></code><a href="#classbc_1_1AsteroidPattern_1a41fcc0924ec3ff55eead2e38522585fe"><code>get_asteroid_on_round</code></a><code>(unsigned round) const</code>](#public-inlineasteroidstrikeget_asteroid_on_roundunsigned-round-const)
         * [public inline std::unordered_map&lt; unsigned,<a href="#classbc_1_1AsteroidStrike"><code>AsteroidStrike</code></a><code>&gt;</code><a href="#classbc_1_1AsteroidPattern_1a11697694b5da9e018bb9bb87b5b10406"><code>get_all_strikes</code></a><code>()</code>](#public-inline-stdunordered_map-unsignedasteroidstrikeget_all_strikes)
   * [class bc::AsteroidStrike](#class-bcasteroidstrike)
      * [Summary](#summary-3)
      * [Members](#members-2)
         * [public<a href="#classbc_1_1AsteroidStrike_1aed812412740b8bfb32e6fd6383aa1f2f"><code>AsteroidStrike</code></a><code>() = default</code>](#publicasteroidstrike--default)
         * [public inline<a href="#classbc_1_1AsteroidStrike_1ab71a8215dfa01e65ba12d8d205b86c74"><code>AsteroidStrike</code></a><code>(unsigned karbonite,const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; location)</code>](#public-inlineasteroidstrikeunsigned-karboniteconstmaplocation-location)
         * [public inline<a href="#classbc_1_1AsteroidStrike_1a867eccc4e42ed79b50bd43e52014377f"><code>AsteroidStrike</code></a><code>(bc_AsteroidStrike * asteroid)</code>](#public-inlineasteroidstrikebc_asteroidstrike--asteroid)
         * [public inline unsigned<a href="#classbc_1_1AsteroidStrike_1a6f84a334a68cebe4c191e240b096709d"><code>get_karbonite</code></a><code>() const</code>](#public-inline-unsignedget_karbonite-const)
         * [public inline<a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code></code><a href="#classbc_1_1AsteroidStrike_1a4ed03ef835c41f72f5d78ad9ddaf55b0"><code>get_map_location</code></a><code>() const</code>](#public-inlinemaplocationget_map_location-const)
   * [class bc::GameController](#class-bcgamecontroller)
      * [Summary](#summary-4)
      * [Members](#members-3)
         * [public inline<a href="#classbc_1_1GameController_1a11549ebb60606ce9fb7746e8dae2cecc"><code>GameController</code></a><code>()</code>](#public-inlinegamecontroller)
         * [public inline<a href="#classbc_1_1GameController_1a78770265fe3683efab5c20d8817a309e"><code>~GameController</code></a><code>()</code>](#public-inlinegamecontroller-1)
         * [public<a href="#classbc_1_1GameController_1af2dd8195cbcc36ffb58c7a7f2ff51db9"><code>GameController</code></a><code>(const</code><a href="#classbc_1_1GameController"><code>GameController</code></a><code>&amp; that) = delete</code>](#publicgamecontrollerconstgamecontroller-that--delete)
         * [public<a href="#classbc_1_1GameController"><code>GameController</code></a><code>&amp;</code><a href="#classbc_1_1GameController_1aee26f3891452a92f47a12ff03ce0cd5d"><code>operator=</code></a><code>(const</code><a href="#classbc_1_1GameController"><code>GameController</code></a><code>&amp; that) = delete</code>](#publicgamecontrolleroperatorconstgamecontroller-that--delete)
         * [public inline void<a href="#classbc_1_1GameController_1ae60afca5c3214ddd7545ce8b0378bbd9"><code>next_turn</code></a><code>() const</code>](#public-inline-voidnext_turn-const)
         * [public inline unsigned<a href="#classbc_1_1GameController_1a1d5f54077115253ef2a4a3185b563b25"><code>get_round</code></a><code>() const</code>](#public-inline-unsignedget_round-const)
         * [public inline Planet<a href="#classbc_1_1GameController_1ad50934738b703c0dac02fc2a85a72a10"><code>get_planet</code></a><code>() const</code>](#public-inline-planetget_planet-const)
         * [public inline Team<a href="#classbc_1_1GameController_1a5254f80cb4350fb98ddf0ba4fafb036d"><code>get_team</code></a><code>() const</code>](#public-inline-teamget_team-const)
         * [public inline const<a href="#classbc_1_1PlanetMap"><code>PlanetMap</code></a><code>&amp;</code><a href="#classbc_1_1GameController_1a0ebb9fbc48d6022fd636f258e9679973"><code>get_starting_planet</code></a><code>(Planet planet)</code>](#public-inline-constplanetmapget_starting_planetplanet-planet)
         * [public inline const<a href="#classbc_1_1PlanetMap"><code>PlanetMap</code></a><code>&amp;</code><a href="#classbc_1_1GameController_1a79693f1105a141212b52126a1fa0de51"><code>get_earth_map</code></a><code>() const</code>](#public-inline-constplanetmapget_earth_map-const)
         * [public inline const<a href="#classbc_1_1PlanetMap"><code>PlanetMap</code></a><code>&amp;</code><a href="#classbc_1_1GameController_1a000f53d4e933b19d2432fd734ffa4c9e"><code>get_mars_map</code></a><code>() const</code>](#public-inline-constplanetmapget_mars_map-const)
         * [public inline unsigned<a href="#classbc_1_1GameController_1a54f8745e7fcf48c796689381c2177f36"><code>get_karbonite</code></a><code>() const</code>](#public-inline-unsignedget_karbonite-const-1)
         * [public inline bool<a href="#classbc_1_1GameController_1acc6a0cb0f04ba75cd104a23ab226a91a"><code>has_unit</code></a><code>(unsigned id) const</code>](#public-inline-boolhas_unitunsigned-id-const)
         * [public inline<a href="#classbc_1_1Unit"><code>Unit</code></a><code></code><a href="#classbc_1_1GameController_1a53cb3fc02161c27e54edd14269c0fe47"><code>get_unit</code></a><code>(unsigned id) const</code>](#public-inlineunitget_unitunsigned-id-const)
         * [public inline std::vector&lt;<a href="#classbc_1_1Unit"><code>Unit</code></a><code>&gt;</code><a href="#classbc_1_1GameController_1acbba4a8b8432ab46d807f8c266a02619"><code>get_units</code></a><code>() const</code>](#public-inline-stdvectorunitget_units-const)
         * [public inline std::vector&lt;<a href="#classbc_1_1Unit"><code>Unit</code></a><code>&gt;</code><a href="#classbc_1_1GameController_1a21737a1bd2dd66534937ddd80e2105c0"><code>get_my_units</code></a><code>() const</code>](#public-inline-stdvectorunitget_my_units-const)
         * [public inline std::vector&lt;<a href="#classbc_1_1Unit"><code>Unit</code></a><code>&gt;</code><a href="#classbc_1_1GameController_1a0de2c06a5130266d093ef962580d1f53"><code>get_units_in_space</code></a><code>() const</code>](#public-inline-stdvectorunitget_units_in_space-const)
         * [public inline unsigned<a href="#classbc_1_1GameController_1a312b003379e4faabdac05bc6e9be2944"><code>get_karbonite_at</code></a><code>(const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location) const</code>](#public-inline-unsignedget_karbonite_atconstmaplocation-map_location-const)
         * [public inline std::vector&lt;<a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&gt;</code><a href="#classbc_1_1GameController_1a1fa63ad24724ef74254fa04be6886288"><code>get_all_locations_within</code></a><code>(const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location,unsigned radius_squared) const</code>](#public-inline-stdvectormaplocationget_all_locations_withinconstmaplocation-map_locationunsigned-radius_squared-const)
         * [public inline bool<a href="#classbc_1_1GameController_1a43318ff9c7a897a2676ff986f25a0da7"><code>can_sense_location</code></a><code>(const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location) const</code>](#public-inline-boolcan_sense_locationconstmaplocation-map_location-const)
         * [public inline bool<a href="#classbc_1_1GameController_1a57914ebe1f56841f33ed6ed4f83b8f27"><code>can_sense_unit</code></a><code>(unsigned id) const</code>](#public-inline-boolcan_sense_unitunsigned-id-const)
         * [public inline std::vector&lt;<a href="#classbc_1_1Unit"><code>Unit</code></a><code>&gt;</code><a href="#classbc_1_1GameController_1acbb062a7fdbe6789e2f99001aaff76fc"><code>sense_nearby_units</code></a><code>(const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location,unsigned radius_squared) const</code>](#public-inline-stdvectorunitsense_nearby_unitsconstmaplocation-map_locationunsigned-radius_squared-const)
         * [public inline std::vector&lt;<a href="#classbc_1_1Unit"><code>Unit</code></a><code>&gt;</code><a href="#classbc_1_1GameController_1aeff1cc58ad19d1b9a865a577a43b4555"><code>sense_nearby_units_by_team</code></a><code>(const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location,unsigned radius_squared,Team team) const</code>](#public-inline-stdvectorunitsense_nearby_units_by_teamconstmaplocation-map_locationunsigned-radius_squaredteam-team-const)
         * [public inline std::vector&lt;<a href="#classbc_1_1Unit"><code>Unit</code></a><code>&gt;</code><a href="#classbc_1_1GameController_1a0a4ef31890d40a7372d302c9b97d35d6"><code>sense_nearby_units_by_type</code></a><code>(const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location,unsigned radius_squared,UnitType type) const</code>](#public-inline-stdvectorunitsense_nearby_units_by_typeconstmaplocation-map_locationunsigned-radius_squaredunittype-type-const)
         * [public inline bool<a href="#classbc_1_1GameController_1a146611e078468c9681212bdd483254ee"><code>has_unit_at_location</code></a><code>(const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location) const</code>](#public-inline-boolhas_unit_at_locationconstmaplocation-map_location-const)
         * [public inline<a href="#classbc_1_1Unit"><code>Unit</code></a><code></code><a href="#classbc_1_1GameController_1a24141b15c52a94f469f26d3356f3f0ea"><code>sense_unit_at_location</code></a><code>(const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location) const</code>](#public-inlineunitsense_unit_at_locationconstmaplocation-map_location-const)
         * [public inline const<a href="#classbc_1_1AsteroidPattern"><code>AsteroidPattern</code></a><code>&amp;</code><a href="#classbc_1_1GameController_1aeeee9efb73ccbaab47c7fc9f00560607"><code>get_asteroid_pattern</code></a><code>() const</code>](#public-inline-constasteroidpatternget_asteroid_pattern-const)
         * [public inline const<a href="#classbc_1_1OrbitPattern"><code>OrbitPattern</code></a><code>&amp;</code><a href="#classbc_1_1GameController_1aff7c9034b27f65de970dd175c0d594c2"><code>get_orbit_pattern</code></a><code>() const</code>](#public-inline-constorbitpatternget_orbit_pattern-const)
         * [public inline unsigned<a href="#classbc_1_1GameController_1a360710a324bc0ad53186ba0946a1e661"><code>get_current_duration_of_flight</code></a><code>() const</code>](#public-inline-unsignedget_current_duration_of_flight-const)
         * [public inline std::vector&lt; int &gt;<a href="#classbc_1_1GameController_1ab95456005163781b3b885e6c0b40e95e"><code>get_team_array</code></a><code>(Planet planet) const</code>](#public-inline-stdvector-int-get_team_arrayplanet-planet-const)
         * [public inline void<a href="#classbc_1_1GameController_1a3b14db43392828f3cfdf0dd900aa5826"><code>write_team_array</code></a><code>(unsigned index,int value) const</code>](#public-inline-voidwrite_team_arrayunsigned-indexint-value-const)
         * [public inline void<a href="#classbc_1_1GameController_1af7960d09585c4619da3af1adeda1d7cd"><code>disintegrate_unit</code></a><code>(unsigned id) const</code>](#public-inline-voiddisintegrate_unitunsigned-id-const)
         * [public inline bool<a href="#classbc_1_1GameController_1aeb61fa8e57105ddb84783d2b65367050"><code>is_occupiable</code></a><code>(const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location) const</code>](#public-inline-boolis_occupiableconstmaplocation-map_location-const)
         * [public inline bool<a href="#classbc_1_1GameController_1ae7f2fd1a41274fdce9a807fcc89bb31a"><code>can_move</code></a><code>(unsigned id,Direction direction) const</code>](#public-inline-boolcan_moveunsigned-iddirection-direction-const)
         * [public inline bool<a href="#classbc_1_1GameController_1ae244044dddf7f6b256ee5b58ad64b6ce"><code>is_move_ready</code></a><code>(unsigned id) const</code>](#public-inline-boolis_move_readyunsigned-id-const)
         * [public inline void<a href="#classbc_1_1GameController_1a9022d8a19326124643dbd9a009bc5cfe"><code>move_robot</code></a><code>(unsigned id,Direction direction) const</code>](#public-inline-voidmove_robotunsigned-iddirection-direction-const)
         * [public inline bool<a href="#classbc_1_1GameController_1a51a8d1903c272e83a4c267362028743f"><code>can_attack</code></a><code>(unsigned id,unsigned target_id) const</code>](#public-inline-boolcan_attackunsigned-idunsigned-target_id-const)
         * [public inline bool<a href="#classbc_1_1GameController_1a2a27b60bac652885232e1e1bc1e06fc6"><code>is_attack_ready</code></a><code>(unsigned id) const</code>](#public-inline-boolis_attack_readyunsigned-id-const)
         * [public inline void<a href="#classbc_1_1GameController_1a8edb6cb5ffa04ba6f71e8a5e0d4bf2e4"><code>attack</code></a><code>(unsigned id,unsigned target_id) const</code>](#public-inline-voidattackunsigned-idunsigned-target_id-const)
         * [public inline<a href="#classbc_1_1ResearchInfo"><code>ResearchInfo</code></a><code></code><a href="#classbc_1_1GameController_1a1a65e6ac5be817a6251e27c06276be0b"><code>get_research_info</code></a><code>() const</code>](#public-inlineresearchinfoget_research_info-const)
         * [public inline bool<a href="#classbc_1_1GameController_1aab3bcd9ceedc3279f3939ab801038270"><code>reset_research</code></a><code>() const</code>](#public-inline-boolreset_research-const)
         * [public inline bool<a href="#classbc_1_1GameController_1adfc5d172ac0c9e6825a9b0605de562f6"><code>queue_research</code></a><code>(UnitType branch) const</code>](#public-inline-boolqueue_researchunittype-branch-const)
         * [public inline bool<a href="#classbc_1_1GameController_1a4438df72f6c0bfde90c7a10f1e85b042"><code>can_harvest</code></a><code>(unsigned id,Direction direction) const</code>](#public-inline-boolcan_harvestunsigned-iddirection-direction-const)
         * [public inline void<a href="#classbc_1_1GameController_1a68a172d79b6153ca4f58b3eb291a958f"><code>harvest</code></a><code>(unsigned id,Direction direction) const</code>](#public-inline-voidharvestunsigned-iddirection-direction-const)
         * [public inline bool<a href="#classbc_1_1GameController_1a4377a846104f1a865d0f6229a89eeabd"><code>can_blueprint</code></a><code>(unsigned id,UnitType unit_type,Direction direction) const</code>](#public-inline-boolcan_blueprintunsigned-idunittype-unit_typedirection-direction-const)
         * [public inline void<a href="#classbc_1_1GameController_1ad36c5ce85d509124d4f6de835ceac5fd"><code>blueprint</code></a><code>(unsigned id,UnitType unit_type,Direction direction) const</code>](#public-inline-voidblueprintunsigned-idunittype-unit_typedirection-direction-const)
         * [public inline bool<a href="#classbc_1_1GameController_1a6d617745de46f37e5a0187e2c4590f68"><code>can_build</code></a><code>(unsigned worker_id,unsigned blueprint_id) const</code>](#public-inline-boolcan_buildunsigned-worker_idunsigned-blueprint_id-const)
         * [public inline void<a href="#classbc_1_1GameController_1ae9ba265dafa4edc2fab8a11673545549"><code>build</code></a><code>(unsigned worker_id,unsigned blueprint_id) const</code>](#public-inline-voidbuildunsigned-worker_idunsigned-blueprint_id-const)
         * [public inline bool<a href="#classbc_1_1GameController_1a8111a6261382763c0d290e1727b71a7c"><code>can_repair</code></a><code>(unsigned worker_id,unsigned structure_id) const</code>](#public-inline-boolcan_repairunsigned-worker_idunsigned-structure_id-const)
         * [public inline void<a href="#classbc_1_1GameController_1a7f1ba949b58b8ec3328cc3ba984c26a7"><code>repair</code></a><code>(unsigned worker_id,unsigned structure_id) const</code>](#public-inline-voidrepairunsigned-worker_idunsigned-structure_id-const)
         * [public inline bool<a href="#classbc_1_1GameController_1ad64e4084c46e641f50af96df6f454814"><code>can_replicate</code></a><code>(unsigned worker_id,Direction direction) const</code>](#public-inline-boolcan_replicateunsigned-worker_iddirection-direction-const)
         * [public inline void<a href="#classbc_1_1GameController_1a6938f4b7e8a073e3acae4133686e34e3"><code>replicate</code></a><code>(unsigned worker_id,Direction direction) const</code>](#public-inline-voidreplicateunsigned-worker_iddirection-direction-const)
         * [public inline bool<a href="#classbc_1_1GameController_1a77c53b59eb533f6e22ff079a25503d36"><code>can_javelin</code></a><code>(unsigned knight_id,unsigned target_id) const</code>](#public-inline-boolcan_javelinunsigned-knight_idunsigned-target_id-const)
         * [public inline bool<a href="#classbc_1_1GameController_1ac1a328922aa28243c6fb064585ef715d"><code>is_javelin_ready</code></a><code>(unsigned knight_id) const</code>](#public-inline-boolis_javelin_readyunsigned-knight_id-const)
         * [public inline void<a href="#classbc_1_1GameController_1a0d0df58c37778e08516a75429fb49bd8"><code>javelin</code></a><code>(unsigned knight_id,unsigned target_id) const</code>](#public-inline-voidjavelinunsigned-knight_idunsigned-target_id-const)
         * [public inline bool<a href="#classbc_1_1GameController_1ac667c67be90d5d63d64a9a7b06a8fa83"><code>can_begin_snipe</code></a><code>(unsigned ranger_id,const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location) const</code>](#public-inline-boolcan_begin_snipeunsigned-ranger_idconstmaplocation-map_location-const)
         * [public inline void<a href="#classbc_1_1GameController_1ab6f5859ad3c52852b19029190034c1d5"><code>begin_snipe</code></a><code>(unsigned ranger_id,const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location) const</code>](#public-inline-voidbegin_snipeunsigned-ranger_idconstmaplocation-map_location-const)
         * [public inline bool<a href="#classbc_1_1GameController_1a89638a73699fc08905d3d2422ca33c91"><code>can_begin_blink</code></a><code>(unsigned mage_id,const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location) const</code>](#public-inline-boolcan_begin_blinkunsigned-mage_idconstmaplocation-map_location-const)
         * [public inline bool<a href="#classbc_1_1GameController_1a4b624a44370544aab3da812e36866646"><code>is_blink_ready</code></a><code>(unsigned mage_id) const</code>](#public-inline-boolis_blink_readyunsigned-mage_id-const)
         * [public inline void<a href="#classbc_1_1GameController_1a9d57ab7d8e1418c31437d70a122ad899"><code>blink</code></a><code>(unsigned mage_id,const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location) const</code>](#public-inline-voidblinkunsigned-mage_idconstmaplocation-map_location-const)
         * [public inline bool<a href="#classbc_1_1GameController_1aabd6b77ff681b5cff80fe3804eb91b6b"><code>can_heal</code></a><code>(unsigned healer_id,unsigned target_id) const</code>](#public-inline-boolcan_healunsigned-healer_idunsigned-target_id-const)
         * [public inline bool<a href="#classbc_1_1GameController_1a550cc28d4942640a3a1453f87be53f27"><code>is_heal_ready</code></a><code>(unsigned healer_id) const</code>](#public-inline-boolis_heal_readyunsigned-healer_id-const)
         * [public inline void<a href="#classbc_1_1GameController_1ac030023653b0864dcf858f203d7bdb46"><code>heal</code></a><code>(unsigned healer_id,unsigned target_id) const</code>](#public-inline-voidhealunsigned-healer_idunsigned-target_id-const)
         * [public inline bool<a href="#classbc_1_1GameController_1a9a1d2569d67de48eb351964dac899c83"><code>is_overcharge_ready</code></a><code>(unsigned healer_id) const</code>](#public-inline-boolis_overcharge_readyunsigned-healer_id-const)
         * [public inline void<a href="#classbc_1_1GameController_1a93ad878d8eeb286d1c9f3223404fed9b"><code>overcharge</code></a><code>(unsigned healer_id,unsigned target_id) const</code>](#public-inline-voidoverchargeunsigned-healer_idunsigned-target_id-const)
         * [public inline bool<a href="#classbc_1_1GameController_1a51c816f85e9c0f40f10ee65ff100f48d"><code>can_load</code></a><code>(unsigned structure_id,unsigned robot_id) const</code>](#public-inline-boolcan_loadunsigned-structure_idunsigned-robot_id-const)
         * [public inline void<a href="#classbc_1_1GameController_1a4edaefa7459063b354193c3ad96cc24e"><code>load</code></a><code>(unsigned structure_id,unsigned robot_id) const</code>](#public-inline-voidloadunsigned-structure_idunsigned-robot_id-const)
         * [public inline bool<a href="#classbc_1_1GameController_1a8b0217178de5bc93dd4208f5ecc33332"><code>can_unload</code></a><code>(unsigned structure_id,Direction direction) const</code>](#public-inline-boolcan_unloadunsigned-structure_iddirection-direction-const)
         * [public inline void<a href="#classbc_1_1GameController_1a2cfce8136583d6c5049355b3f8d5086f"><code>unload</code></a><code>(unsigned structure_id,Direction direction) const</code>](#public-inline-voidunloadunsigned-structure_iddirection-direction-const)
         * [public inline bool<a href="#classbc_1_1GameController_1a1b2f66ca3750889f429f2784dd2d2fa1"><code>can_produce_robot</code></a><code>(unsigned factory_id,UnitType unit_type) const</code>](#public-inline-boolcan_produce_robotunsigned-factory_idunittype-unit_type-const)
         * [public inline void<a href="#classbc_1_1GameController_1ad23baf92fdaa8b0a971ba0cf921046f6"><code>produce_robot</code></a><code>(unsigned factory_id,UnitType unit_type) const</code>](#public-inline-voidproduce_robotunsigned-factory_idunittype-unit_type-const)
         * [public inline<a href="#classbc_1_1RocketLandingInfo"><code>RocketLandingInfo</code></a><code></code><a href="#classbc_1_1GameController_1a2c2ed052db056af0a3269c9b377e95f3"><code>get_rocket_landings</code></a><code>() const</code>](#public-inlinerocketlandinginfoget_rocket_landings-const)
         * [public inline bool<a href="#classbc_1_1GameController_1a84f5505f7190a068f610fc0ba5130c10"><code>can_launch_rocket</code></a><code>(unsigned rocket_id,const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location) const</code>](#public-inline-boolcan_launch_rocketunsigned-rocket_idconstmaplocation-map_location-const)
         * [public inline void<a href="#classbc_1_1GameController_1a8fb13057af998b2c1f0cb05cd2255964"><code>launch_rocket</code></a><code>(unsigned rocket_id,const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location) const</code>](#public-inline-voidlaunch_rocketunsigned-rocket_idconstmaplocation-map_location-const)
         * [public inline bool<a href="#classbc_1_1GameController_1ad1fd0e92f15833e3c10181161aa8b47b"><code>is_over</code></a><code>() const</code>](#public-inline-boolis_over-const)
         * [public inline Team<a href="#classbc_1_1GameController_1af5d8f6949de85a9523edbf5a851ecfc7"><code>get_winning_team</code></a><code>() const</code>](#public-inline-teamget_winning_team-const)
   * [class bc::Location](#class-bclocation)
      * [Summary](#summary-5)
      * [Members](#members-4)
         * [public inline<a href="#classbc_1_1Location_1a43ba54b5f426dd24fd7fea853ce5c317"><code>Location</code></a><code>()</code>](#public-inlinelocation)
         * [public inline<a href="#classbc_1_1Location_1add423c24b5c085f94566eb11deedb5eb"><code>Location</code></a><code>(const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location)</code>](#public-inlinelocationconstmaplocation-map_location)
         * [public inline<a href="#classbc_1_1Location_1a92c667b813c9cfa4098cebaa302734c5"><code>Location</code></a><code>(unsigned garrison_id)</code>](#public-inlinelocationunsigned-garrison_id)
         * [public inline explicit<a href="#classbc_1_1Location_1afe850c4a72ca963384f83acbcdfb741c"><code>Location</code></a><code>(bc_Location * location)</code>](#public-inline-explicitlocationbc_location--location)
         * [public inline bool<a href="#classbc_1_1Location_1a015b69417ffccdc52a83b564629969d2"><code>is_on_map</code></a><code>() const</code>](#public-inline-boolis_on_map-const)
         * [public inline bool<a href="#classbc_1_1Location_1a55c0cfb8c723796f9b599f2f221c73ed"><code>is_on_planet</code></a><code>(Planet planet) const</code>](#public-inline-boolis_on_planetplanet-planet-const)
         * [public inline<a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code></code><a href="#classbc_1_1Location_1a4f808381446b013ff22abe857069ad23"><code>get_map_location</code></a><code>() const</code>](#public-inlinemaplocationget_map_location-const-1)
         * [public inline bool<a href="#classbc_1_1Location_1ab20057515771adf0f40f1a5a7adb9dee"><code>is_in_garrison</code></a><code>() const</code>](#public-inline-boolis_in_garrison-const)
         * [public inline int<a href="#classbc_1_1Location_1aa5f04b7a6068504184c119bbfd9ea18f"><code>get_structure</code></a><code>() const</code>](#public-inline-intget_structure-const)
         * [public inline bool<a href="#classbc_1_1Location_1aadb76f4fe212663cfe7f5c7a850bc12f"><code>is_in_space</code></a><code>() const</code>](#public-inline-boolis_in_space-const)
         * [public inline bool<a href="#classbc_1_1Location_1a43d991642f7b8792cd28ae8a8d5a6a76"><code>is_adjacent_to</code></a><code>(</code><a href="#classbc_1_1Location"><code>Location</code></a><code>location)</code>](#public-inline-boolis_adjacent_tolocationlocation)
         * [public inline bool<a href="#classbc_1_1Location_1a1e32ea6b52c81b834b0c4588c451457f"><code>is_within_range</code></a><code>(unsigned range,</code><a href="#classbc_1_1Location"><code>Location</code></a><code>location)</code>](#public-inline-boolis_within_rangeunsigned-rangelocationlocation)
   * [class bc::MapLocation](#class-bcmaplocation)
      * [Summary](#summary-6)
      * [Members](#members-5)
         * [public inline<a href="#classbc_1_1MapLocation_1ab313f647684390e3e78ec9fc26999305"><code>MapLocation</code></a><code>()</code>](#public-inlinemaplocation)
         * [public inline<a href="#classbc_1_1MapLocation_1aee5b70cc3589b43b42996e8f55c12e5b"><code>MapLocation</code></a><code>(Planet planet,int x,int y)</code>](#public-inlinemaplocationplanet-planetint-xint-y)
         * [public inline<a href="#classbc_1_1MapLocation_1a0cc7e8519db71c6ccf462bb498b67d50"><code>MapLocation</code></a><code>(const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location)</code>](#public-inlinemaplocationconstmaplocation-map_location)
         * [public<a href="#classbc_1_1MapLocation_1a5c268ca25f4def44aae94dc6336f2198"><code>MapLocation</code></a><code>(</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp;&amp;) = default</code>](#publicmaplocationmaplocation--default)
         * [public inline<a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp;</code><a href="#classbc_1_1MapLocation_1a309cf8e4b945567f8f01e2f22ed2eac1"><code>operator=</code></a><code>(const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location)</code>](#public-inlinemaplocationoperatorconstmaplocation-map_location)
         * [public<a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp;</code><a href="#classbc_1_1MapLocation_1a3dbc68b4dbb4248cf472fbc7ce543f81"><code>operator=</code></a><code>(</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp;&amp;) = default</code>](#publicmaplocationoperatormaplocation--default)
         * [public inline Planet<a href="#classbc_1_1MapLocation_1a985fd5880ada52a524857c01292eea54"><code>get_planet</code></a><code>() const</code>](#public-inline-planetget_planet-const-1)
         * [public inline int<a href="#classbc_1_1MapLocation_1a3e06a1063a6d1215b05eb395ba3657f5"><code>get_x</code></a><code>() const</code>](#public-inline-intget_x-const)
         * [public inline int<a href="#classbc_1_1MapLocation_1a06dbaa3ed5a43c024dfa5125c634a35c"><code>get_y</code></a><code>() const</code>](#public-inline-intget_y-const)
         * [public inline void<a href="#classbc_1_1MapLocation_1adc404e0ed18b9d3701b03379c9e56f00"><code>set_planet</code></a><code>(Planet planet)</code>](#public-inline-voidset_planetplanet-planet)
         * [public inline void<a href="#classbc_1_1MapLocation_1a57cd1f71b3680fea48615d15574a9706"><code>set_x</code></a><code>(int x)</code>](#public-inline-voidset_xint-x)
         * [public inline void<a href="#classbc_1_1MapLocation_1ad82adb7e6a7d84f44245e097d08e6908"><code>set_y</code></a><code>(int y)</code>](#public-inline-voidset_yint-y)
         * [public inline<a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code></code><a href="#classbc_1_1MapLocation_1afacfd29329458a5861bbcd17745f0ca0"><code>add</code></a><code>(Direction direction) const</code>](#public-inlinemaplocationadddirection-direction-const)
         * [public inline<a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code></code><a href="#classbc_1_1MapLocation_1a518baf92a9903130089f7fb98b810cb5"><code>subtract</code></a><code>(Direction direction) const</code>](#public-inlinemaplocationsubtractdirection-direction-const)
         * [public inline<a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code></code><a href="#classbc_1_1MapLocation_1a185e1f6170366b8686b5601ba6d91c6c"><code>add_multiple</code></a><code>(Direction direction,int multiple) const</code>](#public-inlinemaplocationadd_multipledirection-directionint-multiple-const)
         * [public inline<a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code></code><a href="#classbc_1_1MapLocation_1a07f9f22a4ce93b7d9202d3497dd41253"><code>translate</code></a><code>(int dx,int dy) const</code>](#public-inlinemaplocationtranslateint-dxint-dy-const)
         * [public inline unsigned<a href="#classbc_1_1MapLocation_1ac448524d2dc59e144d4839fefe6e4cb7"><code>distance_squared_to</code></a><code>(const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location) const</code>](#public-inline-unsigneddistance_squared_toconstmaplocation-map_location-const)
         * [public inline Direction<a href="#classbc_1_1MapLocation_1ad46b170b01f805bc23d0c1fc34e9e0eb"><code>direction_to</code></a><code>(const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location) const</code>](#public-inline-directiondirection_toconstmaplocation-map_location-const)
         * [public inline bool<a href="#classbc_1_1MapLocation_1a74eab87af0155901216f2f48d40d854e"><code>is_adjacent_to</code></a><code>(const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location) const</code>](#public-inline-boolis_adjacent_toconstmaplocation-map_location-const)
         * [public inline bool<a href="#classbc_1_1MapLocation_1ad9e1d075d5fb142fc9920bced92a2ea2"><code>is_within_range</code></a><code>(unsigned range,const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location) const</code>](#public-inline-boolis_within_rangeunsigned-rangeconstmaplocation-map_location-const)
         * [public inline bool<a href="#classbc_1_1MapLocation_1a5a039fbf186050dadf1234b3689adc02"><code>operator==</code></a><code>(const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location) const</code>](#public-inline-booloperatorconstmaplocation-map_location-const)
         * [public inline bool<a href="#classbc_1_1MapLocation_1af9cf32ce1a51f5325479d2fa527a3e1f"><code>operator!=</code></a><code>(const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location) const</code>](#public-inline-booloperatorconstmaplocation-map_location-const-1)
   * [class bc::OrbitPattern](#class-bcorbitpattern)
      * [Summary](#summary-7)
      * [Members](#members-6)
         * [public inline<a href="#classbc_1_1OrbitPattern_1a55262c3f6f13fe4a722d38fb8aadafe1"><code>OrbitPattern</code></a><code>(bc_OrbitPattern * orbit_pattern)</code>](#public-inlineorbitpatternbc_orbitpattern--orbit_pattern)
         * [public inline unsigned<a href="#classbc_1_1OrbitPattern_1a6249e7452dbd93a9375b1bcca526bf12"><code>get_amplitude</code></a><code>() const</code>](#public-inline-unsignedget_amplitude-const)
         * [public inline unsigned<a href="#classbc_1_1OrbitPattern_1a1d810c50aeb9448280370d6ea69c0539"><code>get_period</code></a><code>() const</code>](#public-inline-unsignedget_period-const)
         * [public inline unsigned<a href="#classbc_1_1OrbitPattern_1a45b97832066611392122e5aee865b616"><code>get_center</code></a><code>() const</code>](#public-inline-unsignedget_center-const)
         * [public inline unsigned<a href="#classbc_1_1OrbitPattern_1ae51c9df8b7562b3963a13ad45b14a101"><code>duration</code></a><code>(unsigned round) const</code>](#public-inline-unsigneddurationunsigned-round-const)
   * [class bc::PlanetMap](#class-bcplanetmap)
      * [Summary](#summary-8)
      * [Members](#members-7)
         * [public inline<a href="#classbc_1_1PlanetMap_1adbb40a38be6b197ff711ed727c1d9ef4"><code>PlanetMap</code></a><code>()</code>](#public-inlineplanetmap)
         * [public inline<a href="#classbc_1_1PlanetMap_1a3b970b469fc63b69d712425c2c6e534e"><code>PlanetMap</code></a><code>(bc_PlanetMap * planet_map)</code>](#public-inlineplanetmapbc_planetmap--planet_map)
         * [public inline<a href="#classbc_1_1PlanetMap_1aa1c9c8d6d993752dfc24dc95928a62aa"><code>PlanetMap</code></a><code>(const</code><a href="#classbc_1_1PlanetMap"><code>PlanetMap</code></a><code>&amp; planet_map)</code>](#public-inlineplanetmapconstplanetmap-planet_map)
         * [public<a href="#classbc_1_1PlanetMap_1a39c05f281670eba3cc25a01ad6e49efc"><code>PlanetMap</code></a><code>(</code><a href="#classbc_1_1PlanetMap"><code>PlanetMap</code></a><code>&amp;&amp; planet_map) = default</code>](#publicplanetmapplanetmap-planet_map--default)
         * [public inline<a href="#classbc_1_1PlanetMap"><code>PlanetMap</code></a><code>&amp;</code><a href="#classbc_1_1PlanetMap_1a3b8d1607587e16b2d788e3694d381633"><code>operator=</code></a><code>(const</code><a href="#classbc_1_1PlanetMap"><code>PlanetMap</code></a><code>&amp; planet_map)</code>](#public-inlineplanetmapoperatorconstplanetmap-planet_map)
         * [public<a href="#classbc_1_1PlanetMap"><code>PlanetMap</code></a><code>&amp;</code><a href="#classbc_1_1PlanetMap_1ab578ea09459d3a8019e836c42047d3c7"><code>operator=</code></a><code>(</code><a href="#classbc_1_1PlanetMap"><code>PlanetMap</code></a><code>&amp;&amp; planet_map) = default</code>](#publicplanetmapoperatorplanetmap-planet_map--default)
         * [public inline Planet<a href="#classbc_1_1PlanetMap_1ad4f666a39d7d1a67150562901e457a6f"><code>get_planet</code></a><code>() const</code>](#public-inline-planetget_planet-const-2)
         * [public inline unsigned<a href="#classbc_1_1PlanetMap_1a0075bdf4c8363229047875317dc5ff35"><code>get_height</code></a><code>() const</code>](#public-inline-unsignedget_height-const)
         * [public inline unsigned<a href="#classbc_1_1PlanetMap_1ae58125fd7979ac1f5ee215ac7785a572"><code>get_width</code></a><code>() const</code>](#public-inline-unsignedget_width-const)
         * [public inline const std::vector&lt;<a href="#classbc_1_1Unit"><code>Unit</code></a><code>&gt; &amp;</code><a href="#classbc_1_1PlanetMap_1ae8f7ff10beed0194b6ce49ec8286a55f"><code>get_initial_units</code></a><code>() const</code>](#public-inline-const-stdvectorunit-get_initial_units-const)
         * [public inline bool<a href="#classbc_1_1PlanetMap_1aeff5395b01ec946b0337e148fd33caec"><code>is_on_map</code></a><code>(const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; location) const</code>](#public-inline-boolis_on_mapconstmaplocation-location-const)
         * [public inline bool<a href="#classbc_1_1PlanetMap_1a2b416adb3155fc7964cf570f20f97224"><code>is_passable_terrain_at</code></a><code>(const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location) const</code>](#public-inline-boolis_passable_terrain_atconstmaplocation-map_location-const)
         * [public inline unsigned<a href="#classbc_1_1PlanetMap_1a39d912a61d2668da5262e7f564c55234"><code>get_initial_karbonite_at</code></a><code>(const</code><a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp; map_location) const</code>](#public-inline-unsignedget_initial_karbonite_atconstmaplocation-map_location-const)
         * [public inline std::vector&lt; std::vector&lt; std::pair&lt; bool, unsigned &gt; &gt; &gt;<a href="#classbc_1_1PlanetMap_1a63bdc1578d81eaf2a63b77755a49a3f4"><code>get_initial_map</code></a><code>() const</code>](#public-inline-stdvector-stdvector-stdpair-bool-unsigned---get_initial_map-const)
   * [class bc::ResearchInfo](#class-bcresearchinfo)
      * [Summary](#summary-9)
      * [Members](#members-8)
         * [public inline<a href="#classbc_1_1ResearchInfo_1a9f7f52e1e77bea859b19bb0978e0a8fa"><code>ResearchInfo</code></a><code>(bc_ResearchInfo * info)</code>](#public-inlineresearchinfobc_researchinfo--info)
         * [public inline unsigned<a href="#classbc_1_1ResearchInfo_1a04105d849dafe3a3a73521508f5ab698"><code>max_level</code></a><code>(UnitType branch) const</code>](#public-inline-unsignedmax_levelunittype-branch-const)
         * [public inline unsigned<a href="#classbc_1_1ResearchInfo_1a118b912a25b2651d5d19df4ca2bbdd52"><code>cost_of</code></a><code>(UnitType branch,unsigned level) const</code>](#public-inline-unsignedcost_ofunittype-branchunsigned-level-const)
         * [public inline unsigned<a href="#classbc_1_1ResearchInfo_1a08af7a4f8594ffab04ac8c4040c742c4"><code>get_level</code></a><code>(UnitType branch) const</code>](#public-inline-unsignedget_levelunittype-branch-const)
         * [public inline std::vector&lt; UnitType &gt;<a href="#classbc_1_1ResearchInfo_1a939db9bb1af916c07079143d45071aa8"><code>get_queue</code></a><code>() const</code>](#public-inline-stdvector-unittype-get_queue-const)
         * [public inline bool<a href="#classbc_1_1ResearchInfo_1adaa6e9a78008146f11ffb75945b806b2"><code>has_next_in_queue</code></a><code>() const</code>](#public-inline-boolhas_next_in_queue-const)
         * [public inline UnitType<a href="#classbc_1_1ResearchInfo_1af2730634f508ffe66a9e0779cc45a42d"><code>next_in_queue</code></a><code>() const</code>](#public-inline-unittypenext_in_queue-const)
         * [public inline unsigned<a href="#classbc_1_1ResearchInfo_1a52e6329380f88b46425dc0ede5ad37f1"><code>rounds_left</code></a><code>() const</code>](#public-inline-unsignedrounds_left-const)
   * [class bc::RocketLanding](#class-bcrocketlanding)
      * [Summary](#summary-10)
      * [Members](#members-9)
         * [public inline<a href="#classbc_1_1RocketLanding_1a9b42a38991fbafac0bca780699e7fa17"><code>RocketLanding</code></a><code>(bc_RocketLanding * rocket_landing)</code>](#public-inlinerocketlandingbc_rocketlanding--rocket_landing)
         * [public inline unsigned<a href="#classbc_1_1RocketLanding_1a8a4261266192a1bc6320da13d7fc18ce"><code>get_rocket_id</code></a><code>() const</code>](#public-inline-unsignedget_rocket_id-const)
         * [public inline const<a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code>&amp;</code><a href="#classbc_1_1RocketLanding_1a90655bf5123e039b607c930dd1f48a1e"><code>get_destination</code></a><code>() const</code>](#public-inline-constmaplocationget_destination-const)
   * [class bc::RocketLandingInfo](#class-bcrocketlandinginfo)
      * [Summary](#summary-11)
      * [Members](#members-10)
         * [public inline explicit<a href="#classbc_1_1RocketLandingInfo_1afc3c4a4358f025f2489b1240fccbc00a"><code>RocketLandingInfo</code></a><code>(bc_RocketLandingInfo * rocket_landing_info)</code>](#public-inline-explicitrocketlandinginfobc_rocketlandinginfo--rocket_landing_info)
         * [public inline std::vector&lt;<a href="#classbc_1_1RocketLanding"><code>RocketLanding</code></a><code>&gt;</code><a href="#classbc_1_1RocketLandingInfo_1ada1ff7da67865d9fb919f2f974f1d724"><code>get_landings_on_round</code></a><code>(unsigned round)</code>](#public-inline-stdvectorrocketlandingget_landings_on_roundunsigned-round)
   * [class bc::Unit](#class-bcunit)
      * [Summary](#summary-12)
      * [Members](#members-11)
         * [public inline<a href="#classbc_1_1Unit_1a2d86e81119175536621b877217427cfe"><code>Unit</code></a><code>()</code>](#public-inlineunit)
         * [public inline explicit<a href="#classbc_1_1Unit_1adc7c66deaef5289f43380c0c86d51e20"><code>Unit</code></a><code>(bc_Unit * unit)</code>](#public-inline-explicitunitbc_unit--unit)
         * [public inline<a href="#classbc_1_1Unit_1abbd01a2f8804a90592f98a8f2011123d"><code>Unit</code></a><code>(const</code><a href="#classbc_1_1Unit"><code>Unit</code></a><code>&amp; unit)</code>](#public-inlineunitconstunit-unit)
         * [public<a href="#classbc_1_1Unit_1a14aa95eeb4962ababa2711c08cc34be2"><code>Unit</code></a><code>(</code><a href="#classbc_1_1Unit"><code>Unit</code></a><code>&amp;&amp; unit) = default</code>](#publicunitunit-unit--default)
         * [public inline<a href="#classbc_1_1Unit"><code>Unit</code></a><code>&amp;</code><a href="#classbc_1_1Unit_1a4ef7b8486af4cbb33688a4027015ee3c"><code>operator=</code></a><code>(const</code><a href="#classbc_1_1Unit"><code>Unit</code></a><code>&amp; unit)</code>](#public-inlineunitoperatorconstunit-unit)
         * [public<a href="#classbc_1_1Unit"><code>Unit</code></a><code>&amp;</code><a href="#classbc_1_1Unit_1aba923e9334e75b65afe089e2af348c8f"><code>operator=</code></a><code>(</code><a href="#classbc_1_1Unit"><code>Unit</code></a><code>&amp;&amp; unit) = default</code>](#publicunitoperatorunit-unit--default)
         * [public inline UnitType<a href="#classbc_1_1Unit_1a2895d7f4687e1db8ad427a47ff709f5e"><code>get_unit_type</code></a><code>() const</code>](#public-inline-unittypeget_unit_type-const)
         * [public inline Team<a href="#classbc_1_1Unit_1ac12f4a7ed90083f5e94276433dbf2fe1"><code>get_team</code></a><code>() const</code>](#public-inline-teamget_team-const-1)
         * [public inline<a href="#classbc_1_1Location"><code>Location</code></a><code></code><a href="#classbc_1_1Unit_1a6e02bd4fd491a7fdc698d2b64f485e37"><code>get_location</code></a><code>() const</code>](#public-inlinelocationget_location-const)
         * [public inline bool<a href="#classbc_1_1Unit_1ac852cfe09e6bb43a6e1bb5308ed77411"><code>is_on_map</code></a><code>() const</code>](#public-inline-boolis_on_map-const-1)
         * [public inline<a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code></code><a href="#classbc_1_1Unit_1ac9e3aa80ad698b62d7edb69e9d7c301f"><code>get_map_location</code></a><code>() const</code>](#public-inlinemaplocationget_map_location-const-2)
         * [public inline unsigned<a href="#classbc_1_1Unit_1a0651ba67f733ebc6974e5eda99e69d82"><code>get_id</code></a><code>() const</code>](#public-inline-unsignedget_id-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1a87a7228914b309722d455328ef668fe0"><code>get_health</code></a><code>() const</code>](#public-inline-unsignedget_health-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1a2331dcd04bbe2fd2484a7722352774d5"><code>get_max_health</code></a><code>() const</code>](#public-inline-unsignedget_max_health-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1a8685f362be1643863207fc39c0c0e24e"><code>get_vision_range</code></a><code>() const</code>](#public-inline-unsignedget_vision_range-const)
         * [public inline int<a href="#classbc_1_1Unit_1a19096593adc701760c2e80a17c2ae3c9"><code>get_damage</code></a><code>() const</code>](#public-inline-intget_damage-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1a8123c09b7340e2ff4f579467810c8093"><code>get_movement_heat</code></a><code>() const</code>](#public-inline-unsignedget_movement_heat-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1a48d43363f0f177f2fd2d3cd5f1323af4"><code>get_movement_cooldown</code></a><code>() const</code>](#public-inline-unsignedget_movement_cooldown-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1add0f7bf216e63d40ea24f02f2da9295e"><code>get_attack_heat</code></a><code>() const</code>](#public-inline-unsignedget_attack_heat-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1ab2e4c013c576fad6c409380935e9217f"><code>get_attack_cooldown</code></a><code>() const</code>](#public-inline-unsignedget_attack_cooldown-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1a477039dce8a9f8786ede9c4b7d007248"><code>get_attack_range</code></a><code>() const</code>](#public-inline-unsignedget_attack_range-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1a452e5a308876d03b4f351181ef67df98"><code>get_ability_heat</code></a><code>() const</code>](#public-inline-unsignedget_ability_heat-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1a4238419858b61b0b40ae6d082bf4e7f2"><code>get_ability_cooldown</code></a><code>() const</code>](#public-inline-unsignedget_ability_cooldown-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1abd3162f3e9de901318dd34b23a71f691"><code>get_ability_range</code></a><code>() const</code>](#public-inline-unsignedget_ability_range-const)
         * [public inline bool<a href="#classbc_1_1Unit_1a67299f3a941b7ea1224e247235a87de8"><code>is_ability_unlocked</code></a><code>() const</code>](#public-inline-boolis_ability_unlocked-const)
         * [public inline bool<a href="#classbc_1_1Unit_1aeb00fdbf8583d58bb0a2ee6929a9188c"><code>worker_has_acted</code></a><code>() const</code>](#public-inline-boolworker_has_acted-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1ae22bd1a4a036a61c6195e68dad0bf871"><code>get_worker_build_health</code></a><code>() const</code>](#public-inline-unsignedget_worker_build_health-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1a9fa7747b481c880afe6b70966fa0b756"><code>get_worker_repair_health</code></a><code>() const</code>](#public-inline-unsignedget_worker_repair_health-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1aa50fa48bccd3cd30361249680d054fb7"><code>get_worker_harvest_amount</code></a><code>() const</code>](#public-inline-unsignedget_worker_harvest_amount-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1a2e1e57d82edb483233dff0c5fea0a0ea"><code>get_knight_defense</code></a><code>() const</code>](#public-inline-unsignedget_knight_defense-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1ace00cd7b45f9a8d439b9b3341bb7f0bb"><code>get_ranger_cannot_attack_range</code></a><code>() const</code>](#public-inline-unsignedget_ranger_cannot_attack_range-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1ad76f2c791d62c1edc7a409826ba82d7f"><code>get_ranger_max_countdown</code></a><code>() const</code>](#public-inline-unsignedget_ranger_max_countdown-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1aaa13e6f01577032471caaeb32bdc54e1"><code>get_ranger_countdown</code></a><code>() const</code>](#public-inline-unsignedget_ranger_countdown-const)
         * [public inline bool<a href="#classbc_1_1Unit_1a1681c51a005c3271248804331b8b59bd"><code>ranger_is_sniping</code></a><code>() const</code>](#public-inline-boolranger_is_sniping-const)
         * [public inline<a href="#classbc_1_1MapLocation"><code>MapLocation</code></a><code></code><a href="#classbc_1_1Unit_1a4fa10106b45c19ae124b92e102d4dbd9"><code>get_ranger_target_location</code></a><code>() const</code>](#public-inlinemaplocationget_ranger_target_location-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1a0ae50e9b417de1ffc12b793ed60bfbfb"><code>get_healer_self_heal_amount</code></a><code>() const</code>](#public-inline-unsignedget_healer_self_heal_amount-const)
         * [public inline bool<a href="#classbc_1_1Unit_1ac907166215faf9372a9f2cc7a0a2ce35"><code>structure_is_built</code></a><code>() const</code>](#public-inline-boolstructure_is_built-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1a5c507cf496f05ef159912e7b8e6b193c"><code>get_structure_max_capacity</code></a><code>() const</code>](#public-inline-unsignedget_structure_max_capacity-const)
         * [public inline std::vector&lt; unsigned &gt;<a href="#classbc_1_1Unit_1a426a6f40cf51cd868de044156e3081af"><code>get_structure_garrison</code></a><code>() const</code>](#public-inline-stdvector-unsigned-get_structure_garrison-const)
         * [public inline bool<a href="#classbc_1_1Unit_1a6ffbd965a8a67b737b864001f5b48b28"><code>is_factory_producing</code></a><code>() const</code>](#public-inline-boolis_factory_producing-const)
         * [public inline UnitType<a href="#classbc_1_1Unit_1aee3e3badc7a2669b58924cf95d2a883b"><code>get_factory_unit_type</code></a><code>() const</code>](#public-inline-unittypeget_factory_unit_type-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1a1e0eb59e5af3a75b8314ae154ab81db7"><code>get_factory_rounds_left</code></a><code>() const</code>](#public-inline-unsignedget_factory_rounds_left-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1a933aca6455be358cb1f70422ccb9c94d"><code>get_factory_max_rounds_left</code></a><code>() const</code>](#public-inline-unsignedget_factory_max_rounds_left-const)
         * [public inline bool<a href="#classbc_1_1Unit_1ac661e30c2538cd5543c60a84c3bb5cd8"><code>rocket_is_used</code></a><code>() const</code>](#public-inline-boolrocket_is_used-const)
         * [public inline int<a href="#classbc_1_1Unit_1abdb17ac7cf496f5e29718474b348bcbd"><code>get_rocket_blast_damage</code></a><code>() const</code>](#public-inline-intget_rocket_blast_damage-const)
         * [public inline unsigned<a href="#classbc_1_1Unit_1ab0b2b8ea6b1035d2ba68f6f1474594c8"><code>get_rocket_travel_time_decrease</code></a><code>() const</code>](#public-inline-unsignedget_rocket_travel_time_decrease-const)

Created by [gh-md-toc](https://github.com/ekalinin/github-markdown-toc)

# Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`namespace `[`bc`](#namespacebc) | 

# namespace `bc` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public void `[`print_trace`](#bc___8hpp_1afd310c582a13a726edb7e8d259468a69)`()`            | 
`public static bool `[`clear_error`](#bc___8hpp_1a9eab1af869a744de81383a51ab14b882)`()`            | 
`public inline Planet `[`planet_other`](#bc___8hpp_1ab129eac4d03e8919482be61bef489a9b)`(Planet planet)`            | Get other planet. 
`public inline std::string `[`to_string`](#bc___8hpp_1a3f46915eb6cdd13b92e04d4079796c76)`(Planet planet)`            | Create a human-readable representation of a Planet 
`public inline int `[`direction_dx`](#bc___8hpp_1a376b234b3b8e965a9a8c4750bf364b8c)`(Direction direction)`            | Returns the x displacement of this direction. 
`public inline int `[`direction_dy`](#bc___8hpp_1a3f2be7da219ee9c159eafeb922fa67e5)`(Direction direction)`            | Returns the y displacement of this direction. 
`public inline bool `[`direction_is_diagonal`](#bc___8hpp_1a4d2d6143d7bb8e6be938069c9077083d)`(Direction direction)`            | Returns whether this direction is a diagonal one. 
`public inline Direction `[`direction_opposite`](#bc___8hpp_1ae56f54d1c284dcbc7954060dac51779d)`(Direction direction)`            | Returns the direction opposite this one, or Center if it's Center 
`public inline Direction `[`direction_rotate_left`](#bc___8hpp_1a31ad846fb08f589e3acae67d8e1b977e)`(Direction direction)`            | Returns the direction 45 degrees to the left (counter-clockwise) of this one, or Center if it's Center. 
`public inline Direction `[`direction_rotate_right`](#bc___8hpp_1a7050792e84c83b0955b34db7d707e15d)`(Direction direction)`            | Returns the direction 45 degrees to the right (clockwise) of this one, or Center if it's Center. 
`public inline bool `[`is_structure`](#bc___8hpp_1a367f7b1ad4bcce27bbd94a536393a89a)`(UnitType unit_type)`            | 
`public inline bool `[`is_robot`](#bc___8hpp_1a2ed320d0f77bc58e62def3a05bff51bd)`(UnitType unit_type)`            | 
`public static unsigned `[`unit_type_get_factory_cost`](#bc___8hpp_1abb55faf487cf5b743e55d6b3a031387a)`(UnitType unit_type)`            | 
`public static unsigned `[`unit_type_get_blueprint_cost`](#bc___8hpp_1aa9e9a53ac05a811bacf821801eb4e2f2)`(UnitType unit_type)`            | 
`public static unsigned `[`unit_type_get_replicate_cost`](#bc___8hpp_1a859c53ef3db54acef1c97d2239833968)`()`            | 
`public inline unsigned `[`unit_type_get_value`](#bc___8hpp_1a31345858842950badc7c9e191ba5fa5b)`(UnitType unit_type)`            | 
`class `[`bc::AsteroidPattern`](#classbc_1_1AsteroidPattern) | 
`class `[`bc::AsteroidStrike`](#classbc_1_1AsteroidStrike) | 
`class `[`bc::GameController`](#classbc_1_1GameController) | 
`class `[`bc::Location`](#classbc_1_1Location) | 
`class `[`bc::MapLocation`](#classbc_1_1MapLocation) | Two-dimensional coordinates in the Battlecode world.
`class `[`bc::OrbitPattern`](#classbc_1_1OrbitPattern) | 
`class `[`bc::PlanetMap`](#classbc_1_1PlanetMap) | 
`class `[`bc::ResearchInfo`](#classbc_1_1ResearchInfo) | 
`class `[`bc::RocketLanding`](#classbc_1_1RocketLanding) | 
`class `[`bc::RocketLandingInfo`](#classbc_1_1RocketLandingInfo) | 
`class `[`bc::Unit`](#classbc_1_1Unit) | 

## Members

#### `public void `[`print_trace`](#bc___8hpp_1afd310c582a13a726edb7e8d259468a69)`()` 

#### `public static bool `[`clear_error`](#bc___8hpp_1a9eab1af869a744de81383a51ab14b882)`()` 

#### `public inline Planet `[`planet_other`](#bc___8hpp_1ab129eac4d03e8919482be61bef489a9b)`(Planet planet)` 

Get other planet. 
#### Parameters
* `planet` 

#### Returns
the other planet

#### `public inline std::string `[`to_string`](#bc___8hpp_1a3f46915eb6cdd13b92e04d4079796c76)`(Planet planet)` 

Create a human-readable representation of a Planet 
#### Parameters
* `planet` 

#### Returns
the human-readable string

#### `public inline int `[`direction_dx`](#bc___8hpp_1a376b234b3b8e965a9a8c4750bf364b8c)`(Direction direction)` 

Returns the x displacement of this direction. 
#### Parameters
* `direction` 

#### Returns
the x displacement

#### `public inline int `[`direction_dy`](#bc___8hpp_1a3f2be7da219ee9c159eafeb922fa67e5)`(Direction direction)` 

Returns the y displacement of this direction. 
#### Parameters
* `direction` 

#### Returns
the y displacement

#### `public inline bool `[`direction_is_diagonal`](#bc___8hpp_1a4d2d6143d7bb8e6be938069c9077083d)`(Direction direction)` 

Returns whether this direction is a diagonal one. 
#### Parameters
* `direction` 

#### Returns
bool if the direction is diagonal or not

#### `public inline Direction `[`direction_opposite`](#bc___8hpp_1ae56f54d1c284dcbc7954060dac51779d)`(Direction direction)` 

Returns the direction opposite this one, or Center if it's Center 
#### Parameters
* `direction` 

#### Returns
the opposite direction

#### `public inline Direction `[`direction_rotate_left`](#bc___8hpp_1a31ad846fb08f589e3acae67d8e1b977e)`(Direction direction)` 

Returns the direction 45 degrees to the left (counter-clockwise) of this one, or Center if it's Center. 
#### Parameters
* `direction` 

#### Returns
the direction 45 degrees to the left

#### `public inline Direction `[`direction_rotate_right`](#bc___8hpp_1a7050792e84c83b0955b34db7d707e15d)`(Direction direction)` 

Returns the direction 45 degrees to the right (clockwise) of this one, or Center if it's Center. 
#### Parameters
* `direction` 

#### Returns
the direction 45 degrees to the right

#### `public inline bool `[`is_structure`](#bc___8hpp_1a367f7b1ad4bcce27bbd94a536393a89a)`(UnitType unit_type)` 

#### `public inline bool `[`is_robot`](#bc___8hpp_1a2ed320d0f77bc58e62def3a05bff51bd)`(UnitType unit_type)` 

#### `public static unsigned `[`unit_type_get_factory_cost`](#bc___8hpp_1abb55faf487cf5b743e55d6b3a031387a)`(UnitType unit_type)` 

#### `public static unsigned `[`unit_type_get_blueprint_cost`](#bc___8hpp_1aa9e9a53ac05a811bacf821801eb4e2f2)`(UnitType unit_type)` 

#### `public static unsigned `[`unit_type_get_replicate_cost`](#bc___8hpp_1a859c53ef3db54acef1c97d2239833968)`()` 

#### `public inline unsigned `[`unit_type_get_value`](#bc___8hpp_1a31345858842950badc7c9e191ba5fa5b)`(UnitType unit_type)` 

# class `bc::AsteroidPattern` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`AsteroidPattern`](#classbc_1_1AsteroidPattern_1a9904cb9395dc76bd5674adbc5a6282b0)`(bc_AsteroidPattern * pattern)` | 
`public inline bool `[`has_asteroid_on_round`](#classbc_1_1AsteroidPattern_1a80e6f05c79d6fc9e36e20cc4464bec9f)`(unsigned round) const` | 
`public inline `[`AsteroidStrike`](#classbc_1_1AsteroidStrike)` `[`get_asteroid_on_round`](#classbc_1_1AsteroidPattern_1a41fcc0924ec3ff55eead2e38522585fe)`(unsigned round) const` | 
`public inline std::unordered_map< unsigned, `[`AsteroidStrike`](#classbc_1_1AsteroidStrike)` > `[`get_all_strikes`](#classbc_1_1AsteroidPattern_1a11697694b5da9e018bb9bb87b5b10406)`()` | Utility function for gathering all strikes info rather than consulting for each round (they don't change the whole game) 

## Members

#### `public inline  `[`AsteroidPattern`](#classbc_1_1AsteroidPattern_1a9904cb9395dc76bd5674adbc5a6282b0)`(bc_AsteroidPattern * pattern)` 

#### `public inline bool `[`has_asteroid_on_round`](#classbc_1_1AsteroidPattern_1a80e6f05c79d6fc9e36e20cc4464bec9f)`(unsigned round) const` 

#### `public inline `[`AsteroidStrike`](#classbc_1_1AsteroidStrike)` `[`get_asteroid_on_round`](#classbc_1_1AsteroidPattern_1a41fcc0924ec3ff55eead2e38522585fe)`(unsigned round) const` 

#### `public inline std::unordered_map< unsigned, `[`AsteroidStrike`](#classbc_1_1AsteroidStrike)` > `[`get_all_strikes`](#classbc_1_1AsteroidPattern_1a11697694b5da9e018bb9bb87b5b10406)`()` 

Utility function for gathering all strikes info rather than consulting for each round (they don't change the whole game) 
#### Returns
the map strikes for each round

# class `bc::AsteroidStrike` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`AsteroidStrike`](#classbc_1_1AsteroidStrike_1aed812412740b8bfb32e6fd6383aa1f2f)`() = default` | 
`public inline  `[`AsteroidStrike`](#classbc_1_1AsteroidStrike_1ab71a8215dfa01e65ba12d8d205b86c74)`(unsigned karbonite,const `[`MapLocation`](#classbc_1_1MapLocation)` & location)` | 
`public inline  `[`AsteroidStrike`](#classbc_1_1AsteroidStrike_1a867eccc4e42ed79b50bd43e52014377f)`(bc_AsteroidStrike * asteroid)` | 
`public inline unsigned `[`get_karbonite`](#classbc_1_1AsteroidStrike_1a6f84a334a68cebe4c191e240b096709d)`() const` | 
`public inline `[`MapLocation`](#classbc_1_1MapLocation)` `[`get_map_location`](#classbc_1_1AsteroidStrike_1a4ed03ef835c41f72f5d78ad9ddaf55b0)`() const` | 

## Members

#### `public  `[`AsteroidStrike`](#classbc_1_1AsteroidStrike_1aed812412740b8bfb32e6fd6383aa1f2f)`() = default` 

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
`public  `[`GameController`](#classbc_1_1GameController_1af2dd8195cbcc36ffb58c7a7f2ff51db9)`(const `[`GameController`](#classbc_1_1GameController)` & that) = delete` | 
`public `[`GameController`](#classbc_1_1GameController)` & `[`operator=`](#classbc_1_1GameController_1aee26f3891452a92f47a12ff03ce0cd5d)`(const `[`GameController`](#classbc_1_1GameController)` & that) = delete` | 
`public inline void `[`next_turn`](#classbc_1_1GameController_1ae60afca5c3214ddd7545ce8b0378bbd9)`() const` | 
`public inline unsigned `[`get_round`](#classbc_1_1GameController_1a1d5f54077115253ef2a4a3185b563b25)`() const` | 
`public inline Planet `[`get_planet`](#classbc_1_1GameController_1ad50934738b703c0dac02fc2a85a72a10)`() const` | 
`public inline Team `[`get_team`](#classbc_1_1GameController_1a5254f80cb4350fb98ddf0ba4fafb036d)`() const` | 
`public inline const `[`PlanetMap`](#classbc_1_1PlanetMap)` & `[`get_starting_planet`](#classbc_1_1GameController_1a0ebb9fbc48d6022fd636f258e9679973)`(Planet planet)` | 
`public inline const `[`PlanetMap`](#classbc_1_1PlanetMap)` & `[`get_earth_map`](#classbc_1_1GameController_1a79693f1105a141212b52126a1fa0de51)`() const` | 
`public inline const `[`PlanetMap`](#classbc_1_1PlanetMap)` & `[`get_mars_map`](#classbc_1_1GameController_1a000f53d4e933b19d2432fd734ffa4c9e)`() const` | 
`public inline unsigned `[`get_karbonite`](#classbc_1_1GameController_1a54f8745e7fcf48c796689381c2177f36)`() const` | 
`public inline bool `[`has_unit`](#classbc_1_1GameController_1acc6a0cb0f04ba75cd104a23ab226a91a)`(unsigned id) const` | 
`public inline `[`Unit`](#classbc_1_1Unit)` `[`get_unit`](#classbc_1_1GameController_1a53cb3fc02161c27e54edd14269c0fe47)`(unsigned id) const` | 
`public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`get_units`](#classbc_1_1GameController_1acbba4a8b8432ab46d807f8c266a02619)`() const` | 
`public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`get_my_units`](#classbc_1_1GameController_1a21737a1bd2dd66534937ddd80e2105c0)`() const` | 
`public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`get_units_in_space`](#classbc_1_1GameController_1a0de2c06a5130266d093ef962580d1f53)`() const` | 
`public inline unsigned `[`get_karbonite_at`](#classbc_1_1GameController_1a312b003379e4faabdac05bc6e9be2944)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` | 
`public inline std::vector< `[`MapLocation`](#classbc_1_1MapLocation)` > `[`get_all_locations_within`](#classbc_1_1GameController_1a1fa63ad24724ef74254fa04be6886288)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location,unsigned radius_squared) const` | 
`public inline bool `[`can_sense_location`](#classbc_1_1GameController_1a43318ff9c7a897a2676ff986f25a0da7)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` | 
`public inline bool `[`can_sense_unit`](#classbc_1_1GameController_1a57914ebe1f56841f33ed6ed4f83b8f27)`(unsigned id) const` | 
`public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`sense_nearby_units`](#classbc_1_1GameController_1acbb062a7fdbe6789e2f99001aaff76fc)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location,unsigned radius_squared) const` | 
`public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`sense_nearby_units_by_team`](#classbc_1_1GameController_1aeff1cc58ad19d1b9a865a577a43b4555)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location,unsigned radius_squared,Team team) const` | 
`public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`sense_nearby_units_by_type`](#classbc_1_1GameController_1a0a4ef31890d40a7372d302c9b97d35d6)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location,unsigned radius_squared,UnitType type) const` | 
`public inline bool `[`has_unit_at_location`](#classbc_1_1GameController_1a146611e078468c9681212bdd483254ee)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` | 
`public inline `[`Unit`](#classbc_1_1Unit)` `[`sense_unit_at_location`](#classbc_1_1GameController_1a24141b15c52a94f469f26d3356f3f0ea)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` | 
`public inline const `[`AsteroidPattern`](#classbc_1_1AsteroidPattern)` & `[`get_asteroid_pattern`](#classbc_1_1GameController_1aeeee9efb73ccbaab47c7fc9f00560607)`() const` | 
`public inline const `[`OrbitPattern`](#classbc_1_1OrbitPattern)` & `[`get_orbit_pattern`](#classbc_1_1GameController_1aff7c9034b27f65de970dd175c0d594c2)`() const` | 
`public inline unsigned `[`get_current_duration_of_flight`](#classbc_1_1GameController_1a360710a324bc0ad53186ba0946a1e661)`() const` | 
`public inline std::vector< int > `[`get_team_array`](#classbc_1_1GameController_1ab95456005163781b3b885e6c0b40e95e)`(Planet planet) const` | 
`public inline void `[`write_team_array`](#classbc_1_1GameController_1a3b14db43392828f3cfdf0dd900aa5826)`(unsigned index,int value) const` | 
`public inline void `[`disintegrate_unit`](#classbc_1_1GameController_1af7960d09585c4619da3af1adeda1d7cd)`(unsigned id) const` | 
`public inline bool `[`is_occupiable`](#classbc_1_1GameController_1aeb61fa8e57105ddb84783d2b65367050)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` | 
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
`public inline bool `[`can_replicate`](#classbc_1_1GameController_1ad64e4084c46e641f50af96df6f454814)`(unsigned worker_id,Direction direction) const` | 
`public inline void `[`replicate`](#classbc_1_1GameController_1a6938f4b7e8a073e3acae4133686e34e3)`(unsigned worker_id,Direction direction) const` | 
`public inline bool `[`can_javelin`](#classbc_1_1GameController_1a77c53b59eb533f6e22ff079a25503d36)`(unsigned knight_id,unsigned target_id) const` | 
`public inline bool `[`is_javelin_ready`](#classbc_1_1GameController_1ac1a328922aa28243c6fb064585ef715d)`(unsigned knight_id) const` | 
`public inline void `[`javelin`](#classbc_1_1GameController_1a0d0df58c37778e08516a75429fb49bd8)`(unsigned knight_id,unsigned target_id) const` | 
`public inline bool `[`can_begin_snipe`](#classbc_1_1GameController_1ac667c67be90d5d63d64a9a7b06a8fa83)`(unsigned ranger_id,const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` | 
`public inline void `[`begin_snipe`](#classbc_1_1GameController_1ab6f5859ad3c52852b19029190034c1d5)`(unsigned ranger_id,const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` | 
`public inline bool `[`can_begin_blink`](#classbc_1_1GameController_1a89638a73699fc08905d3d2422ca33c91)`(unsigned mage_id,const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` | 
`public inline bool `[`is_blink_ready`](#classbc_1_1GameController_1a4b624a44370544aab3da812e36866646)`(unsigned mage_id) const` | 
`public inline void `[`blink`](#classbc_1_1GameController_1a9d57ab7d8e1418c31437d70a122ad899)`(unsigned mage_id,const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` | 
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
`public inline bool `[`can_launch_rocket`](#classbc_1_1GameController_1a84f5505f7190a068f610fc0ba5130c10)`(unsigned rocket_id,const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` | 
`public inline void `[`launch_rocket`](#classbc_1_1GameController_1a8fb13057af998b2c1f0cb05cd2255964)`(unsigned rocket_id,const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` | 
`public inline bool `[`is_over`](#classbc_1_1GameController_1ad1fd0e92f15833e3c10181161aa8b47b)`() const` | 
`public inline Team `[`get_winning_team`](#classbc_1_1GameController_1af5d8f6949de85a9523edbf5a851ecfc7)`() const` | 

## Members

#### `public inline  `[`GameController`](#classbc_1_1GameController_1a11549ebb60606ce9fb7746e8dae2cecc)`()` 

#### `public inline  `[`~GameController`](#classbc_1_1GameController_1a78770265fe3683efab5c20d8817a309e)`()` 

#### `public  `[`GameController`](#classbc_1_1GameController_1af2dd8195cbcc36ffb58c7a7f2ff51db9)`(const `[`GameController`](#classbc_1_1GameController)` & that) = delete` 

#### `public `[`GameController`](#classbc_1_1GameController)` & `[`operator=`](#classbc_1_1GameController_1aee26f3891452a92f47a12ff03ce0cd5d)`(const `[`GameController`](#classbc_1_1GameController)` & that) = delete` 

#### `public inline void `[`next_turn`](#classbc_1_1GameController_1ae60afca5c3214ddd7545ce8b0378bbd9)`() const` 

#### `public inline unsigned `[`get_round`](#classbc_1_1GameController_1a1d5f54077115253ef2a4a3185b563b25)`() const` 

#### `public inline Planet `[`get_planet`](#classbc_1_1GameController_1ad50934738b703c0dac02fc2a85a72a10)`() const` 

#### `public inline Team `[`get_team`](#classbc_1_1GameController_1a5254f80cb4350fb98ddf0ba4fafb036d)`() const` 

#### `public inline const `[`PlanetMap`](#classbc_1_1PlanetMap)` & `[`get_starting_planet`](#classbc_1_1GameController_1a0ebb9fbc48d6022fd636f258e9679973)`(Planet planet)` 

#### `public inline const `[`PlanetMap`](#classbc_1_1PlanetMap)` & `[`get_earth_map`](#classbc_1_1GameController_1a79693f1105a141212b52126a1fa0de51)`() const` 

#### `public inline const `[`PlanetMap`](#classbc_1_1PlanetMap)` & `[`get_mars_map`](#classbc_1_1GameController_1a000f53d4e933b19d2432fd734ffa4c9e)`() const` 

#### `public inline unsigned `[`get_karbonite`](#classbc_1_1GameController_1a54f8745e7fcf48c796689381c2177f36)`() const` 

#### `public inline bool `[`has_unit`](#classbc_1_1GameController_1acc6a0cb0f04ba75cd104a23ab226a91a)`(unsigned id) const` 

#### `public inline `[`Unit`](#classbc_1_1Unit)` `[`get_unit`](#classbc_1_1GameController_1a53cb3fc02161c27e54edd14269c0fe47)`(unsigned id) const` 

#### `public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`get_units`](#classbc_1_1GameController_1acbba4a8b8432ab46d807f8c266a02619)`() const` 

#### `public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`get_my_units`](#classbc_1_1GameController_1a21737a1bd2dd66534937ddd80e2105c0)`() const` 

#### `public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`get_units_in_space`](#classbc_1_1GameController_1a0de2c06a5130266d093ef962580d1f53)`() const` 

#### `public inline unsigned `[`get_karbonite_at`](#classbc_1_1GameController_1a312b003379e4faabdac05bc6e9be2944)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` 

#### `public inline std::vector< `[`MapLocation`](#classbc_1_1MapLocation)` > `[`get_all_locations_within`](#classbc_1_1GameController_1a1fa63ad24724ef74254fa04be6886288)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location,unsigned radius_squared) const` 

#### `public inline bool `[`can_sense_location`](#classbc_1_1GameController_1a43318ff9c7a897a2676ff986f25a0da7)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` 

#### `public inline bool `[`can_sense_unit`](#classbc_1_1GameController_1a57914ebe1f56841f33ed6ed4f83b8f27)`(unsigned id) const` 

#### `public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`sense_nearby_units`](#classbc_1_1GameController_1acbb062a7fdbe6789e2f99001aaff76fc)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location,unsigned radius_squared) const` 

#### `public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`sense_nearby_units_by_team`](#classbc_1_1GameController_1aeff1cc58ad19d1b9a865a577a43b4555)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location,unsigned radius_squared,Team team) const` 

#### `public inline std::vector< `[`Unit`](#classbc_1_1Unit)` > `[`sense_nearby_units_by_type`](#classbc_1_1GameController_1a0a4ef31890d40a7372d302c9b97d35d6)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location,unsigned radius_squared,UnitType type) const` 

#### `public inline bool `[`has_unit_at_location`](#classbc_1_1GameController_1a146611e078468c9681212bdd483254ee)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` 

#### `public inline `[`Unit`](#classbc_1_1Unit)` `[`sense_unit_at_location`](#classbc_1_1GameController_1a24141b15c52a94f469f26d3356f3f0ea)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` 

#### `public inline const `[`AsteroidPattern`](#classbc_1_1AsteroidPattern)` & `[`get_asteroid_pattern`](#classbc_1_1GameController_1aeeee9efb73ccbaab47c7fc9f00560607)`() const` 

#### `public inline const `[`OrbitPattern`](#classbc_1_1OrbitPattern)` & `[`get_orbit_pattern`](#classbc_1_1GameController_1aff7c9034b27f65de970dd175c0d594c2)`() const` 

#### `public inline unsigned `[`get_current_duration_of_flight`](#classbc_1_1GameController_1a360710a324bc0ad53186ba0946a1e661)`() const` 

#### `public inline std::vector< int > `[`get_team_array`](#classbc_1_1GameController_1ab95456005163781b3b885e6c0b40e95e)`(Planet planet) const` 

#### `public inline void `[`write_team_array`](#classbc_1_1GameController_1a3b14db43392828f3cfdf0dd900aa5826)`(unsigned index,int value) const` 

#### `public inline void `[`disintegrate_unit`](#classbc_1_1GameController_1af7960d09585c4619da3af1adeda1d7cd)`(unsigned id) const` 

#### `public inline bool `[`is_occupiable`](#classbc_1_1GameController_1aeb61fa8e57105ddb84783d2b65367050)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` 

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

#### `public inline bool `[`can_replicate`](#classbc_1_1GameController_1ad64e4084c46e641f50af96df6f454814)`(unsigned worker_id,Direction direction) const` 

#### `public inline void `[`replicate`](#classbc_1_1GameController_1a6938f4b7e8a073e3acae4133686e34e3)`(unsigned worker_id,Direction direction) const` 

#### `public inline bool `[`can_javelin`](#classbc_1_1GameController_1a77c53b59eb533f6e22ff079a25503d36)`(unsigned knight_id,unsigned target_id) const` 

#### `public inline bool `[`is_javelin_ready`](#classbc_1_1GameController_1ac1a328922aa28243c6fb064585ef715d)`(unsigned knight_id) const` 

#### `public inline void `[`javelin`](#classbc_1_1GameController_1a0d0df58c37778e08516a75429fb49bd8)`(unsigned knight_id,unsigned target_id) const` 

#### `public inline bool `[`can_begin_snipe`](#classbc_1_1GameController_1ac667c67be90d5d63d64a9a7b06a8fa83)`(unsigned ranger_id,const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` 

#### `public inline void `[`begin_snipe`](#classbc_1_1GameController_1ab6f5859ad3c52852b19029190034c1d5)`(unsigned ranger_id,const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` 

#### `public inline bool `[`can_begin_blink`](#classbc_1_1GameController_1a89638a73699fc08905d3d2422ca33c91)`(unsigned mage_id,const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` 

#### `public inline bool `[`is_blink_ready`](#classbc_1_1GameController_1a4b624a44370544aab3da812e36866646)`(unsigned mage_id) const` 

#### `public inline void `[`blink`](#classbc_1_1GameController_1a9d57ab7d8e1418c31437d70a122ad899)`(unsigned mage_id,const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` 

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

#### `public inline bool `[`can_launch_rocket`](#classbc_1_1GameController_1a84f5505f7190a068f610fc0ba5130c10)`(unsigned rocket_id,const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` 

#### `public inline void `[`launch_rocket`](#classbc_1_1GameController_1a8fb13057af998b2c1f0cb05cd2255964)`(unsigned rocket_id,const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` 

#### `public inline bool `[`is_over`](#classbc_1_1GameController_1ad1fd0e92f15833e3c10181161aa8b47b)`() const` 

#### `public inline Team `[`get_winning_team`](#classbc_1_1GameController_1af5d8f6949de85a9523edbf5a851ecfc7)`() const` 

# class `bc::Location` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`Location`](#classbc_1_1Location_1a43ba54b5f426dd24fd7fea853ce5c317)`()` | 
`public inline  `[`Location`](#classbc_1_1Location_1add423c24b5c085f94566eb11deedb5eb)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location)` | 
`public inline  `[`Location`](#classbc_1_1Location_1a92c667b813c9cfa4098cebaa302734c5)`(unsigned garrison_id)` | 
`public inline  explicit `[`Location`](#classbc_1_1Location_1afe850c4a72ca963384f83acbcdfb741c)`(bc_Location * location)` | 
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

#### `public inline  explicit `[`Location`](#classbc_1_1Location_1afe850c4a72ca963384f83acbcdfb741c)`(bc_Location * location)` 

#### `public inline bool `[`is_on_map`](#classbc_1_1Location_1a015b69417ffccdc52a83b564629969d2)`() const` 

#### `public inline bool `[`is_on_planet`](#classbc_1_1Location_1a55c0cfb8c723796f9b599f2f221c73ed)`(Planet planet) const` 

#### `public inline `[`MapLocation`](#classbc_1_1MapLocation)` `[`get_map_location`](#classbc_1_1Location_1a4f808381446b013ff22abe857069ad23)`() const` 

#### `public inline bool `[`is_in_garrison`](#classbc_1_1Location_1ab20057515771adf0f40f1a5a7adb9dee)`() const` 

#### `public inline int `[`get_structure`](#classbc_1_1Location_1aa5f04b7a6068504184c119bbfd9ea18f)`() const` 

#### `public inline bool `[`is_in_space`](#classbc_1_1Location_1aadb76f4fe212663cfe7f5c7a850bc12f)`() const` 

#### `public inline bool `[`is_adjacent_to`](#classbc_1_1Location_1a43d991642f7b8792cd28ae8a8d5a6a76)`(`[`Location`](#classbc_1_1Location)` location)` 

#### `public inline bool `[`is_within_range`](#classbc_1_1Location_1a1e32ea6b52c81b834b0c4588c451457f)`(unsigned range,`[`Location`](#classbc_1_1Location)` location)` 

# class `bc::MapLocation` 

Two-dimensional coordinates in the Battlecode world.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`MapLocation`](#classbc_1_1MapLocation_1ab313f647684390e3e78ec9fc26999305)`()` | Empty Constructor
`public inline  `[`MapLocation`](#classbc_1_1MapLocation_1aee5b70cc3589b43b42996e8f55c12e5b)`(Planet planet,int x,int y)` | Constructor 
`public inline  `[`MapLocation`](#classbc_1_1MapLocation_1a0cc7e8519db71c6ccf462bb498b67d50)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location)` | 
`public  `[`MapLocation`](#classbc_1_1MapLocation_1a5c268ca25f4def44aae94dc6336f2198)`(`[`MapLocation`](#classbc_1_1MapLocation)` &&) = default` | 
`public inline `[`MapLocation`](#classbc_1_1MapLocation)` & `[`operator=`](#classbc_1_1MapLocation_1a309cf8e4b945567f8f01e2f22ed2eac1)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location)` | Assignment operator (deep copy) 
`public `[`MapLocation`](#classbc_1_1MapLocation)` & `[`operator=`](#classbc_1_1MapLocation_1a3dbc68b4dbb4248cf472fbc7ce543f81)`(`[`MapLocation`](#classbc_1_1MapLocation)` &&) = default` | 
`public inline Planet `[`get_planet`](#classbc_1_1MapLocation_1a985fd5880ada52a524857c01292eea54)`() const` | Returns the planet the MapLocation is at 
`public inline int `[`get_x`](#classbc_1_1MapLocation_1a3e06a1063a6d1215b05eb395ba3657f5)`() const` | Returns the x coordinate 
`public inline int `[`get_y`](#classbc_1_1MapLocation_1a06dbaa3ed5a43c024dfa5125c634a35c)`() const` | Returns the y coordinate 
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

Empty Constructor

#### `public inline  `[`MapLocation`](#classbc_1_1MapLocation_1aee5b70cc3589b43b42996e8f55c12e5b)`(Planet planet,int x,int y)` 

Constructor 
#### Parameters
* `planet` 

* `x` 

* `y`

#### `public inline  `[`MapLocation`](#classbc_1_1MapLocation_1a0cc7e8519db71c6ccf462bb498b67d50)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location)` 

#### `public  `[`MapLocation`](#classbc_1_1MapLocation_1a5c268ca25f4def44aae94dc6336f2198)`(`[`MapLocation`](#classbc_1_1MapLocation)` &&) = default` 

#### `public inline `[`MapLocation`](#classbc_1_1MapLocation)` & `[`operator=`](#classbc_1_1MapLocation_1a309cf8e4b945567f8f01e2f22ed2eac1)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location)` 

Assignment operator (deep copy) 
#### Parameters
* `map_location` 

#### Returns
the assigned MapLocation

#### `public `[`MapLocation`](#classbc_1_1MapLocation)` & `[`operator=`](#classbc_1_1MapLocation_1a3dbc68b4dbb4248cf472fbc7ce543f81)`(`[`MapLocation`](#classbc_1_1MapLocation)` &&) = default` 

#### `public inline Planet `[`get_planet`](#classbc_1_1MapLocation_1a985fd5880ada52a524857c01292eea54)`() const` 

Returns the planet the MapLocation is at 
#### Returns
the planet the MapLocation is at

#### `public inline int `[`get_x`](#classbc_1_1MapLocation_1a3e06a1063a6d1215b05eb395ba3657f5)`() const` 

Returns the x coordinate 
#### Returns
the x coordinate

#### `public inline int `[`get_y`](#classbc_1_1MapLocation_1a06dbaa3ed5a43c024dfa5125c634a35c)`() const` 

Returns the y coordinate 
#### Returns
the y coordinate

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
`public inline  `[`PlanetMap`](#classbc_1_1PlanetMap_1aa1c9c8d6d993752dfc24dc95928a62aa)`(const `[`PlanetMap`](#classbc_1_1PlanetMap)` & planet_map)` | 
`public  `[`PlanetMap`](#classbc_1_1PlanetMap_1a39c05f281670eba3cc25a01ad6e49efc)`(`[`PlanetMap`](#classbc_1_1PlanetMap)` && planet_map) = default` | 
`public inline `[`PlanetMap`](#classbc_1_1PlanetMap)` & `[`operator=`](#classbc_1_1PlanetMap_1a3b8d1607587e16b2d788e3694d381633)`(const `[`PlanetMap`](#classbc_1_1PlanetMap)` & planet_map)` | 
`public `[`PlanetMap`](#classbc_1_1PlanetMap)` & `[`operator=`](#classbc_1_1PlanetMap_1ab578ea09459d3a8019e836c42047d3c7)`(`[`PlanetMap`](#classbc_1_1PlanetMap)` && planet_map) = default` | 
`public inline Planet `[`get_planet`](#classbc_1_1PlanetMap_1ad4f666a39d7d1a67150562901e457a6f)`() const` | 
`public inline unsigned `[`get_height`](#classbc_1_1PlanetMap_1a0075bdf4c8363229047875317dc5ff35)`() const` | 
`public inline unsigned `[`get_width`](#classbc_1_1PlanetMap_1ae58125fd7979ac1f5ee215ac7785a572)`() const` | 
`public inline const std::vector< `[`Unit`](#classbc_1_1Unit)` > & `[`get_initial_units`](#classbc_1_1PlanetMap_1ae8f7ff10beed0194b6ce49ec8286a55f)`() const` | 
`public inline bool `[`is_on_map`](#classbc_1_1PlanetMap_1aeff5395b01ec946b0337e148fd33caec)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & location) const` | 
`public inline bool `[`is_passable_terrain_at`](#classbc_1_1PlanetMap_1a2b416adb3155fc7964cf570f20f97224)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` | 
`public inline unsigned `[`get_initial_karbonite_at`](#classbc_1_1PlanetMap_1a39d912a61d2668da5262e7f564c55234)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` | 
`public inline std::vector< std::vector< std::pair< bool, unsigned > > > `[`get_initial_map`](#classbc_1_1PlanetMap_1a63bdc1578d81eaf2a63b77755a49a3f4)`() const` | Get the initial map passable and karbonite values. This information is constant, so it's useful to have it since the beginning and never use the API for this.

## Members

#### `public inline  `[`PlanetMap`](#classbc_1_1PlanetMap_1adbb40a38be6b197ff711ed727c1d9ef4)`()` 

#### `public inline  `[`PlanetMap`](#classbc_1_1PlanetMap_1a3b970b469fc63b69d712425c2c6e534e)`(bc_PlanetMap * planet_map)` 

#### `public inline  `[`PlanetMap`](#classbc_1_1PlanetMap_1aa1c9c8d6d993752dfc24dc95928a62aa)`(const `[`PlanetMap`](#classbc_1_1PlanetMap)` & planet_map)` 

#### `public  `[`PlanetMap`](#classbc_1_1PlanetMap_1a39c05f281670eba3cc25a01ad6e49efc)`(`[`PlanetMap`](#classbc_1_1PlanetMap)` && planet_map) = default` 

#### `public inline `[`PlanetMap`](#classbc_1_1PlanetMap)` & `[`operator=`](#classbc_1_1PlanetMap_1a3b8d1607587e16b2d788e3694d381633)`(const `[`PlanetMap`](#classbc_1_1PlanetMap)` & planet_map)` 

#### `public `[`PlanetMap`](#classbc_1_1PlanetMap)` & `[`operator=`](#classbc_1_1PlanetMap_1ab578ea09459d3a8019e836c42047d3c7)`(`[`PlanetMap`](#classbc_1_1PlanetMap)` && planet_map) = default` 

#### `public inline Planet `[`get_planet`](#classbc_1_1PlanetMap_1ad4f666a39d7d1a67150562901e457a6f)`() const` 

#### `public inline unsigned `[`get_height`](#classbc_1_1PlanetMap_1a0075bdf4c8363229047875317dc5ff35)`() const` 

#### `public inline unsigned `[`get_width`](#classbc_1_1PlanetMap_1ae58125fd7979ac1f5ee215ac7785a572)`() const` 

#### `public inline const std::vector< `[`Unit`](#classbc_1_1Unit)` > & `[`get_initial_units`](#classbc_1_1PlanetMap_1ae8f7ff10beed0194b6ce49ec8286a55f)`() const` 

#### `public inline bool `[`is_on_map`](#classbc_1_1PlanetMap_1aeff5395b01ec946b0337e148fd33caec)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & location) const` 

#### `public inline bool `[`is_passable_terrain_at`](#classbc_1_1PlanetMap_1a2b416adb3155fc7964cf570f20f97224)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` 

#### `public inline unsigned `[`get_initial_karbonite_at`](#classbc_1_1PlanetMap_1a39d912a61d2668da5262e7f564c55234)`(const `[`MapLocation`](#classbc_1_1MapLocation)` & map_location) const` 

#### `public inline std::vector< std::vector< std::pair< bool, unsigned > > > `[`get_initial_map`](#classbc_1_1PlanetMap_1a63bdc1578d81eaf2a63b77755a49a3f4)`() const` 

Get the initial map passable and karbonite values. This information is constant, so it's useful to have it since the beginning and never use the API for this.

#### Returns
the matrix of pair (is passable cell, initial karbonite at cell)

# class `bc::ResearchInfo` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`ResearchInfo`](#classbc_1_1ResearchInfo_1a9f7f52e1e77bea859b19bb0978e0a8fa)`(bc_ResearchInfo * info)` | 
`public inline unsigned `[`max_level`](#classbc_1_1ResearchInfo_1a04105d849dafe3a3a73521508f5ab698)`(UnitType branch) const` | 
`public inline unsigned `[`cost_of`](#classbc_1_1ResearchInfo_1a118b912a25b2651d5d19df4ca2bbdd52)`(UnitType branch,unsigned level) const` | 
`public inline unsigned `[`get_level`](#classbc_1_1ResearchInfo_1a08af7a4f8594ffab04ac8c4040c742c4)`(UnitType branch) const` | 
`public inline std::vector< UnitType > `[`get_queue`](#classbc_1_1ResearchInfo_1a939db9bb1af916c07079143d45071aa8)`() const` | 
`public inline bool `[`has_next_in_queue`](#classbc_1_1ResearchInfo_1adaa6e9a78008146f11ffb75945b806b2)`() const` | 
`public inline UnitType `[`next_in_queue`](#classbc_1_1ResearchInfo_1af2730634f508ffe66a9e0779cc45a42d)`() const` | 
`public inline unsigned `[`rounds_left`](#classbc_1_1ResearchInfo_1a52e6329380f88b46425dc0ede5ad37f1)`() const` | 

## Members

#### `public inline  `[`ResearchInfo`](#classbc_1_1ResearchInfo_1a9f7f52e1e77bea859b19bb0978e0a8fa)`(bc_ResearchInfo * info)` 

#### `public inline unsigned `[`max_level`](#classbc_1_1ResearchInfo_1a04105d849dafe3a3a73521508f5ab698)`(UnitType branch) const` 

#### `public inline unsigned `[`cost_of`](#classbc_1_1ResearchInfo_1a118b912a25b2651d5d19df4ca2bbdd52)`(UnitType branch,unsigned level) const` 

#### `public inline unsigned `[`get_level`](#classbc_1_1ResearchInfo_1a08af7a4f8594ffab04ac8c4040c742c4)`(UnitType branch) const` 

#### `public inline std::vector< UnitType > `[`get_queue`](#classbc_1_1ResearchInfo_1a939db9bb1af916c07079143d45071aa8)`() const` 

#### `public inline bool `[`has_next_in_queue`](#classbc_1_1ResearchInfo_1adaa6e9a78008146f11ffb75945b806b2)`() const` 

#### `public inline UnitType `[`next_in_queue`](#classbc_1_1ResearchInfo_1af2730634f508ffe66a9e0779cc45a42d)`() const` 

#### `public inline unsigned `[`rounds_left`](#classbc_1_1ResearchInfo_1a52e6329380f88b46425dc0ede5ad37f1)`() const` 

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
`public inline  explicit `[`RocketLandingInfo`](#classbc_1_1RocketLandingInfo_1afc3c4a4358f025f2489b1240fccbc00a)`(bc_RocketLandingInfo * rocket_landing_info)` | 
`public inline std::vector< `[`RocketLanding`](#classbc_1_1RocketLanding)` > `[`get_landings_on_round`](#classbc_1_1RocketLandingInfo_1ada1ff7da67865d9fb919f2f974f1d724)`(unsigned round)` | 

## Members

#### `public inline  explicit `[`RocketLandingInfo`](#classbc_1_1RocketLandingInfo_1afc3c4a4358f025f2489b1240fccbc00a)`(bc_RocketLandingInfo * rocket_landing_info)` 

#### `public inline std::vector< `[`RocketLanding`](#classbc_1_1RocketLanding)` > `[`get_landings_on_round`](#classbc_1_1RocketLandingInfo_1ada1ff7da67865d9fb919f2f974f1d724)`(unsigned round)` 

# class `bc::Unit` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`Unit`](#classbc_1_1Unit_1a2d86e81119175536621b877217427cfe)`()` | 
`public inline  explicit `[`Unit`](#classbc_1_1Unit_1adc7c66deaef5289f43380c0c86d51e20)`(bc_Unit * unit)` | 
`public inline  `[`Unit`](#classbc_1_1Unit_1abbd01a2f8804a90592f98a8f2011123d)`(const `[`Unit`](#classbc_1_1Unit)` & unit)` | 
`public  `[`Unit`](#classbc_1_1Unit_1a14aa95eeb4962ababa2711c08cc34be2)`(`[`Unit`](#classbc_1_1Unit)` && unit) = default` | 
`public inline `[`Unit`](#classbc_1_1Unit)` & `[`operator=`](#classbc_1_1Unit_1a4ef7b8486af4cbb33688a4027015ee3c)`(const `[`Unit`](#classbc_1_1Unit)` & unit)` | 
`public `[`Unit`](#classbc_1_1Unit)` & `[`operator=`](#classbc_1_1Unit_1aba923e9334e75b65afe089e2af348c8f)`(`[`Unit`](#classbc_1_1Unit)` && unit) = default` | 
`public inline UnitType `[`get_unit_type`](#classbc_1_1Unit_1a2895d7f4687e1db8ad427a47ff709f5e)`() const` | 
`public inline Team `[`get_team`](#classbc_1_1Unit_1ac12f4a7ed90083f5e94276433dbf2fe1)`() const` | 
`public inline `[`Location`](#classbc_1_1Location)` `[`get_location`](#classbc_1_1Unit_1a6e02bd4fd491a7fdc698d2b64f485e37)`() const` | 
`public inline bool `[`is_on_map`](#classbc_1_1Unit_1ac852cfe09e6bb43a6e1bb5308ed77411)`() const` | 
`public inline `[`MapLocation`](#classbc_1_1MapLocation)` `[`get_map_location`](#classbc_1_1Unit_1ac9e3aa80ad698b62d7edb69e9d7c301f)`() const` | 
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

#### `public inline  `[`Unit`](#classbc_1_1Unit_1a2d86e81119175536621b877217427cfe)`()` 

#### `public inline  explicit `[`Unit`](#classbc_1_1Unit_1adc7c66deaef5289f43380c0c86d51e20)`(bc_Unit * unit)` 

#### `public inline  `[`Unit`](#classbc_1_1Unit_1abbd01a2f8804a90592f98a8f2011123d)`(const `[`Unit`](#classbc_1_1Unit)` & unit)` 

#### `public  `[`Unit`](#classbc_1_1Unit_1a14aa95eeb4962ababa2711c08cc34be2)`(`[`Unit`](#classbc_1_1Unit)` && unit) = default` 

#### `public inline `[`Unit`](#classbc_1_1Unit)` & `[`operator=`](#classbc_1_1Unit_1a4ef7b8486af4cbb33688a4027015ee3c)`(const `[`Unit`](#classbc_1_1Unit)` & unit)` 

#### `public `[`Unit`](#classbc_1_1Unit)` & `[`operator=`](#classbc_1_1Unit_1aba923e9334e75b65afe089e2af348c8f)`(`[`Unit`](#classbc_1_1Unit)` && unit) = default` 

#### `public inline UnitType `[`get_unit_type`](#classbc_1_1Unit_1a2895d7f4687e1db8ad427a47ff709f5e)`() const` 

#### `public inline Team `[`get_team`](#classbc_1_1Unit_1ac12f4a7ed90083f5e94276433dbf2fe1)`() const` 

#### `public inline `[`Location`](#classbc_1_1Location)` `[`get_location`](#classbc_1_1Unit_1a6e02bd4fd491a7fdc698d2b64f485e37)`() const` 

#### `public inline bool `[`is_on_map`](#classbc_1_1Unit_1ac852cfe09e6bb43a6e1bb5308ed77411)`() const` 

#### `public inline `[`MapLocation`](#classbc_1_1MapLocation)` `[`get_map_location`](#classbc_1_1Unit_1ac9e3aa80ad698b62d7edb69e9d7c301f)`() const` 

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