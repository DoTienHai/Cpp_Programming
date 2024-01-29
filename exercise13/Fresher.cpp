
#include "Fresher.h"

// Implementations of the getter and setter methods for Fresher class
Fresher::Fresher() : graduationDate(0), graduationRank(EXCELLENT)
{
    // Default constructor
}

Fresher::Fresher(const string &id, const string &fullName, const unsigned int &birthDay,
                 const string &phone, const string &email, EMPLOYEE_TYPE employeeType, const unsigned int &graduationDate,
                 const GRADUATION_RANK &graduationRank, const string &education)
    : Employee(id, fullName, birthDay, phone, email, employeeType),
      graduationDate(graduationDate), graduationRank(graduationRank), education(education)
{
    // Parameterized constructor
}

Fresher::~Fresher()
{
    // Destructor
}

unsigned int Fresher::getGraduationDate() const
{
    return graduationDate;
}

GRADUATION_RANK Fresher::getGraduationRank() const
{
    return graduationRank;
}

string Fresher::getEducation() const
{
    return education;
}

void Fresher::setGraduationDate(const unsigned int &graduationDate)
{
    this->graduationDate = graduationDate;
}

void Fresher::setGraduationRank(const GRADUATION_RANK &graduationRank)
{
    this->graduationRank = graduationRank;
}

void Fresher::setEducation(const string &education)
{
    this->education = education;
}

void Fresher::showMe()
{
    Employee::showInfo();
    cout << "Graduation date: " << graduationDate << endl;
    cout << "Graduation Rank: " << graduationRank << endl;
    cout << "Education: " << education << endl;
}
