#include <iostream>
#include <iomanip>
#include "calcComplex.h"

using namespace std;

int main()
{
    CalcComplex complex;
    double x;
    double y;

    cout << "Enter cartesian numbers to make complex number: ";
    cin >> x >> y;
    CalcComplex(x, y);
    complex.printCartesian();

    return 0;
}