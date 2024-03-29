#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
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
    string birthDay;
    string phone;
    string email;
    EMPLOYEE_TYPE employeeType;
    static int employeeCount;
    vector<Certificate> certificated;

public:
    Employee(/* args */);
    Employee(const string &id, const string &fullName, const string &birthDay,
             const string &phone, const string &email, EMPLOYEE_TYPE employeeType);
    virtual ~Employee(){};

    // Getter methods
    string getID() const;
    string getFullName() const;
    string getBirthDay() const;
    string getPhone() const;
    string getEmail() const;
    EMPLOYEE_TYPE getEmployeeType() const;
    int getEmployeeCount() const;
    vector<Certificate> getCertificated();

    // Setter methods
    void setID(const string &id);
    void setFullName(const string &fullName);
    void setBirthDay(const string &birthDay);
    void setPhone(const string &phone);
    void setEmail(const string &email);
    void setEmployeeType(const EMPLOYEE_TYPE &type);
    void setEmployeeCount(const int &count);

    void showInfo();
    virtual void showMe() = 0;
};


#endif // !EMPLOYEE_H