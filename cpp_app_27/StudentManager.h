#include "Student.h"
#include <iostream>

class StudentManager {
public:
    static void show_student(Student* p) {
        std::cout << "ID: ";
        std::cout << (p->getId() != 0 ? p->getId() : "Empty id") << std::endl;
        std::cout << "Name: ";
        std::cout << (!p->getName().empty() ? p->getName() : "Empty name") << std::endl;
        std::cout << "Date of birth: ";
        std::cout << (!p->getDateOfBirth().empty() ? p->getDateOfBirth() : "Empty date of birth") << std::endl;
        std::cout << "Phone: ";
        std::cout << (!p->getPhone().empty() ? p->getPhone() : "Empty phone") << std::endl;
        std::cout << "City: ";
        std::cout << (!p->getCity().empty() ? p->getCity() : "Empty city") << std::endl;
        std::cout << "Country: ";
        std::cout << (!p->getCountry().empty() ? p->getCountry() : "Empty country") << std::endl;
        std::cout << "University: ";
        std::cout << (!p->getUniversity().empty() ? p->getUniversity() : "Empty university") << std::endl;
        std::cout << "University city: ";
        std::cout << (!p->getUniversityCity().empty() ? p->getUniversityCity() : "Empty university city") << std::endl;
        std::cout << "University country: ";
        std::cout << (!p->getUniversityCountry().empty() ? p->getUniversityCountry() : "Empty university country") << std::endl;
    }
};