#ifndef TROLL_H
#define TROLL_H

#include "enemy.h"

class Troll : public enemy {
public:
    Troll();
    void print() const override;
};

#endif // TROLL_H
