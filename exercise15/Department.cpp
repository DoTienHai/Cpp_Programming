#include "Department.h"

Department::Department(/* args */) {}
Department::Department(const string &newName) : name(newName) {}
Department::~Department()
{
    for (Student *student : studentTable)
    {
        delete student;
    }
    studentTable.clear();
}

void Department::setName(const string &newName)
{
    name = newName;
}
string Department::getName() const
{
    return name;
}

unsigned int Department::getRSCount()
{
    return RSCount;
}
unsigned int Department::getISCount()
{
    return ISCount;
}
unsigned int Department::getTotalStudent()
{
    return ISCount + RSCount;
}

vector<Student *>::iterator Department::getHighestGradeInputStudent()
{
    float maxGradeInput = 0;
    vector<Student *>::iterator ret;
    for (vector<Student *>::iterator it = studentTable.begin(); it != studentTable.end(); it++)
    {
        if ((*it)->getGradeInput() > maxGradeInput)
        {
            ret = it;
            maxGradeInput = (*it)->getGradeInput();
        }
    }
    return ret;
}
vector<Student *>::iterator Department::getTheBestStudent()
{
    float maxGPA = 0;
    vector<Student *>::iterator ret;
    for (vector<Student *>::iterator it = studentTable.begin(); it != studentTable.end(); it++)
    {
        if ((*it)->getTheBestSemester().getGPA() > maxGPA)
        {
            ret = it;
            maxGPA = (*it)->getTheBestSemester().getGPA();
        }
    }
    return ret;
}

map<string, int> Department::staticsYear()
{
    map<string, int> ret;

    for (vector<Student *>::iterator it = studentTable.begin(); it != studentTable.end(); it++)
    {
        string startYear = (*it)->getStartYear();
        if (ret.find(startYear) != ret.end())
        {
            ret[startYear]++;
        }else{
            ret[startYear] = 1;
        }
    }
    return ret;
}

void Department::addStudent(Student *newStudent)
{
    studentTable.push_back(newStudent);
    if (newStudent->getType() == REGULAR_STUDENT)
    {
        RSCount++;
    }
    else
    {
        ISCount++;
    }
}

vector<Student *>::iterator Department::searchStudent(string ID)
{
    for (vector<Student *>::iterator it = studentTable.begin(); it != studentTable.end(); it++)
    {
        if ((*it)->getID() == ID)
        {
            return it;
        }
    }
    return studentTable.end();
}
void Department::deleteStudent(string ID)
{
    vector<Student *>::iterator it = searchStudent(ID);
    if (it != studentTable.end())
    {
        studentTable.erase(it);
    }
    if ((*it)->getType() == REGULAR_STUDENT)
    {
        RSCount--;
    }
    else
    {
        ISCount--;
    }
}

vector<Student *> Department::getIS()
{
    vector<Student *> ret;
    for (vector<Student *>::iterator it = studentTable.begin(); it != studentTable.end(); it++)
    {
        if ((*it)->getType() == IN_SERVICE_STUDENT)
        {
            ret.push_back((*it));
        }
    }
    return ret;
}
vector<Student *> Department::getRS()
{
    vector<Student *> ret;
    for (vector<Student *>::iterator it = studentTable.begin(); it != studentTable.end(); it++)
    {
        if ((*it)->getType() == REGULAR_STUDENT)
        {
            ret.push_back((*it));
        }
    }
    return ret;
}

vector<Student *> Department::getStudentHasGPAGreaterThanXInLastSemester(float x)
{
    vector<Student *> ret;
    for (vector<Student *>::iterator it = studentTable.begin(); it != studentTable.end(); it++)
    {
        vector<Result>::iterator resultInLastSemester = ((*it)->getResultTable()).end() - 1;
        if ((*resultInLastSemester).getGPA() >= x)
        {
            ret.push_back((*it));
        }
    }
    return ret;
}

void Department::show()
{
    cout << endl
         << endl
         << "STUDENT LIST IN THE " << name << " DEPARTMENT." << endl;
    for (Student *student : studentTable)
    {
        cout << endl;
        student->show();
    }
}