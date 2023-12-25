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

    inline void setFraction(int num, int den);
    inline void add(const Fraction& other);
    inline void subtract(const Fraction& other);
    inline void multiply(const Fraction& other);
    inline void divide(const Fraction& other);
    inline void display() const;

    inline static int getInstanceCount();

    ~Fraction();
};

#endif 
