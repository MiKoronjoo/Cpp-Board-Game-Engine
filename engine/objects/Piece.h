//
// Created by hassan on 1/1/19.
//

#ifndef CPP_BOARD_GAME_ENGINE_PIECE_H
#define CPP_BOARD_GAME_ENGINE_PIECE_H

#include "BoardGameObject.h"
#include "PieceType.h"
#include "PieceCoordinates.h"
#include "../Player.h"

class Piece : public BoardGameObject {
protected:
    PieceType *_type;
    PieceCoordinates _Coordinates;
    Player *_player;

public:
    explicit Piece(PieceType *type, Player *player);
};


#endif //CPP_BOARD_GAME_ENGINE_PIECE_H
