#include "Student.h"

int Student::Student::getId() const {
	return id;
}

std::string Student::Student::getName() const {
	return name;
}

std::string Student::Student::getDateOfBirth() const {
	return date_of_birth;
}

std::string Student::Student::getPhone() const {
	return phone;
}

std::string Student::Student::getCity() const {
	return city;
}

std::string Student::Student::getCountry() const {
	return country;
}

std::string Student::Student::getUniversity() const {
	return university;
}

std::string Student::Student::getUniversityCity() const {
	return university_city;
}

std::string Student::Student::getUniversityCountry() const {
	return university_country;
}

void Student::inputData() {
	count++;
}

void Student::outputData() const
{
	count--;
}
