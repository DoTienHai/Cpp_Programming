#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <vector>
#include "Certificate.h"
using namespace std;

enum EMPLOYEE_TYPE
{
    EXPERIENCE = 0,
    FRESHER = 1,
    INTERN = 2
};

class Employee
{
private:
    /* data */
    string ID;
    string fullName;
    unsigned int birthDay;
    string phone;
    string email;
    EMPLOYEE_TYPE employeeType;
    static int employeeCount;
    vector<Certificate> certifcated;

public:
    Employee(/* args */);
    Employee(const string &id, const string &fullName, const unsigned int &birthDay,
             const string &phone, const string &email, EMPLOYEE_TYPE employeeType);
    virtual ~Employee(){};

    // Getter methods
    string getID() const;
    string getFullName() const;
    unsigned int getBirthDay() const;
    string getPhone() const;
    string getEmail() const;
    EMPLOYEE_TYPE getEmployeeType() const;
    int getEmployeeCount() const;
    vector<Certificate> getCertificated();

    // Setter methods
    void setID(const string &id);
    void setFullName(const string &fullName);
    void setBirthDay(const unsigned int &birthDay);
    void setPhone(const string &phone);
    void setEmail(const string &email);
    void setEmployeeType(const EMPLOYEE_TYPE &type);
    void setEmployeeCount(const int &count);

    void showInfo();
    virtual void showMe() = 0;
};

#endif // !EMPLOYEE_H