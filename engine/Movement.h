//
// Created by hassan on 1/18/19.
//

#ifndef CPP_BOARD_GAME_ENGINE_MOVEMENT_H
#define CPP_BOARD_GAME_ENGINE_MOVEMENT_H


#include "Player.h"

class Movement {
private:
    Movement *_previous_move;
    Player *_player;

public:
    explicit Movement(Player *player);
};


#endif //CPP_BOARD_GAME_ENGINE_MOVEMENT_H
