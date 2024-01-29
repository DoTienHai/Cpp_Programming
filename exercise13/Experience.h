#ifndef EXPERIENCE_H
#define EXPERIENCE_H
#include <iostream>
#include "Employee.h"
using namespace std;

class Experience : public Employee
{
private:
    /* data */
    int expInYear;
    string proSkill;

public:
    Experience();
    Experience(const string &id, const string &fullName, const unsigned int &birthDay, const string &phone,
               const string &email, EMPLOYEE_TYPE employeeType,
               const int &expInYear, const string &proSkill);
    ~Experience();

    // Getter methods for Experience class
    int getExpInYear() const;
    string getProSkill() const;

    // Setter methods for Experience class
    void setExpInYear(const int &expInYear);
    void setProSkill(const string &proSkill);

    void showMe();
};

#endif // !EXPERIENCE_h