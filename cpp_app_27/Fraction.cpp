#include "Fraction.h"

int Fraction::instanceCount = 0;

Fraction::Fraction() : numerator(0), denominator(1) {
    instanceCount++;
}

Fraction::Fraction(int num, int den) : numerator(num), denominator(den) {
    instanceCount++;
}

inline void Fraction::setFraction(int num, int den) {
    numerator = num;
    denominator = den;
}

inline void Fraction::add(const Fraction& other) {
    numerator = numerator * other.denominator + other.numerator * denominator;
    denominator = denominator * other.denominator;
}

inline void Fraction::subtract(const Fraction& other) {
    numerator = numerator * other.denominator - other.numerator * denominator;
    denominator = denominator * other.denominator;
}

inline void Fraction::multiply(const Fraction& other) {
    numerator = numerator * other.numerator;
    denominator = denominator * other.denominator;
}

inline void Fraction::divide(const Fraction& other) {
    numerator = numerator * other.denominator;
    denominator = denominator * other.numerator;
}

inline void Fraction::display() const {
    std::cout << numerator << "/" << denominator << std::endl;
}

inline int Fraction::getInstanceCount() {
    return instanceCount;
}

Fraction::~Fraction() {
    instanceCount--;
}
