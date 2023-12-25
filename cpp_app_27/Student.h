#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    static int studentCount; 
    std::string name;
    std::string dateOfBirth;
    std::string contactPhone;
    std::string city;
    std::string country;
    std::string institutionName;
    std::string institutionCity;
    std::string institutionCountry;
    int groupNumber;

public:
    Student();
    void inputStudentData();
    void displayStudentData() const;

    std::string getName() const;
    std::string getDateOfBirth() const;
    std::string getContactPhone() const;
    std::string getCity() const;
    std::string getCountry() const;
    std::string getUniversityName() const;
    std::string getUniversityCity() const;
    std::string getUniversityCountry() const;
    int getGroupNumber() const;

    static int getStudentCount();
};

#endif 

