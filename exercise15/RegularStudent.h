#ifndef REGULAR_STUDENT_H
#define REGULAR_STUDENT_H
#include <iostream>
#include "Student.h"
using namespace std;

class RegularStudent:public Student
{
private:
    /* data */
public:
    RegularStudent(/* args */);
    RegularStudent(const std::string& newID, const std::string& newFullname, const std::string& newBirthday, const std::string& newStartYear, const float & newGradeInput);
    ~RegularStudent();
};



#endif // !REGULAR_STUDENT_H