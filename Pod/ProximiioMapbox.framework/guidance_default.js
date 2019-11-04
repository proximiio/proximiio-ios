{
    
    /* ------------------------------------------------------------------------------------------ */
    /* Regular update */
    
    // Update turn instruction
update_turn: "In {{distanceInt}} {{distanceUnit}} {{direction}}.",
update_turn_left_hard: "turn hard left",
update_turn_left: "turn left",
update_turn_left_slight: "turn slight left",
update_turn_straight: "continue straight",
update_turn_right_slight: "turn slight right",
update_turn_right: "turn right",
update_turn_right_hard: "turn hard right",
update_turn_around: "turn around",
update_destination: "you will arrive at your destination",
    
    // Update level change instruction
update_levelchange_elevator: "In {{distanceInt}} {{distanceUnit}} use the elevator to level {{levelTo}}.",
update_levelchange_escalator: "In {{distanceInt}} {{distanceUnit}} use the escalator {{direction}}.",
update_levelchange_stairs: "In {{distanceInt}} {{distanceUnit}} use the stairs {{direction}}.",
    
    /* ------------------------------------------------------------------------------------------ */
    /* Immediate update */
    
    // Immediate instruction
immediate_turn_left_hard: "Turn hard left.",
immediate_turn_left: "Turn left.",
immediate_turn_left_slight: "Turn slight left.",
immediate_turn_straight: "Continue straight.",
immediate_turn_right_slight: "Turn slight right.",
immediate_turn_right: "Turn right.",
immediate_turn_right_hard: "Turn hard right.",
immediate_turn_around: "Turn around.",
    
    // Immediate level change instruction
immediate_levelchange_elevator: "Use the elevator to level {{levelTo}}.",
immediate_levelchange_escalator: "Use the escalator {{direction}}.",
immediate_levelchange_stairs: "Use the stairs {{direction}} to level {{levelTo}}.",
direction_up: "up",
direction_down: "down",
    
    /* ------------------------------------------------------------------------------------------ */
    /* Information about next step | used with Immediate instructions */
    
    // {{distanceInt}}, {{distanceDec}}, {{distanceUnit}}
next_step_destination: "Then you will reach your destination in {{distanceInt}} {{distanceUnit}}.",
    
    // {{distanceInt}}, {{distanceDec}}, {{distanceUnit}}, {{hasPassingLandmarks}}, {{hasTowardsLandmarks}}
    // {{#passingLandmarks}}: {{landmark}}, {{landmarkPosition}} {{isFirst}} {{isLast}} {{/passingLandmarks}}
    // {{#towardsLandmarks}}: {{landmark}}, {{isFirst}} {{isLast}} {{/towardsLandmarks}}
next_step_landmarks: "Then continue {{distanceInt}} {{distanceUnit}}{{#hasPassingLandmarks}} passing {{/hasPassingLandmarks}}{{#passingLandmarks}}{{landmark}} {{landmarkPosition}}{{#notLast}}, {{/notLast}}{{/passingLandmarks}}{{#hasTowardsLandmarks}} towards {{/hasTowardsLandmarks}}{{#towardsLandmarks}}{{#notFirst}}{{#notLast}}, {{/notLast}}{{#isLast}} and {{/isLast}}{{/notFirst}}{{landmark}}{{/towardsLandmarks}}.",
next_step_landmarks_landmark_position_left: "on the left", // used with {{#passingLandmarks}}
next_step_landmarks_landmark_position_right: "on the right", // used with {{#passingLandmarks}}
    
    // {{distanceInt}}, {{distanceDec}}, {{distanceUnit}}, {{levelchanger}}
next_step_levelchanger_elevator: "Then in {{distanceInt}} {{distanceUnit}} you will reach an elevator.", // possibly replace elevator with POI name?
next_step_levelchanger_escalator: "Then in {{distanceInt}} {{distanceUnit}} you will reach an escalator.", // --||--
next_step_levelchanger_stairs: "Then in {{distanceInt}} {{distanceUnit}} you will reach stairs.", // --||--
    
    // {{hours}}, {{degreesInt}}, {{degreesDec}}, {{levelchanger}}
next_step_leave_levelchanger_elevator: "Exit the elevator on {{hours}} o'clock.",
next_step_leave_levelchanger_escalator: "Exit the escalator on {{hours}} o'clock.",
next_step_leave_levelchanger_stairs: "Exit the elevator on {{hours}} o'clock.",
    
    /* ------------------------------------------------------------------------------------------ */
    /* Landmark passsing */
    
    // {{#hasLeftLandmarks}} {{#hasRightLandmarks}}
    // {{#leftLandmarks}}: {{landmark}} {{meta}} {{/leftLandmarks}}
    // {{#rightLandmarks}}: {{landmark}} {{meta}} {{/rightLandmarks}}
passing_landmark: "You are passing {{#leftLandmarks}}{{landmark}} {{meta}}{{/leftLandmarks}} {{#hasLeftLandmarks}}on your left{{#hasRightLandmarks}}, {{/hasRightLandmarks}}{{/hasLeftLandmarks}} {{#rightLandmarks}}{{landmark}} {{meta}}{{/rightLandmarks}} {{#hasRightLandmarks}}on your right{{/hasRightLandmarks}}.",
    
    /* ------------------------------------------------------------------------------------------ */
    /* Other */
    
    // Destination
destination_arriving: "You are arriving at the destination.",
destination_arrived: "You arrived at the destination.",
    
    // Special states
state_calculating: "Calculating.",
state_recalculating: "Recalculating.",
state_route_not_found: "Route not found.",
state_canceled: "Route canceled.",
    
    // Hazards
    // {{title}}
hazard: "Watch out for {{title}}.",
    
    // Segments
    // {{title}}
segment_enter: "You have entered {{title}}.",
segment_leave: "You are leaving {{title}}.",
    
    // Heading corrections
    // {{hours}}, {{degreesInt}}, {{degreesDec}}
heading_correction: "Correct your heading to {{hours}} o'clock",
heading_start: "Turn to {{hours}} o'clock.",
    
    // Level quantity strings
level: {
one: "level",
two: "levels",
few: "levels",
more: "levels",
other: "levels"
},
    
    // Units
    'units:meter': {
    one: "meter",
    two: "meters",
    few: "meters",
    more: "meters",
    other: "meters"
    }
    
}
