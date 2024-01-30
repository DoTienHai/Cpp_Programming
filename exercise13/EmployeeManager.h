#ifndef EMPLOYEE_MANAGER_H
#define EMPLOYEE_MANAGER_H
#include <iostream>
#include <vector>
#include "Experience.h"
#include "Fresher.h"
#include "Intern.h"
using namespace std;


class EmployeeManager
{
private:
    /* data */
    vector<Employee*> employeeTable;
public:
    EmployeeManager(/* args */);
    ~EmployeeManager();

    void addEmployee();
    void updateEmployee();
    void deleteEmploy();
    void searchEmployee();
    vector<Employee*>::iterator searchEmployee(string ID);

    void display();
    void displayExperience();
    void displayFresher();
    void displayIntern();  
};




#endif // !EMPLOYEE_MANAGER_H