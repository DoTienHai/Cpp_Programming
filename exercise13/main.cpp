#include <iostream>
#include "EmployeeManager.h"
using namespace std;

enum FUNCTION
{
    BACK = 0,
    ADD_EMPLOYEE = 1,
    UPDATE_EMPLOYEE = 2,
    DELETE_EMPLOYEE = 3,
    SEARCH_EMPLOYEE = 4,
    DISPLAY = 5,
    DISPLAY_EXPERIENCE = 6,
    DISPLAY_FRESHER = 7,
    DISPLAY_INTERN = 8,
    EXIT = 9,
};

void back()
{
    int ret = 1;
    while (ret)
    {
        cout << "Enter " << BACK << " and ENTER to back." << endl;
        cin >> ret;
        system("clear");
    }
}
int main()
{
    EmployeeManager manager;
    int option = 0, exit = 1;
    while (exit)
    {
        cout << "Choose one of the functions below: " << endl;
        cout << ADD_EMPLOYEE << ". Add an employee." << endl;
        cout << UPDATE_EMPLOYEE << ". Update employee's infomation." << endl;
        cout << DELETE_EMPLOYEE << ". Delete an employee by ID." << endl;
        cout << SEARCH_EMPLOYEE << ". search and display an employee by ID." << endl;
        cout << DISPLAY << ". Display all employees." << endl;
        cout << DISPLAY_EXPERIENCE << ". Display all experience." << endl;
        cout << DISPLAY_FRESHER << ". Display all fresher." << endl;
        cout << DISPLAY_INTERN << ". Display all intern." << endl;
        cout << EXIT << ". Exit" << endl;
        cin >> option;
        system("clear");

        switch (option)
        {
        case ADD_EMPLOYEE:
        {
            manager.addEmployee();
            manager.display();
            back();
        }
        break;
        case UPDATE_EMPLOYEE:
        {
            manager.updateEmployee();
            // manager.display();
            back();
        }
        break;
        case DELETE_EMPLOYEE:
        {
            manager.deleteEmploy();
            manager.display();
            back();
        }
        case SEARCH_EMPLOYEE:
        {
            manager.deleteEmploy();
            manager.display();
            back();
        }
        break;
            break;
        case DISPLAY:
        {
            manager.display();
            back();
        }
        break;
        case DISPLAY_EXPERIENCE:
        {
            manager.displayExperience();
            back();
        }
        break;
        case DISPLAY_FRESHER:
        {
            manager.displayFresher();
            back();
        }
        break;
        case DISPLAY_INTERN:
        {
            manager.displayIntern();
            back();
        }
        break;
        case EXIT:
        {
            exit = 0;
            cout << "GOOD BYE!";
        }
        break;
        default:
        {
            while (option < ADD_EMPLOYEE || option > EXIT)
            {
                system("clear");
                cout << "Choose one of the functions below: " << endl;
                cout << ADD_EMPLOYEE << ". Add an employee." << endl;
                cout << UPDATE_EMPLOYEE << ". Update employee's infomation." << endl;
                cout << DELETE_EMPLOYEE << ". Delete an employee by ID." << endl;
                cout << SEARCH_EMPLOYEE << ". search and display an employee by ID." << endl;
                cout << DISPLAY << ". Display all employees." << endl;
                cout << DISPLAY_EXPERIENCE << ". Display all experience." << endl;
                cout << DISPLAY_FRESHER << ". Display all fresher." << endl;
                cout << DISPLAY_INTERN << ". Display all intern." << endl;
                cout << EXIT << ". Exit" << endl;
                cin >> option;
            }
        }
        break;
        }
    }

    return 0;
}
