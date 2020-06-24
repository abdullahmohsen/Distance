#include <iostream>
#include "Distance.h"
using namespace std;

int main()
{
    Distance d1, d2;
    d1.setCM(90);
    d1.setM(1);

    d2.setCM(20);
    d2.setM(1);

    Distance d3 = d1 + d2;
    d3.print();

    Distance d4 = ++d3;
    d4.print();

    return 0;
}