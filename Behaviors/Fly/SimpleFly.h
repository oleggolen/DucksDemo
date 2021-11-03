#ifndef STRATEGY_PATTERN_DEMO_SIMPLE_FLY_H
#define STRATEGY_PATTERN_DEMO_SIMPLE_FLY_H


#include "IFlyBehavior.h"

class SimpleFly : public IFlyBehavior {
public:
    void Fly() const override;

};


#endif
