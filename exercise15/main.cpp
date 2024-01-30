#include <iostream>
#include <cstdlib>
#include <ctime>
#include "University.h"
using namespace std;

std::vector<std::string> firstNames = {"Alice", "Bob", "Charlie", "David", "Emma", "Frank", "Grace", "Henry"};
std::vector<std::string> lastNames = {"Smith", "Johnson", "Williams", "Jones", "Brown", "Davis", "Miller", "Wilson"};
std::vector<std::string> startYear = {"2016", "2017", "2018", "2019", "2020", "2021", "2022", "2023"};
std::vector<std::string> place = {"Hanoi", "Nam Dinh", "Da Nang", "Thanh Hoa", "Nghe An", "Ho Chi Minh"};

std::string generateRandomFullName()
{

    // Randomly select first and last names
    std::string firstName = firstNames[std::rand() % firstNames.size()];
    std::string lastName = lastNames[std::rand() % lastNames.size()];

    // Combine first and last names
    return firstName + " " + lastName;
}

std::string generateRandomStartYear()
{
    std::string startYearString = startYear[std::rand() % startYear.size()];

    return startYearString;
}

std::string generateRandomPlace()
{
    std::string placeString = place[std::rand() % startYear.size()];

    return placeString;
}

vector<Result> randomResult(string year)
{
    vector<Result> ret;
    for (int i = stoi(year); (i < 2024) && (i < stoi(year) + 5); i++)
    {
        ret.push_back(Result(to_string(i), rand() % 100 / 20.0 + 5));
    }
    return ret;
}

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    University University;
    University.addDepartment(new Department("ELECTRIC"));
    University.addDepartment(new Department("MATH"));
    University.addDepartment(new Department("PHILOSOPHY"));

    Department *temp = *(University.searchDepartment("ELECTRIC"));
    for (int i = 1; i < 5; i++)
    {
        string startYear = generateRandomStartYear();
        if (rand() % 2)
        {

            temp->addStudent(new RegularStudent(to_string(i), generateRandomFullName(), "1999-10-13", startYear, rand() % 100 / 10.0 + 20));
        }
        else
        {
            temp->addStudent(new InServiceStudent(to_string(i), generateRandomFullName(), "1999-10-13", startYear, rand() % 100 / 10.0 + 20, generateRandomPlace()));
        }
        (*temp->searchStudent(to_string(i)))->setResultTable(randomResult(startYear));
    }
    temp = *(University.searchDepartment("MATH"));
    for (int i = 5; i < 10; i++)
    {
        string startYear = generateRandomStartYear();
        if (rand() % 2)
        {

            temp->addStudent(new RegularStudent(to_string(i), generateRandomFullName(), "1999-10-13", startYear, rand() % 100 / 10.0 + 20));
        }
        else
        {
            temp->addStudent(new InServiceStudent(to_string(i), generateRandomFullName(), "1999-10-13", startYear, rand() % 100 / 10.0 + 20, generateRandomPlace()));
        }
        (*temp->searchStudent(to_string(i)))->setResultTable(randomResult(startYear));
    }

    temp = *(University.searchDepartment("PHILOSOPHY"));
    for (int i = 10; i < 15; i++)
    {
        string startYear = generateRandomStartYear();
        if (rand() % 2)
        {

            temp->addStudent(new RegularStudent(to_string(i), generateRandomFullName(), "1999-10-13", startYear, rand() % 100 / 10.0 + 20));
        }
        else
        {
            temp->addStudent(new InServiceStudent(to_string(i), generateRandomFullName(), "1999-10-13", startYear, rand() % 100 / 10.0 + 20, generateRandomPlace()));
        }
        (*temp->searchStudent(to_string(i)))->setResultTable(randomResult(startYear));
    }

    // University.show();
    University.showTheBestStudent();


    return 0;
}
