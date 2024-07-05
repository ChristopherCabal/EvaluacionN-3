#include "enemy.h"

// Constructor initializing HP and DMG to 0
enemy::enemy() : HP(0), DMG(0) {}

// Virtual destructor
enemy::~enemy() {}

// Setter for the HP attribute
void enemy::set_HP(int hp) {
    HP = hp;
}

// Setter for the DMG attribute
void enemy::set_DMG(int dmg) {
    DMG = dmg;
}

// Getter for the HP attribute
int enemy::get_HP() const {
    return HP;
}

// Getter for the DMG attribute
int enemy::get_DMG() const {
    return DMG;
}
