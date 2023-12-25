#include "Student.h"
using namespace std;

int main() {
    Student student1;
    Student student2;

    student1.inputStudentData();
    student2.inputStudentData();

    cout << "\nStudent 1 Information:\n";
    student1.displayStudentData();

    cout << "\nStudent 2 Information:\n";
    student2.displayStudentData();

    cout << "\nTotal Students: " << Student::getStudentCount() << endl;

    return 0;
}
