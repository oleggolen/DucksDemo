

#ifndef STRATEGY_PATTERN_DEMO_NOFLY_H
#define STRATEGY_PATTERN_DEMO_NOFLY_H


#include "IFlyBehavior.h"

class NoFly : public IFlyBehavior {
public:
    void Fly() const override;

};


#endif
