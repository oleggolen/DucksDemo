cmake_minimum_required(VERSION 3.19)
project(StrategyPatternDemo)

set(CMAKE_CXX_STANDARD 14)

add_executable(StrategyPatternDemo main.cpp Ducks/Duck.cpp Ducks/Duck.h Ducks/SimpleDuck.cpp Ducks/SimpleDuck.h Ducks/WoodenDuck.cpp Ducks/WoodenDuck.h Ducks/GoldenDuck.cpp Ducks/GoldenDuck.h Ducks/RubberDuck.cpp Ducks/RubberDuck.h Behaviors/Fly/IFlyBehavior.cpp Behaviors/Fly/IFlyBehavior.h Behaviors/Fly/NoFly.cpp Behaviors/Fly/NoFly.h Behaviors/Fly/SimpleFly.cpp Behaviors/Fly/SimpleFly.h)