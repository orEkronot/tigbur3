#include "StudentData.h"

StudentData::StudentData(const CollegeCourse& course, const int grade) : _course(course), _grade(grade)
{
}


void StudentData::setGrade(const int newGrade)
{
	_grade = newGrade;
}

void StudentData::print() const
{
	std::cout << _course.getName() << " " << _grade;
}

int StudentData::getGrade() const
{
	return _grade;
}

const CollegeCourse& StudentData::getCourse() const
{
	return this->_course;
}


