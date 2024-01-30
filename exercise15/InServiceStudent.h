#ifndef IN_SERVICE_STUDENT_H
#define IN_SERVICE_STUDENT_H
#include <iostream>
#include "Student.h"
using namespace std;

class InServiceStudent:public Student
{
private:
    /* data */
    string linkingPlace;
public:
    InServiceStudent(/* args */);
    InServiceStudent(const std::string& newID, const std::string& newFullname, const std::string& newBirthday, const std::string& newStartYear, const float &newGradeInput, const std::string& newLinkingPlace);
    ~InServiceStudent();

        std::string getLinkingPlace() const;
    void setLinkingPlace(const std::string& newLinkingPlace);
};



#endif // !IN_SERVICE_STUDENT_H