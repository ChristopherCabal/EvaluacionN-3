#ifndef DEMON_H
#define DEMON_H

#include "enemy.h"

class Demon : public enemy {
public:
    Demon();
    void print() const override;
};

#endif // DEMON_H
