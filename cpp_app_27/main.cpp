#include "Fraction.h"
#include <iostream>

int main() {
    Fraction fraction1(1, 2);
    Fraction fraction2(1, 5);

    fraction1.display();
    fraction2.display();

    fraction1.add(fraction2);
    std::cout << "After addition: ";
    fraction1.display();

    fraction1.subtract(fraction2);
    std::cout << "After subtraction: ";
    fraction1.display();

    fraction1.multiply(fraction2);
    std::cout << "After multiplication: ";
    fraction1.display();

    fraction1.divide(fraction2);
    std::cout << "After division: ";
    fraction1.display();

    std::cout << "Instance count: " << Fraction::getInstanceCount() << std::endl;

    return 0;
}
