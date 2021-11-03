#include "Duck.h"
Duck::~Duck() {
    delete _flyBehavior;
}

void Duck::Fly() const {
    if(_flyBehavior)
        _flyBehavior->Fly();
}

Duck::Duck(const IFlyBehavior *flyBehavior) : _flyBehavior(flyBehavior)
{

}
