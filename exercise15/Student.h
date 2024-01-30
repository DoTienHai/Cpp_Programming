#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <vector>
#include "Result.h"
using namespace std;

enum STUDENT_TYPE {REGULAR_STUDENT = 0, IN_SERVICE_STUDENT = 1};

class Student
{
private:
    /* data */
    string ID;
    STUDENT_TYPE type;
    string fullname;
    string birthday;
    string startYear;
    float gradeInput;
    vector<Result> resultTable;

public:
    Student(/* args */);
    Student(const string &newID, const STUDENT_TYPE & newType, const string &newFullname, const string &newBirthday, const string &newStartYear, const float & newGradeInput);
    virtual ~Student();

    string getID() const;
    void setID(const string &newID);

    STUDENT_TYPE getType() const;
    void setType(const STUDENT_TYPE & newType);

    string getFullname() const;
    void setFullname(const string &newFullname);

    string getBirthday() const;
    void setBirthday(const string &newBirthday);

    string getStartYear() const;
    void setStartYear(const string &newStartYear);

    float getGradeInput() const;
    void setGradeInput(const float & newGradeInput);
    Result getTheBestSemester();

    vector<Result> getResultTable() const;
    void setResultTable(const vector<Result> &newResultTable);

    void show();
};

#endif // !STUDENT_H