#include "EconomyStudent.h"
#include <iostream>

EconomyStudent::EconomyStudent(const int id, const std::string firstName, const std::string lastName, const int height, std::string internshipCompany) :
	Student(id, firstName, lastName, height), _internshipCompany(internshipCompany)
{
}

std::string EconomyStudent::internshipCompany() const
{
	return _internshipCompany;
}


void EconomyStudent::print() const
{
	std::cout << "### Economy Student ###\n";
	Student::print();
	std::cout << "Doing Internship in: " << _internshipCompany << "\n";
}

bool EconomyStudent::checkCourseID(const int courseID) const
{
	if (courseID == INTRO_TO_ECONOMY || courseID == LINEAR_ALGEBRA
		|| courseID == CALCULUS || courseID == PROBABILITY_AND_STATISTICS)
	{
		return true;
	}
	return false;

}
