#include <iostream>
#include “Rectangle.h”
#include “Triangle.h”
using namespace std;
int main() 
{
    Rectangle rect;
    Triangle trgl;

    Polygon* pPoly1 = &rect;
    Polygon* pPoly2 = &trgl;

    pPoly1->setValues(4,5);
    pPoly2->setValues(4,5);

    cout << pPoly1->Area() << '\n';
    cout << pPoly2->Area() << '\n';

 return 0;
}