#include "Fraction.h"
#include <iostream>

int main() {
    Fraction fraction1 = Fraction::inputFraction();
    Fraction fraction2 = Fraction::inputFraction();

    Fraction sum = Fraction::add(fraction1, fraction2);
    Fraction difference = Fraction::subtract(fraction1, fraction2);
    Fraction product = Fraction::multiply(fraction1, fraction2);
    Fraction quotient = Fraction::divide(fraction1, fraction2);

    std::cout << "Fraction 1: ";
    fraction1.display();
    std::cout << std::endl;

    std::cout << "Fraction 2: ";
    fraction2.display();
    std::cout << std::endl;

    std::cout << "Sum: ";
    sum.display();
    std::cout << std::endl;

    std::cout << "Difference: ";
    difference.display();
    std::cout << std::endl;

    std::cout << "Product: ";
    product.display();
    std::cout << std::endl;

    std::cout << "Quotient: ";
    quotient.display();
    std::cout << std::endl;

    return 0;
}
