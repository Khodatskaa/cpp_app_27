// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
private:
    static int studentCount;
    std::string* name;
    std::string dateOfBirth;
    std::string contactPhone;
    std::string city;
    std::string country;
    std::string universityName; 
    std::string universityCity; 
    std::string universityCountry; 
    int groupNumber;

public:
    Student();
    Student(const std::string& name, const std::string& dateOfBirth, const std::string& contactPhone,
        const std::string& city, const std::string& country, const std::string& universityName, 
        const std::string& universityCity, const std::string& universityCountry, int groupNumber);

    ~Student();

    inline void inputStudentData();
    inline void displayStudentData() const;

    inline std::string getName() const;
    inline std::string getDateOfBirth() const;
    inline std::string getContactPhone() const;
    inline std::string getCity() const;
    inline std::string getCountry() const;
    inline std::string getUniversityName() const;
    inline std::string getUniversityCity() const; 
    inline std::string getUniversityCountry() const; 
    inline int getGroupNumber() const;

    inline static int getStudentCount();
};

#endif 
