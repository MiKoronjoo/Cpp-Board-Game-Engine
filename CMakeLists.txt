cmake_minimum_required(VERSION 3.12)
project(Cpp_Board_Game_Engine)

set(CMAKE_CXX_STANDARD 14)

add_executable(Cpp_Board_Game_Engine
        Board.cpp
        BoardGameObject.cpp
        Card.cpp
        Dice.cpp
        Game.cpp
        Piece.cpp
        PieceType.cpp
        PieceCoordinates.cpp
        Player.cpp
        main.cpp)
