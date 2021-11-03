#include "GoldenDuck.h"
#include "../Behaviors/Fly/SimpleFly.h"

GoldenDuck::GoldenDuck() : Duck(new SimpleFly()) {

}
