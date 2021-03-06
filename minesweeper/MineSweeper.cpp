#include <utility>

//
// Created by hassan on 1/18/19.
//

#include <iostream>
#include "MineSweeper.h"
#include "../engine/exceptions/BoardGameException.h"


void MineSweeper::start() {
    int x, y;
    int player_index = 0;
    std::vector<int> found_mines;
    found_mines.push_back(0);
    found_mines.push_back(0);
    while (true) {
        _board->show();
        std::cout << _players[player_index].name << "'s turn: ";
        try {
            std::cin >> x >> y;
            bool find = _board->choose_cell(x, y);
            if (find) {
                //std::cout << ((MSPieceType *) _players[player_index].piece_type)->getColor() << std::endl;
                _board->_board[x][y].label = ((MSPieceType *) _players[player_index].piece_type)->getColor();
                found_mines[player_index]++;
            } else {
                player_index++;
                player_index %= 2;
            }
        } catch (BoardGameException &ex) {
            std::cout << "This cell is disabled!!\nTry again\n";
        }
        std::cout << ((MSBoard *) _board)->get_mines() / 2 << "  woooow\n";
        if (found_mines[player_index] >= ((MSBoard *) _board)->get_mines() / 2 + 1) {
            _board->show();
            std::cout << _players[player_index].name << " wins!! :)" << std::endl;
            break;
        }
    }
}

MineSweeper::MineSweeper(std::string palyer1_name, std::string palyer2_name, unsigned int length, unsigned int width,
                         unsigned int mines) {
    if (mines >= length * width)
        throw BoardGameException();  // TODO: Define InvalidNumberOfMinesException

    if (not(mines % 2))
        mines++;

    _board = new MSBoard(length, width, mines);
    _players.emplace_back(palyer1_name, new MSPieceType(" R "));
    _players.emplace_back(palyer2_name, new MSPieceType(" B "));

}

MineSweeper::~MineSweeper() {
    delete _board;
}

MSPieceType::MSPieceType(std::string color) : color(std::move(color)) {}

const std::string &MSPieceType::getColor() const {
    return color;
}

bool has_this(std::vector<std::pair<int, int>> &vec, int x, int y) {
    for (auto iter:vec) {
        if (iter.first == x and iter.second == y)
            return true;
    }
    return false;
}

int MSBoard::mine_counter(int x, int y) {
    int mines = 0;
    if (is_valid(x - 1, y) and _board[x - 1][y].is_empty())
        mines++;
    if (is_valid(x, y - 1) and _board[x][y - 1].is_empty())
        mines++;
    if (is_valid(x + 1, y) and _board[x + 1][y].is_empty())
        mines++;
    if (is_valid(x, y + 1) and _board[x][y + 1].is_empty())
        mines++;
    if (is_valid(x - 1, y - 1) and _board[x - 1][y - 1].is_empty())
        mines++;
    if (is_valid(x + 1, y + 1) and _board[x + 1][y + 1].is_empty())
        mines++;
    if (is_valid(x - 1, y + 1) and _board[x - 1][y + 1].is_empty())
        mines++;
    if (is_valid(x + 1, y - 1) and _board[x + 1][y - 1].is_empty())
        mines++;
    return mines;
}

MSBoard::MSBoard(int length, int width, unsigned int mines) {
    _length = length;
    _width = width;
    _mines = mines;
    srand(static_cast<unsigned int>(time(nullptr)));
    std::vector<std::pair<int, int>> empty_cells;
    empty_cells.reserve(static_cast<unsigned long>(mines));
    while (empty_cells.size() != mines) {
        int x = rand() % length;
        int y = rand() % width;
        if (not has_this(empty_cells, x, y))
            empty_cells.emplace_back(x, y);
    }

    _board.reserve(static_cast<unsigned long>(length));
    for (int i = 0; i < length; i++) {
        _board[i].reserve(static_cast<unsigned long>(width));
    }

    for (int i = 0; i < length; i++) {
        std::vector<Cell> temp;
        for (int j = 0; j < width; ++j) {
            if (has_this(empty_cells, i, j))
                temp.emplace_back(i, j, ENABLED, EMPTY);

            else
                temp.emplace_back(i, j, ENABLED, FULL);

        }
        _board.push_back(temp);
    }

    for (int i = 0; i < _length; i++) {
        for (int j = 0; j < _width; j++) {
            if (not _board[i][j].is_empty()) {
                _board[i][j].label = " " + std::to_string(mine_counter(i, j)) + " ";
            } else
                _board[i][j].label = " M ";
        }
        std::cout << std::endl;
    }

}

void MSBoard::show() {
    for (int i = 0; i < _length; i++) {
        for (int j = 0; j < _width; j++) {
            if (_board[i][j].is_disabled())
                std::cout << _board[i][j].label;
            else
                std::cout << " ? ";
        }
        std::cout << std::endl;
    }
}

bool MSBoard::choose_cell(int x, int y) {
    if (not is_valid(x, y))
        throw BoardGameException();

    if (_board[x][y].is_disabled())
        throw BoardGameException(); // TODO: Define DisabledCellException

    if (_board[x][y].is_empty()) { // find bomb
        _board[x][y].set_type(CellType::DISABLED);
        return true;
    }
    open_map(x, y);
    return false;
}

void MSBoard::open_map(int x, int y) {
    _board[x][y].set_type(CellType::DISABLED);
    if (_board[x][y].label == " 0 ") {

        if (is_valid(x - 1, y) and not _board[x - 1][y].is_disabled())
            open_map(x - 1, y);

        if (is_valid(x, y - 1) and not _board[x][y - 1].is_disabled())
            open_map(x, y - 1);

        if (is_valid(x + 1, y) and not _board[x + 1][y].is_disabled())
            open_map(x + 1, y);

        if (is_valid(x, y + 1) and not _board[x][y + 1].is_disabled())
            open_map(x, y + 1);

        if (is_valid(x - 1, y - 1) and not _board[x - 1][y - 1].is_disabled())
            open_map(x - 1, y - 1);

        if (is_valid(x - 1, y + 1) and not _board[x - 1][y + 1].is_disabled())
            open_map(x - 1, y + 1);

        if (is_valid(x + 1, y - 1) and not _board[x + 1][y - 1].is_disabled())
            open_map(x + 1, y - 1);

        if (is_valid(x + 1, y + 1) and not _board[x + 1][y + 1].is_disabled())
            open_map(x + 1, y + 1);
    }
}

bool MSBoard::is_valid(int x, int y) {
    return x >= 0 and y >= 0 and x < _length and y < _width;
}

unsigned int MSBoard::get_mines() const {
    return _mines;
}

MSPlayer::MSPlayer() : mines(0) {}
