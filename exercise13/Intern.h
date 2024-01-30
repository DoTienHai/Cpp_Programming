#ifndef INTERN_H
#define INTERN_H
#include <iostream>
#include "Employee.h"
using namespace std;

class Intern : public Employee
{
private:
    /* data */
    string major;
    int semester;
    string university;

public:
    Intern();
    Intern(const string &id, const string &fullName, const string &birthDay,
           const string &phone, const string &email, EMPLOYEE_TYPE employeeType,
           const string &major, const int &semester,
           const string &university);
    ~Intern();

    // Getter methods for Intern class
    string getMajor() const;
    int getSemester() const;
    string getUniversity() const;

    // Setter methods for Intern class
    void setMajor(const string &major);
    void setSemester(const int &semester);
    void setUniversity(const string &university);

    void showMe();
};

#endif // !INTERN_H