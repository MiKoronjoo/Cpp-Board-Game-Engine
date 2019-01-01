//
// Created by hassan on 1/1/19.
//

#ifndef CPP_BOARD_GAME_ENGINE_PIECE_H
#define CPP_BOARD_GAME_ENGINE_PIECE_H

#include "BoardGameObject.h"
#include "PieceType.h"
#include "PieceCoordinates.h"

class Piece: public BoardGameObject {
private:
    PieceType _type;
    PieceCoordinates _Coordinates;

public:
    explicit Piece(const PieceType &type);

};


#endif //CPP_BOARD_GAME_ENGINE_PIECE_H
