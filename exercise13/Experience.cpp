#include "Experience.h"

// Implementations of the getter and setter methods for Experience class
Experience::Experience() : expInYear(0)
{
    // Default constructor
}

Experience::Experience(const string &id, const string &fullName, const unsigned int &birthDay, const string &phone,
                       const string &email, EMPLOYEE_TYPE employeeType,
                       const int &expInYear, const string &proSkill)
    : Employee(id, fullName, birthDay, phone, email, employeeType), expInYear(expInYear), proSkill(proSkill)
{
    // Parameterized constructor
}

Experience::~Experience()
{
    // Destructor
}

int Experience::getExpInYear() const
{
    return expInYear;
}

string Experience::getProSkill() const
{
    return proSkill;
}

void Experience::setExpInYear(const int &expInYear)
{
    this->expInYear = expInYear;
}

void Experience::setProSkill(const string &proSkill)
{
    this->proSkill = proSkill;
}

void Experience::showMe()
{
    Employee::showInfo();
    cout << "ExpInYear: " << expInYear << endl;
    cout << "ProSkill: " << proSkill << endl;
}
