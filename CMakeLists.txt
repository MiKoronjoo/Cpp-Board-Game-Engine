cmake_minimum_required(VERSION 3.12)
project(Cpp_Board_Game_Engine)

set(CMAKE_CXX_STANDARD 14)

add_executable(Cpp_Board_Game_Engine
        objects/BoardGameObject.cpp
        exceptions/BoardGameException.cpp
        exceptions/InvalidMovementException.cpp
        objects/Cell.cpp
        objects/Board.cpp
        objects/CardType.cpp
        objects/Card.cpp
        Clock.cpp
        objects/Dice.cpp
        Game.cpp
        objects/PieceType.cpp
        objects/PieceCoordinates.cpp
        objects/Piece.cpp
        Player.cpp
        main.cpp)
