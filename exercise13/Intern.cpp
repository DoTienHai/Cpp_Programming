#include "Intern.h"

// Implementations of the getter and setter methods for Intern class
Intern::Intern() : semester(0)
{
    // Default constructor
}

Intern::Intern(const string &id, const string &fullName, const string &birthDay,
               const string &phone, const string &email, EMPLOYEE_TYPE employeeType,
               const string &major, const int &semester,
               const string &university)
    : Employee(id, fullName, birthDay, phone, email, employeeType),
      major(major), semester(semester), university(university)
{
    // Parameterized constructor
}

Intern::~Intern()
{
    // Destructor
}

string Intern::getMajor() const
{
    return major;
}

int Intern::getSemester() const
{
    return semester;
}

string Intern::getUniversity() const
{
    return university;
}

void Intern::setMajor(const string &major)
{
    this->major = major;
}

void Intern::setSemester(const int &semester)
{
    this->semester = semester;
}

void Intern::setUniversity(const string &university)
{
    this->university = university;
}

void Intern::showMe()
{
    Employee::showInfo();
    cout << "Major: " << major << endl;
    cout << "Semester: " << semester << endl;
    cout << "University: " << university << endl;
}