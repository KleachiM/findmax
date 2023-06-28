#include <iostream>
#include <list>
#include "FindMax.h"

int main()
{
    std::list<double> vD{1.0, 2.0, 3.0};
    Less<double> less;
    vD.sort(less);
}
