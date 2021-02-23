#ifndef CALCCOMPLEX_H
#define CALCCOMPLEX_H

class CalcComplex
{
private:
    double x = 0;
    double y = 0;
    double rad = 0;
    double theta = 0;
    bool isCartesian = true;

public:
    CalcComplex();
    CalcComplex(double, double);
    CalcComplex(double, double, bool);

    double getX();
    double getY();
    double getRad();
    double getTheta();
    bool getIsCartesian();

    void setX(double);
    void setY(double);
    void setRad(double);
    void setTheta(double);
    void setIsCartesian(bool);

    void printCartesian();
    void printPolar();
};

#endif