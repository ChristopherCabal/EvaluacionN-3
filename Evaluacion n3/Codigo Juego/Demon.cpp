#include "Demon.h"
#include <iostream>

Demon::Demon() {
    set_HP(200);
    set_DMG(40);
}

void Demon::print() const {
    std::cout << "      ,     \\    /      ," << std::endl;
    std::cout << "     / \\    )\\__/(     / \\" << std::endl;
    std::cout << "    /   \\  (_\\  /_)   /   \\" << std::endl;
    std::cout << "____/_____\\__\\@  @/___/_____\\____" << std::endl;
    std::cout << "|             |\\../|              |" << std::endl;
    std::cout << "|              \\VV/               |" << std::endl;
    std::cout << "|        Demonio Oscuro           |" << std::endl;
    std::cout << "|_________________________________|" << std::endl;
    std::cout << " |    /\\ /      \\\\       \\ /\\    |" << std::endl;
    std::cout << " |  /   V        ))       V   \\  |" << std::endl;
    std::cout << " |/     `       //        '     \\|" << std::endl;
    std::cout << " `              V                '" << std::endl;
}
