#include <utility>

//
// Created by hassan on 1/1/19.
//

#include "Player.h"

Player::Player() = default;

Player::Player(std::string name) : name(std::move(name)) {}

Player::Player(std::string name, PieceType piece_type) : name(std::move(name)), piece_type(piece_type) {}
