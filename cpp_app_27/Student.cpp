#include "Student.h"

int Student::studentCount = 0; 

Student::Student() : groupNumber(0) {
    studentCount++;
}

void Student::inputStudentData() {
    cout << "Enter student details:\n";
    cout << "Name: ";
    getline(std::cin, name);

    cout << "Date of Birth: ";
    getline(std::cin, dateOfBirth);

    cout << "Contact Phone: ";
    getline(std::cin, contactPhone);

    cout << "City: ";
    getline(std::cin, city);

    cout << "Country: ";
    getline(std::cin, country);

    cout << "University Name: ";
    getline(std::cin, institutionName);

    cout << "University City: ";
    getline(std::cin, institutionCity);

    cout << "University Country: ";
    getline(std::cin, institutionCountry);

    cout << "Group Number: ";
    cin >> groupNumber;
    cin.ignore(); 
}

void Student::displayStudentData() const {
    cout << "Student Details:\n";
    cout << "Name: " << name << "\n";
    cout << "Date of Birth: " << dateOfBirth << "\n";
    cout << "Contact Phone: " << contactPhone << "\n";
    cout << "City: " << city << "\n";
    cout << "Country: " << country << "\n";
    cout << "University Name: " << institutionName << "\n";
    cout << "University City: " << institutionCity << "\n";
    cout << "University Country: " << institutionCountry << "\n";
    cout << "Group Number: " << groupNumber << "\n";
}

string Student::getName() const
{
    return string();
}

string Student::getDateOfBirth() const
{
    return string();
}

string Student::getContactPhone() const
{
	return string();
}

string Student::getCity() const
{
	return string();
}

string Student::getCountry() const
{
	return string();
}

string Student::getUniversityName() const
{
	return string();
}

string Student::getUniversityCity() const
{
	return string();
}

string Student::getUniversityCountry() const
{
	return string();
}

int Student::getGroupNumber() const
{
	return 0;
}

int Student::getStudentCount() {
    return studentCount;
}

