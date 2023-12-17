#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
using namespace std;

class Student {
private:
	int id;
	string name;
	string date_of_birth;
	string phone;
	string city;
	string country;
	string university;
	string university_city;
	string university_country;
public:
	int getId() const;
	std::string getName() const;
	std::string getDateOfBirth() const;
	std::string getPhone() const;
	std::string getCity() const;
	std::string getCountry() const;
	std::string getUniversity() const;
	std::string getUniversityCity() const;
	std::string getUniversityCountry() const;

	static void inputData();
	void outputData() const;
};

#endif
