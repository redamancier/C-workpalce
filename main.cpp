#include <iostream>
#include "area.h"
#include <cmath>
using namespace std;

int main()
{
    cout<<"Area of point is"<<area()<<'\n';
    cout<<"Area of square is"<<area(1,1)<<'\n';
    cout<<"Area of circle is"<<area(0.5)<<'\n';
    cout<<"Area of trapezium is"<<area(1,0.5,1)<<'\n';
    cout<<"Area of triangle is"<<area(1,sqrt(1+0.5*0.5),sqrt(1+0.5*0.5),0)<<'\n';
    return 0;
}

