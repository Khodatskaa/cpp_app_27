#include "Student.h"

int Student::studentCount = 0;

Student::Student() : name(nullptr), groupNumber(0) {
    studentCount++;
}

Student::Student(const std::string& name, const std::string& dateOfBirth, const std::string& contactPhone,
    const std::string& city, const std::string& country, const std::string& universityName,
    const std::string& universityCity, const std::string& universityCountry, int groupNumber)
    : dateOfBirth(dateOfBirth), contactPhone(contactPhone), city(city), country(country),
    universityName(universityName), universityCity(universityCity), universityCountry(universityCountry),
    groupNumber(groupNumber) {
    this->name = new std::string(name);
    studentCount++;
}

Student::~Student() {
    delete name;
    studentCount--;
}

void Student::inputStudentData() {
    std::cout << "Enter student name: ";
    std::cin >> *name;
    std::cout << "Enter group number: ";
    std::cin >> groupNumber;
}

void Student::displayStudentData() const {
    std::cout << "Student Name: " << *name << "\n"
        << "Date of Birth: " << dateOfBirth << "\n"
        << "Contact Phone: " << contactPhone << "\n"
        << "City: " << city << "\n"
        << "Country: " << country << "\n"
        << "University Name: " << universityName << "\n"
        << "University City: " << universityCity << "\n"
        << "University Country: " << universityCountry << "\n"
        << "Group Number: " << groupNumber << "\n";
}

std::string Student::getName() const {
    return *name;
}

std::string Student::getDateOfBirth() const {
    return dateOfBirth;
}

std::string Student::getContactPhone() const {
    return contactPhone;
}

std::string Student::getCity() const {
    return city;
}

std::string Student::getCountry() const {
    return country;
}

std::string Student::getUniversityName() const {
    return universityName;
}

std::string Student::getUniversityCity() const {
    return universityCity;
}

std::string Student::getUniversityCountry() const {
    return universityCountry;
}

int Student::getGroupNumber() const {
    return groupNumber;
}

int Student::getStudentCount() {
    return studentCount;
}
