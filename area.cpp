#include "area.h"
#include <iostream>
#include <cmath>


double area(double radius)
{
    return PI*radius*radius;
}

double area(double a, double b)
{
    return a*b;
}

double area(double a, double b, double h)
{
    return (0.5*(a+b)*h);
}

double area(double a, double b, double c, int){
    double s = 0.5*(a+b+c);
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
