cmake_minimum_required(VERSION 3.12)
project(Cpp_Board_Game_Engine)

set(CMAKE_CXX_STANDARD 14)

add_executable(Cpp_Board_Game_Engine
        engine/objects/BoardGameObject.cpp
        engine/exceptions/BoardGameException.cpp
        engine/exceptions/InvalidMovementException.cpp
        engine/objects/Cell.cpp
        engine/objects/Board.cpp
        engine/objects/CardType.cpp
        engine/objects/Card.cpp
        engine/Clock.cpp
        engine/objects/Dice.cpp
        engine/Game.cpp
        engine/objects/PieceType.cpp
        engine/objects/PieceCoordinates.cpp
        engine/objects/Piece.cpp
        engine/Player.cpp
        engine/Movement.cpp
        main.cpp)
