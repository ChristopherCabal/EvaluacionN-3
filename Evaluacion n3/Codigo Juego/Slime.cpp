#include "Slime.h"
#include <iostream>

Slime::Slime() {
    set_HP(50);
    set_DMG(10);
}

void Slime::print() const {
    std::cout << "   _____   " << std::endl;
    std::cout << "  /     \\  " << std::endl;
    std::cout << " /       \\ " << std::endl;
    std::cout << "|  () ()  |" << std::endl;
    std::cout << " \\   ^   / " << std::endl;
    std::cout << "  \\_____/  " << std::endl;
}
