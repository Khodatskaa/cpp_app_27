#include "Fraction.h"
#include <iostream>

Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {
    if (denominator == 0) {
        std::cout << "Error: Denominator cannot be zero" << std::endl;
        denominator = 1;
    }
}

int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}

void Fraction::setNumerator(int num) {
    numerator = num;
}

void Fraction::setDenominator(int denom) {
    if (denom == 0) {
        std::cout << "Error: Denominator cannot be zero." << std::endl;
        return;
    }
    denominator = denom;
}

Fraction Fraction::add(const Fraction& a, const Fraction& b) {
    Fraction result;
    result.numerator = a.numerator * b.denominator + b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;
    result.simplify();
    return result;
}

Fraction Fraction::subtract(const Fraction& a, const Fraction& b) {
    Fraction result;
    result.numerator = a.numerator * b.denominator - b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;
    result.simplify();
    return result;
}

Fraction Fraction::multiply(const Fraction& a, const Fraction& b) {
    Fraction result;
    result.numerator = a.numerator * b.numerator;
    result.denominator = a.denominator * b.denominator;
    result.simplify();
    return result;
}

Fraction Fraction::divide(const Fraction& a, const Fraction& b) {
    if (b.numerator == 0) {
        std::cout << "Error: Cannot divide by zero" << std::endl;
        return Fraction(); 
    }
    Fraction result;
    result.numerator = a.numerator * b.denominator;
    result.denominator = a.denominator * b.numerator;
    result.simplify();
    return result;
}

void Fraction::simplify() {
	int gcd = 1;
	int smaller = (numerator < denominator) ? numerator : denominator;
    for (int i = 2; i <= smaller; i++) {
        if (numerator % i == 0 && denominator % i == 0) {
			gcd = i;
		}
	}
	numerator /= gcd;
	denominator /= gcd;
}


void Fraction::display() const {
    std::cout << numerator << "/" << denominator;
}

Fraction Fraction::inputFraction() {
    int num, denom;

    std::cout << "Enter numerator: ";
    std::cin >> num;

    std::cout << "Enter denominator: ";
    std::cin >> denom;

    return Fraction(num, denom);
}
