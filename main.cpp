#include <iostream>
#include "objects/Dice.h"

int main() {
    std::cout << "Hello world!!" << std::endl;
    Dice<6> d;
    std::cout << d.roll() << std::endl;

    return 0;
}
