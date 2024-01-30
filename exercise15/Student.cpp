#include "Student.h"

Student::Student()
{
}

Student::Student(const string &newID, const STUDENT_TYPE &newType, const string &newFullname, const string &newBirthday, const string &newStartYear, const float &newGradeInput)
    : ID(newID), type(newType), fullname(newFullname), birthday(newBirthday), startYear(newStartYear), gradeInput(newGradeInput)
{
}

Student::~Student()
{
}

string Student::getID() const
{
    return ID;
}

void Student::setID(const string &newID)
{
    ID = newID;
}

STUDENT_TYPE Student::getType() const
{
    return type;
}
void Student::setType(const STUDENT_TYPE &newType)
{
    type = newType;
}

string Student::getFullname() const
{
    return fullname;
}

void Student::setFullname(const string &newFullname)
{
    fullname = newFullname;
}

string Student::getBirthday() const
{
    return birthday;
}

void Student::setBirthday(const string &newBirthday)
{
    birthday = newBirthday;
}

string Student::getStartYear() const
{
    return startYear;
}

void Student::setStartYear(const string &newStartYear)
{
    startYear = newStartYear;
}

float Student::getGradeInput() const
{
    return gradeInput;
}
void Student::setGradeInput(const float &newGradeInput)
{
    gradeInput = newGradeInput;
}

vector<Result> Student::getResultTable() const
{
    return resultTable;
}
Result Student::getTheBestSemester(){
    float max = 0;
    Result ret;
    for(Result semester: resultTable){
        if(semester.getGPA() > max){
            max = semester.getGPA();
            ret = semester;
        }
    }
    return ret;
}

void Student::setResultTable(const vector<Result> &newResultTable)
{
    resultTable = newResultTable;
}

void Student::show()
{
    cout << "ID: " << ID << "\t"
         << "Type: " << ((type == REGULAR_STUDENT) ? "Regular" : "In-service")
         << "\tStart year: " << startYear << endl;
    cout << "Fullname: " << fullname << "\t"
         << "Birthday: " << birthday << endl;
    cout << "Grade input: " << gradeInput << endl;
    cout << "Result: "
         << "\t"
         << "Semester"
         << "\t"
         << "GPA" << endl;

    for (Result result : resultTable)
    {
        cout << "\t\t" << result.getSemester() << "\t\t" << result.getGPA() << endl;
    }
}