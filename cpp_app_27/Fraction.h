#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction();
    Fraction(int num, int denom);

    int getNumerator() const;
    int getDenominator() const;
    void setNumerator(int num);
    void setDenominator(int denom);

    static Fraction add(const Fraction& a, const Fraction& b);
    static Fraction subtract(const Fraction& a, const Fraction& b);
    static Fraction multiply(const Fraction& a, const Fraction& b);
    static Fraction divide(const Fraction& a, const Fraction& b);

    void simplify();

    void display() const;

    static Fraction inputFraction();
};

#endif 
