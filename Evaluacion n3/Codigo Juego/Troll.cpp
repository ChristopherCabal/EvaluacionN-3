#include "Troll.h"
#include <iostream>

Troll::Troll() {
    set_HP(120);
    set_DMG(30);
}

void Troll::print() const {
    std::cout << "        ,      ," << std::endl;
    std::cout << "       /(.-\"\"-.)\\" << std::endl;
    std::cout << "   |\\  \\/      \\/  /|" << std::endl;
    std::cout << "   | \\ / =.  .= \\ / |" << std::endl;
    std::cout << "   \\( \\   o\\/o   / )/" << std::endl;
    std::cout << "    \\_, '-/  \\-' ,_/" << std::endl;
    std::cout << "      /   \\__/   \\" << std::endl;
    std::cout << "      \\ \\__/\\__/ /" << std::endl;
    std::cout << "    ___\\ \\|--|/ /___" << std::endl;
    std::cout << "  /`    \\      /    `\\" << std::endl;
    std::cout << " /       '----'       \\" << std::endl;
}
