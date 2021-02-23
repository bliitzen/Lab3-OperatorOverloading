#include "calcComplex.h"
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

//
// Constructors
//
CalcComplex::CalcComplex()
{
    if (isCartesian)
    {
        rad = sqrt(pow(x, 2) + pow(y, 2));
    }
    else
    {
        x = rad * cos(theta);
        y = rad * sin(theta);
    }
}

CalcComplex::CalcComplex(double isX, double isY)
{
    if (isCartesian)
    {
        x = isX;
        y = isY;
        rad = sqrt(pow(x, 2) + pow(y, 2));
        theta = atan(y / x);
    }
    else
    {
        rad = isX;
        theta = isY;
        x = rad * cos(theta);
        y = rad * sin(theta);
    }
}

CalcComplex::CalcComplex(double isX, double isY, bool isCart)
{
    isCartesian = isCart;
    if (isCartesian)
    {
        x = isX;
        y = isY;
        rad = sqrt(pow(x, 2) + pow(y, 2));
        theta = atan(y / x);
    }
    else
    {
        rad = isX;
        theta = isY;
        x = rad * cos(theta);
        y = rad * sin(theta);
    }
}

//
// Getter functions
//
double CalcComplex::getX()
{
    return x;
}

double CalcComplex::getY()
{
    return y;
}

double CalcComplex::getRad()
{
    return rad;
}

double CalcComplex::getTheta()
{
    return theta;
}

bool CalcComplex::getIsCartesian()
{
    return isCartesian;
}

//
// Setter functions
//
void CalcComplex::setX(double isX)
{
    x = isX;
}

void CalcComplex::setY(double isY)
{
    y = isY;
}

void CalcComplex::setRad(double isRad)
{
    rad = isRad;
}

void CalcComplex::setTheta(double isTheta)
{
    theta = isTheta;
}

void CalcComplex::setIsCartesian(bool isCart)
{
    isCartesian = isCart;
}

//
// Print functions
//
void CalcComplex::printCartesian()
{
    cout << "Cartesian Numbers: (" << x << "," << y << ")" << endl;
    return;
}

void CalcComplex::printPolar()
{
    cout << "Polar Numbers: (" << rad << "," << theta << ")" << endl;
    return;
}