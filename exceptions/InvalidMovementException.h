//
// Created by hassan on 1/17/19.
//

#ifndef CPP_BOARD_GAME_ENGINE_INVALIDMOVEMENTEXCEPTION_H
#define CPP_BOARD_GAME_ENGINE_INVALIDMOVEMENTEXCEPTION_H

#include <string>
#include "BoardGameException.h"

class InvalidMovementException : public BoardGameException {
    const std::string message = "Invalid movement";
public:
    const char *what() const noexcept override {
        return message.c_str();
    }
};


#endif //CPP_BOARD_GAME_ENGINE_INVALIDMOVEMENTEXCEPTION_H
