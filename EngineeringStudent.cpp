#include "EngineeringStudent.h"
#include <iostream>

EngineeringStudent::EngineeringStudent(const int id, const std::string firstName, const std::string lastName, const int height, std::string projectSubject) :
	Student(id, firstName, lastName, height), _projectSubject(projectSubject)
{
}

std::string EngineeringStudent::projectSubject() const
{
	return _projectSubject;
}


void EngineeringStudent::print() const
{
	std::cout << "### Engineering Student ###\n";
	Student::print();
	std::cout << "Project's subject: " << _projectSubject << "\n";
}


bool EngineeringStudent::checkCourseID(const int courseID) const
{
	if (courseID == INTRO_TO_PHYSICS || courseID == LINEAR_ALGEBRA
		|| courseID == CALCULUS || courseID == PROBABILITY_AND_STATISTICS
		|| courseID == ELECTRONICS)
	{
		return true;
	}
	return false;

}
