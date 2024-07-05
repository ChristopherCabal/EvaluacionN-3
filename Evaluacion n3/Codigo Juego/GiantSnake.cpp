#include "GiantSnake.h"
#include <iostream>

GiantSnake::GiantSnake() {
    set_HP(150);
    set_DMG(20);
}

void GiantSnake::print() const {
    std::cout << "     /^\\/^\\" << std::endl;
    std::cout << "    _|__|  O|" << std::endl;
    std::cout << "\\/     /~     \\_/ \\" << std::endl;
    std::cout << " \\____|__________/  \\" << std::endl;
    std::cout << "        \\_______      \\" << std::endl;
    std::cout << "                `\\     \\                 \\" << std::endl;
    std::cout << "                  |     |                  \\" << std::endl;
    std::cout << "                 /      /                    \\" << std::endl;
    std::cout << "                /     /                       \\\\" << std::endl;
    std::cout << "              /      /                         \\ \\" << std::endl;
    std::cout << "             /     /                            \\  \\" << std::endl;
    std::cout << "           /     /             _----_            \\   \\" << std::endl;
    std::cout << "          /     /           _-~      ~-_         |   |" << std::endl;
    std::cout << "         (      (        _-~    _--_    ~-_     _/   |" << std::endl;
    std::cout << "          \\      ~-____-~    _-~    ~-_    ~-_-~    /" << std::endl;
    std::cout << "            ~-_           _-~          ~-_       _-~" << std::endl;
    std::cout << "               ~--______-~                ~-___-~" << std::endl;
}
