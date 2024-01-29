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
    string ID = "123";
    string fullName;
    string birthdayString;
    unsigned int birthDay = 12412;
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
    {
        int expInYear;
        string proSkill;
        cout << "Enter employee's ExpInYear." << endl;
        cin >> expInYear;
        cout << "Enter employee's ProSkill." << endl;
        cin >> proSkill;
        employeeTable.push_back(new Experience(ID, fullName, birthDay, phone, email, (enum EMPLOYEE_TYPE)employeeType, expInYear, proSkill));
    }

    break;
    case FRESHER:
    {
        unsigned int graduationDate;
        int graduationRank;
        string education;
        cout << "Enter employee's Graduation date dd/mm/yy." << endl;
        cin >> graduationDate;
        cout << "Enter employee's graduation rank." << endl;
        cout << EXCELLENT << ". Excellent." << endl;
        cout << VERY_GOOG << ". Very good." << endl;
        cout << GOOD << ". Good." << endl;
        cout << AVERAGE_GOOD << ". Average good." << endl;
        cout << ORDINARY << ". Ordinary." << endl;
        cin >> graduationRank;
        cout << "Enter employee's education." << endl;
        cin >> education;
        employeeTable.push_back(new Fresher(ID, fullName, birthDay, phone, email, (enum EMPLOYEE_TYPE)employeeType, graduationDate, (enum GRADUATION_RANK)graduationRank, education));
    }
    break;
    case INTERN:
    {
        string major;
        int semester;
        string university;
        cout << "Enter employee's major." << endl;
        cin >> major;
        cout << "Enter employee's semester." << endl;
        cin >> semester;
        cout << "Enter employ's university." << endl;
        cin >> university;
        employeeTable.push_back(new Intern(ID, fullName, birthDay, phone, email, (enum EMPLOYEE_TYPE)employeeType, major, semester, university));
    }
    break;
    default:
    {
    }
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
    system("clear");
    for (Employee *employeePtr : employeeTable)
    {
        employeePtr->showMe();
        cout << endl;
    }
}
void EmployeeManager::displayExperience()
{
    system("clear");
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
        system("clear");
        if (employeePtr->getEmployeeType() == FRESHER)
        {
            employeePtr->showMe();
            cout << endl;
        }
    }
}
void EmployeeManager::displayIntern()
{
    system("clear");
    for (Employee *employeePtr : employeeTable)
    {
        if (employeePtr->getEmployeeType() == INTERN)
        {
            employeePtr->showMe();
            cout << endl;
        }
    }
}