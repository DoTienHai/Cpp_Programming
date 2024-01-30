#include "University.h"

University::University(/* args */) {}
University::~University() {}

void University::addDepartment(Department *newDepartment)
{
    departmentTable.push_back(newDepartment);
}
vector<Department *>::iterator University::searchDepartment(string name)
{
    for (vector<Department *>::iterator it = departmentTable.begin(); it != departmentTable.end(); it++)
    {
        if ((*it)->getName() == name)
        {
            return it;
        }
    }
    return departmentTable.end();
}
void University::deleteDepartment(string name)
{
    vector<Department *>::iterator it = searchDepartment(name);
    if (it != departmentTable.end())
    {
        departmentTable.erase(it);
    }
}

unsigned int University::getRSTotal()
{
    unsigned int total = 0;
    for (Department *department : departmentTable)
    {
        total += department->getRSCount();
    }
    return total;
}
unsigned int University::getISTotal()
{
    unsigned int total = 0;
    for (Department *department : departmentTable)
    {
        total += department->getISCount();
    }
    return total;
}
unsigned int University::getTotalStudent()
{
    unsigned int total = 0;
    for (Department *department : departmentTable)
    {
        total += department->getTotalStudent();
    }
    return total;
}

void University::staticsYear()
{
    cout << "STATICS STUDENT IN EACH YEAR" << endl;
    for (Department *department : departmentTable)
    {
        cout << endl
             << department->getName() << " Department: " << endl;
        map<string, int> staticsMap = department->staticsYear();
        for (const auto &entry : staticsMap)
        {
            std::cout << entry.first << ": " << entry.second << std::endl;
        }
    }
}

void University::showHighestGradeInputStudentList()
{
    cout << "LIST OF THE HIGHEST GRADE INPUT" << endl;
    for (Department *department : departmentTable)
    {

        cout << endl
             << department->getName() << " Department: " << endl;
        (*department->getHighestGradeInputStudent())->show();
    }
}
void University::showISFollowPLace(string linkingPlace)
{

    cout << "LIST OF IN-SERVICE STUDENT IN " << linkingPlace << endl;
    for (Department *department : departmentTable)
    {
        cout << endl
             << department->getName() << " DEPARTMENT" << endl
             << endl;
        vector<Student *> ISList = department->getIS();
        for (Student *student : ISList)
        {
            InServiceStudent *temp = dynamic_cast<InServiceStudent *>(student);
            if (temp->getLinkingPlace() == linkingPlace)
            {
                temp->show();
            }
        }
    }
}

void University::showGoodStudentInTheLastSemester(float x)
{
    cout << "LIST OF STUDENT HAS GPA GREATER THAN " << x << endl;
    for (Department *department : departmentTable)
    {
        cout << endl
             << department->getName() << " DEPARTMENT" << endl
             << endl;
        for (Student *student : department->getStudentHasGPAGreaterThanXInLastSemester(x))
        {
            student->show();
        }
    }
}

void University::showTheBestStudent()
{
    cout << "LIST OF STUDENT HAS THE BEST GPA" << endl;
    for (Department *department : departmentTable)
    {
        cout << endl
             << department->getName() << " DEPARTMENT" << endl
             << endl;
        (*department->getTheBestStudent())->show();
    }
}

void University::show()
{
    for (Department *department : departmentTable)
    {
        department->show();
    }
}