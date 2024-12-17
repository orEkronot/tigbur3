#include "CollegeCourse.h"

int CollegeCourse::_numOfCourses = 0;

CollegeCourse::CollegeCourse(const std::string name, const int courseID) : _name(name), _courseID(courseID)
{
	_numOfCourses++;
}

std::string CollegeCourse::getName() const
{
	return this->_name;
}

int CollegeCourse::getCourseID() const
{
	return this->_courseID;
}

void CollegeCourse::setName(const std::string newName)
{
	this->_name = newName;
}

void CollegeCourse::setCourseID(const int newCourseID)
{
	this->_courseID = newCourseID;
}

int CollegeCourse::totalNumberOfCourses() const
{
	return _numOfCourses;
}


