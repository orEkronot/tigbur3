#pragma once
#include "Student.h"
class CSStudent : public Student
{
public:
	CSStudent(const int id, const std::string firstName, const std::string lastName, const int height, bool hasLaptop);
	bool hasLaptop() const;
	void print() const;
	bool checkCourseID(const int courseID) const;

private:
	bool _hasLaptop;
};

