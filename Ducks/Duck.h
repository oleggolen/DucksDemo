#ifndef STRATEGY_PATTERN_DEMO_DUCK_H
#define STRATEGY_PATTERN_DEMO_DUCK_H


#include "../Behaviors/Fly/IFlyBehavior.h"
#include "../Behaviors/Fly/NoFly.h"

class Duck{
private:
    const IFlyBehavior* _flyBehavior;
protected:

    explicit Duck(const IFlyBehavior* flyBehavior = new NoFly());
public:
    virtual ~Duck();
    void Fly() const;

};


#endif
