#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <iostream>
#include "Department.h"
using namespace std;

class University
{
private:
    /* data */
    vector<Department*> departmentTable;
public:
    University(/* args */);
    ~University();

    void addDepartment(Department *newDepartment);
    vector<Department*>::iterator searchDepartment(string name);
    void deleteDepartment(string name);

    unsigned int getRSTotal();
    unsigned int getISTotal();
    unsigned int getTotalStudent();

    void staticsYear();

    void showHighestGradeInputStudentList();
    void showISFollowPLace(string linkingPlace);
    void showGoodStudentInTheLastSemester(float x);
    void showTheBestStudent();

    void show();
};

#endif // !UNIVERSITY_H