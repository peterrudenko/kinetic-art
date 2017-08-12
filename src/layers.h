
/*
BITE    - - - - - - - - - + - - + + - - 12800
BALL    + + + + + + - - - - - - + - - - 4159
WALL    + + + + + + - - + - + - - - - + 34111
FLOOR   + + + + + + - - + - + + - + + - 27967
PIECES  - - - - - - - - - - - + - - - + 34816
OBJ     + + + + + + - - + - - - + - - - 4415
BONUS   - - - - - - - - - - + - - + - - 9216
PLRPTS  - - - - - - - - - - - - - - + - 16384
ROCKET  - - - - - - - - + + - - - - - - 768
INVIS   - - - - - - + + - - - - - - - -
DISABL  - - - - - - - - - - + - - - - -
*/


#define PLAYER_BITE_LAYER 12800
#define PLAYER_BALL_LAYER 4159
#define WALL_LAYER 34111
#define FLOOR_LAYER 27967
#define PIECE_LAYER 34816
#define OBJECT_LAYER 4415
#define BONUS_LAYER 9216
#define PLAYER_PARTS_LAYER 16384
#define ROCKET_LAYER 768
#define INVISIBLE_LAYER 192
#define DISABLED_LAYER 1024

#define PLAYER_BITE_CT 1
#define PLAYER_BALL_CT 2
#define WALL_CT 3
#define FLOOR_CT 4
#define PIECE_CT 5
#define OBJECT_CT 6
#define BONUS_CT 7
#define PLAYER_PARTS_CT 8
#define INVISIBLE_CT 9
#define DISABLED_CT 10
#define ROCKET_CT 11

#define HINTS_MAX 5

#define NORMAL_BALL_SPEED 444
#define HIGH_BALL_SPEED 590
#define LOW_BALL_SPEED 300

#define NORMAL_BITE_SPEED 7.9f
#define HIGH_BITE_SPEED 8.8f
#define LOW_BITE_SPEED 5.7f

#define BONUS_BALL_SPEED_UP 0
#define BONUS_BITE_SPEED_UP 1
#define BONUS_BALL_SPEED_DOWN 2
#define BONUS_BITE_SPEED_DOWN 3
#define BONUS_BITE_REVERSE_CONTROL 4
#define BONUS_BALL_JOINT 5
#define BONUS_ROCKET 6
#define BONUS_LIFE 7
#define BONUS_MONEY 8

#define NAME_LEN 30 /* do not change */

