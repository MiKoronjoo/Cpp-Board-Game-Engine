//
// Created by hassan on 1/18/19.
//

#include "../engine/BoardGameEngine.h"
#include "MineSweeper.h"

int main() {
    MineSweeper game("Player1", "Player2", 8, 7, 15);
    game.start();

    return 0;
}
