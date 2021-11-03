#include "Ducks/SimpleDuck.h"
#include "Ducks/GoldenDuck.h"
#include "Ducks/WoodenDuck.h"
#include "Ducks/RubberDuck.h"
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    auto simpleDuck = new SimpleDuck();
    auto goldenDuck = new GoldenDuck();
    auto woodenDuck = new WoodenDuck();
    auto rubberDuck = new RubberDuck();
    vector<Duck*> ducks;
    ducks.push_back(simpleDuck);
    ducks.push_back(goldenDuck);
    ducks.push_back(woodenDuck);
    ducks.push_back(rubberDuck);
    for(auto duck: ducks)
    {
       /* auto quackable = dynamic_cast<IQuackable*>(duck);
        if(quackable)
            quackable->Quack();
        auto swimmable = dynamic_cast<ISwimmable*>(duck);
        if(swimmable)
            swimmable->Swim();*/
        duck->Fly();
        cout << endl;
    }
    for(auto duck: ducks)
        delete duck;
    return 0;
}
