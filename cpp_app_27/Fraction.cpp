#include "Fraction.h"

int Fraction::instanceCount = 0; 

Fraction::Fraction() : numerator(0), denominator(1) {
    instanceCount++;
}

Fraction::Fraction(int num, int den) : numerator(num), denominator(den) {
    instanceCount++;
}

void Fraction::setFraction(int num, int den) {
    numerator = num;
    denominator = den;
}

void Fraction::add(const Fraction& other) {
    numerator = numerator * other.denominator + other.numerator * denominator;
    denominator = denominator * other.denominator;
}

void Fraction::subtract(const Fraction& other) {
    numerator = numerator * other.denominator - other.numerator * denominator;
    denominator = denominator * other.denominator;
}

void Fraction::multiply(const Fraction& other) {
    numerator = numerator * other.numerator;
    denominator = denominator * other.denominator;
}

void Fraction::divide(const Fraction& other) {
    numerator = numerator * other.denominator;
    denominator = denominator * other.numerator;
}

void Fraction::display() const {
    std::cout << numerator << "/" << denominator << std::endl;
}

int Fraction::getInstanceCount() {
    return instanceCount;
}
