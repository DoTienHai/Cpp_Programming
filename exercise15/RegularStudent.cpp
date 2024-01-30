#include "RegularStudent.h"

RegularStudent::RegularStudent(/* args */) {}
RegularStudent::RegularStudent(const std::string &newID, const std::string &newFullname, const std::string &newBirthday, const std::string &newStartYear, const float &newGradeInput) : Student(newID, REGULAR_STUDENT, newFullname, newBirthday, newStartYear, newGradeInput) {}
RegularStudent::~RegularStudent() {}