#ifndef GIANTSNAKE_H
#define GIANTSNAKE_H

#include "enemy.h"

class GiantSnake : public enemy {
public:
    GiantSnake();
    void print() const override;
};

#endif // GIANTSNAKE_H
