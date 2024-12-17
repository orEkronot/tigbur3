#include "CSStudent.h"

#include <iostream>

CSStudent::CSStudent(const int id, const std::string firstName, const std::string lastName, const int height, bool hasLaptop) :
	Student(id, firstName, lastName, height), _hasLaptop(hasLaptop)
{
}

bool CSStudent::hasLaptop() const
{
	return _hasLaptop;
}

void CSStudent::print() const
{
	std::cout << "### Computer Science Student ###\n";
	Student::print();
	std::string hasLaptopString = _hasLaptop ? "has " : "doesn't have ";
	std::cout << "The student " << hasLaptopString << "\n";
}

bool CSStudent::checkCourseID(const int courseID) const
{
	if (courseID == INTRO_TO_CS || courseID == LINEAR_ALGEBRA
		|| courseID == CALCULUS || courseID == PROBABILITY_AND_STATISTICS
		|| courseID == OBJECT_ORIENTED_PROGRAMMING || courseID == DATA_STRUCTURES
		|| courseID == OPERATING_SYSTEMS)
	{
		return true;
	}
	return false;

}