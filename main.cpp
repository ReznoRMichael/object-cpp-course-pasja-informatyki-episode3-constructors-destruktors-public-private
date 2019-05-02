#include <iostream>
#include "event.h"

using namespace std;

int main()
{
    Event w1("Apokalipsa Zombie", 6, 8, 2045, 8, 15);
    Event w2("Apokalipsa Zombie");
    Event w3;

    w3.load();

    w1.show();
    w2.show();
    w3.show();

    return 0;
}
