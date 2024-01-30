#include "InServiceStudent.h"

InServiceStudent::InServiceStudent()
{
}

InServiceStudent::InServiceStudent(const std::string &newID, const std::string &newFullname, const std::string &newBirthday, const std::string &newStartYear, const float &newGradeInput, const std::string &newLinkingPlace)
    : Student(newID, IN_SERVICE_STUDENT, newFullname, newBirthday, newStartYear, newGradeInput), linkingPlace(newLinkingPlace)
{
}

InServiceStudent::~InServiceStudent()
{
}

std::string InServiceStudent::getLinkingPlace() const
{
    return linkingPlace;
}

void InServiceStudent::setLinkingPlace(const std::string &newLinkingPlace)
{
    linkingPlace = newLinkingPlace;
}