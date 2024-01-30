#include "Result.h"

Result::Result(/* args */) {}

Result::Result(const string &newSemester, float newGPA) : semester(newSemester), GPA(newGPA)
{
}
Result::~Result() {}

std::string Result::getSemester() const
{
    return semester;
}

void Result::setSemester(const std::string &newSemester)
{
    semester = newSemester;
}

float Result::getGPA() const
{
    return GPA;
}

void Result::setGPA(float newGPA)
{
    GPA = newGPA;
}

void Result::show()
{
    cout << "Semester " << semester << ": " << GPA << endl;
}