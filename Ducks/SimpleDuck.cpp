#include "SimpleDuck.h"
#include "../Behaviors/Fly/SimpleFly.h"
SimpleDuck::SimpleDuck() : Duck(new SimpleFly()) {

}
