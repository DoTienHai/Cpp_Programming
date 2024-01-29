#include "EmployeeManager.h"

EmployeeManager::EmployeeManager()
{
    // Constructor
}

EmployeeManager::~EmployeeManager()
{
    // Destructor
    for (Employee *employee : employeeTable)
    {
        delete employee;
    }
    employeeTable.clear();
}

void EmployeeManager::addEmployee()
{
    string ID;
    string fullName;
    string birthdayString;
    unsigned int birthDay;
    string phone;
    string email;
    int employeeType;

    cout << "Enter employee's full name." << endl;
    cin >> fullName;
    cout << "Enter employee's birthday dd/mm/yy." << endl;
    cin >> birthdayString;
    cout << "Enter employee's phone." << endl;
    cin >> phone;
    cout << "Enter employee's email." << endl;
    cin >> email;
    cout << "Enter employee's type." << endl;
    cout << EXPERIENCE << ". Experience." << endl;
    cout << FRESHER << ". Fresher." << endl;
    cout << INTERN << ". Intern." << endl;
    cin >> employeeType;

    switch (employeeType)
    {
    case EXPERIENCE:
        int expInYear;
        string proSkill;
        break;
    case FRESHER:
        /* code */
        break;
    case INTERN:
        /* code */
        break;
    default:
        break;
    }
}
void EmployeeManager::updateEmployee() {}
void EmployeeManager::deleteEmploy()
{
    string ID;
    display();
    cout << "Enter the employee Id you want to delete." << endl;
    cin >> ID;
    vector<Employee *>::iterator it = searchEmployee(ID);
    if (it != employeeTable.end())
    {
        employeeTable.erase(it);
        cout << "Delete completed!" << endl;
    }
    else
    {
        cout << "ID not found!" << endl;
    }
}
vector<Employee *>::iterator EmployeeManager::searchEmployee(string ID)
{
    for (vector<Employee *>::iterator it = employeeTable.begin(); it != employeeTable.end(); ++it)
    {
        if ((*it)->getID() == ID)
        {
            return it;
        }
    }
    return employeeTable.end();
}

void EmployeeManager::display()
{
    for (Employee *employeePtr : employeeTable)
    {
        employeePtr->showMe();
        cout << endl;
    }
}
void EmployeeManager::displayExperience()
{
    for (Employee *employeePtr : employeeTable)
    {
        if (employeePtr->getEmployeeType() == EXPERIENCE)
        {
            employeePtr->showMe();
            cout << endl;
        }
    }
}
void EmployeeManager::displayFresher()
{
    for (Employee *employeePtr : employeeTable)
    {
        if (employeePtr->getEmployeeType() == FRESHER)
        {
            employeePtr->showMe();
            cout << endl;
        }
    }
}
void EmployeeManager::displayIntern()
{
    for (Employee *employeePtr : employeeTable)
    {
        if (employeePtr->getEmployeeType() == INTERN)
        {
            employeePtr->showMe();
            cout << endl;
        }
    }
}