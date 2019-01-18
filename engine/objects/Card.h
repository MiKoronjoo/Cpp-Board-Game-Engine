//
// Created by hassan on 1/1/19.
//

#ifndef CPP_BOARD_GAME_ENGINE_CARD_H
#define CPP_BOARD_GAME_ENGINE_CARD_H

#include "BoardGameObject.h"
#include "CardType.h"

class Card: public BoardGameObject {
protected:
    CardType _type;

public:
    explicit Card(const CardType &type);
};


#endif //CPP_BOARD_GAME_ENGINE_CARD_H
