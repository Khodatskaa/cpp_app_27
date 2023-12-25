#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

class Fraction {
private:
    static int instanceCount; 
    int numerator;
    int denominator;

public:
    Fraction();
    Fraction(int num, int den);
    void setFraction(int num, int den);
    void add(const Fraction& other);
    void subtract(const Fraction& other);
    void multiply(const Fraction& other);
    void divide(const Fraction& other);
    void display() const;
    static int getInstanceCount(); 
};

#endif 
