#include "Employee.h"


// Implementations of the getter and setter methods
Employee::Employee() : birthDay(0), employeeType(EXPERIENCE)
{
    // Default constructor;
    employeeCount = 0;
    employeeCount++;
}
Employee::Employee(const string &id, const string &fullName, const unsigned int &birthDay,
                   const string &phone, const string &email, EMPLOYEE_TYPE employeeType)
    : ID(id), fullName(fullName), birthDay(birthDay), phone(phone), email(email),
      employeeType(employeeType)
{
    employeeCount = 0;
    employeeCount++;
}
string Employee::getID() const
{
    return ID;
}

string Employee::getFullName() const
{
    return fullName;
}

unsigned int Employee::getBirthDay() const
{
    return birthDay;
}

string Employee::getPhone() const
{
    return phone;
}

string Employee::getEmail() const
{
    return email;
}

EMPLOYEE_TYPE Employee::getEmployeeType() const
{
    return employeeType;
}

vector<Certificate> Employee::getCertificated()
{
    return certificated;
}

int Employee::getEmployeeCount() const
{
    return employeeCount;
}

void Employee::setID(const string &id)
{
    ID = id;
}

void Employee::setFullName(const string &fullName)
{
    this->fullName = fullName;
}

void Employee::setBirthDay(const unsigned int &birthDay)
{
    this->birthDay = birthDay;
}

void Employee::setPhone(const string &phone)
{
    this->phone = phone;
}

void Employee::setEmail(const string &email)
{
    this->email = email;
}

void Employee::setEmployeeType(const EMPLOYEE_TYPE &type)
{
    employeeType = type;
}

void Employee::setEmployeeCount(const int &count)
{
    employeeCount = count;
}

void Employee::showInfo()
{
    cout << "ID: " << ID << endl;
    cout << "Fullname: " << fullName << endl;
    cout << "Birthday: " << birthDay << endl;
    cout << "Phone: " << phone << endl;
    cout << "Email: " << email << endl;
    cout << "Employee type: " << employeeType << endl;
    cout << "Employee count: " << employeeCount << endl;
}