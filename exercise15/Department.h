#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <iostream>
#include <string>
#include <map>
#include "RegularStudent.h"
#include "InServiceStudent.h"
using namespace std;

class Department
{
private:
    /* data */
    string name;
    vector<Student *> studentTable;
    unsigned int RSCount = 0;
    unsigned int ISCount = 0;
    // bool flagChange;
public:
    Department(/* args */);
    Department(const string &newName);
    ~Department();

    void setName(const string &newName);
    string getName() const;

    unsigned int getRSCount();
    unsigned int getISCount();
    unsigned int getTotalStudent();
    vector<Student *>::iterator getHighestGradeInputStudent();
    vector<Student *>::iterator getTheBestStudent();

    map<string, int> staticsYear();
    
    vector<Student *> getIS();
    vector<Student *> getRS();
    vector<Student *> getStudentHasGPAGreaterThanXInLastSemester(float x);


    void addStudent(Student *newStudent);
    vector<Student *>::iterator searchStudent(string ID);
    void deleteStudent(string ID);

    // void updateStudent(string ID);

    void show();
};

#endif // !DEPARTMENT_H