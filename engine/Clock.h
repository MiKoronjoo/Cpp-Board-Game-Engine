//
// Created by hassan on 1/3/19.
//

#ifndef CPP_BOARD_GAME_ENGINE_CLOCK_H
#define CPP_BOARD_GAME_ENGINE_CLOCK_H


class Clock {
private:
    unsigned int _time;

public:
    Clock();
    unsigned int get_time() const;

public:
    virtual void start() = 0;
    virtual void pause() = 0;
    virtual void reset() = 0;
};


#endif //CPP_BOARD_GAME_ENGINE_CLOCK_H
