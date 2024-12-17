#pragma once
#include "Student.h"
#include <string>

class EngineeringStudent : public Student
{
public:
	EngineeringStudent(const int id, const std::string firstName, const std::string lastName, const int height, std::string projectSubject);
	std::string projectSubject() const;
	void print() const;
	bool checkCourseID(const int courseID) const;

private:
	std::string _projectSubject;
};

