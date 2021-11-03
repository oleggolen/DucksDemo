#ifndef STRATEGY_PATTERN_DEMO_IFLYBEHAVIOR_H
#define STRATEGY_PATTERN_DEMO_IFLYBEHAVIOR_H
class IFlyBehavior {
protected:
    IFlyBehavior();
public:
    virtual void Fly() const =0 ;
    virtual ~IFlyBehavior();
};
#endif
