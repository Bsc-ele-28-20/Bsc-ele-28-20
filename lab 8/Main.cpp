#include "Box.h"
#include <iostream>
using namespace std;

int main (){
    Box Box3;
    Box Box2;
    Box Box1;
    double volume = 0.0; 

    
    Box3.SetLength(6.0);
    Box3.SetBreadth(7.0);
    Box3.SetHeight(5.0);

    
    Box2.SetLength(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);

    
    volume = Box3.GetVolume();
    cout << "Volume of Box1 : " << volume << endl;

    
    volume = Box2.GetVolume();
    cout << "Volume of Box2 : " << volume << endl;

    
    Box1 = Box2 + Box3;

    
    volume = Box1.GetVolume();
    cout << "Volume of Box1 : " << volume <<endl;

    return 0;
}