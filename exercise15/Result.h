#ifndef RESULT_H
#define RESULT_H
#include <iostream>
using namespace std;

class Result
{
private:
    /* data */
    string semester;
    float GPA;

public:
    Result(/* args */);
    Result(const string &newSemester, float newGPA);
    ~Result();

    string getSemester() const;
    void setSemester(const string &newSemester);


    float getGPA() const;
    void setGPA(float newGPA);

    void show();
};


#endif // !RESULT_H