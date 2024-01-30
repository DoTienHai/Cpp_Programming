#ifndef FRESHER_H
#define FRESHER_H
#include <iostream>
#include "Employee.h"
using namespace std;

enum GRADUATION_RANK
{
    EXCELLENT = 1,
    VERY_GOOG = 2,
    GOOD = 3,
    AVERAGE_GOOD = 4,
    ORDINARY = 5,
};

class Fresher : public Employee
{
private:
    /* data */
    unsigned int graduationDate;
    GRADUATION_RANK graduationRank;
    string education;

public:
    Fresher();
    Fresher(const string &id, const string &fullName, const string &birthDay,
            const string &phone, const string &email, EMPLOYEE_TYPE employeeType,
            const unsigned int &graduationDate,
            const GRADUATION_RANK &graduationRank, const string &education);
    ~Fresher();

    // Getter methods for Fresher class
    unsigned int getGraduationDate() const;
    GRADUATION_RANK getGraduationRank() const;
    string getEducation() const;

    // Setter methods for Fresher class
    void setGraduationDate(const unsigned int &graduationDate);
    void setGraduationRank(const GRADUATION_RANK &graduationRank);
    void setEducation(const string &education);

    void showMe();
};

#endif // !FRESHER_H