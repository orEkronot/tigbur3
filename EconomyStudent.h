#pragma once
#include "Student.h"
class EconomyStudent : public Student
{

public:
	EconomyStudent(const int id, const std::string firstName, const std::string lastName, const int height, std::string internshipCompany);
	std::string internshipCompany() const;
	void print() const;
	bool checkCourseID(const int courseID) const;

private:
	std::string _internshipCompany;
};

