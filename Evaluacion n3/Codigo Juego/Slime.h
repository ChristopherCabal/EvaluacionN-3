#ifndef SLIME_H
#define SLIME_H

#include "enemy.h"

class Slime : public enemy {
public:
    Slime();
    void print() const override;
};

#endif // SLIME_H
