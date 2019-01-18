//
// Created by hassan on 1/1/19.
//

#ifndef CPP_BOARD_GAME_ENGINE_DICE_H
#define CPP_BOARD_GAME_ENGINE_DICE_H

#include <random>
#include "BoardGameObject.h"

template <unsigned int faces = 6>
class Dice: public BoardGameObject {
public:
    Dice();
    unsigned int roll();
};

template<unsigned int faces>
Dice<faces>::Dice() {
    srand(static_cast<unsigned int>(time(nullptr)));
}

template<unsigned int faces>
unsigned int Dice<faces>::roll() {
    return rand()%faces + 1;
}

#endif //CPP_BOARD_GAME_ENGINE_DICE_H
