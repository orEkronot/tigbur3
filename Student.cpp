#include "Student.h"
#define EMPTY -1

int Student::_tallestStudentHeight = EMPTY;
int Student::_tallestStudentID = EMPTY;


Student::Student(const int id, const std::string firstName, const std::string lastName, const int height)
	: _id(id),_firstName(firstName),_lastName(lastName),_height(height)
{
	if (this->_tallestStudentHeight < height)
	{
		this->_tallestStudentHeight = height;
		this->_tallestStudentID = id;
	}
}

int Student::getID() const
{
	return _id;
}

std::string Student::getFirstName() const
{
	return this->_firstName;
}

std::string Student::getLastName() const
{
	return this->_lastName;
}

int Student::getHeight() const
{
	return this->_height;
}

int Student::tallestStudent() const
{
	return 0;
}

void Student::setID(const int newID)
{
	this->_id = newID;
}

void Student::setFirstName(const std::string newFirstName)
{
	this->_firstName = newFirstName;
}

void Student::setLastName(const std::string newLastName)
{
	this->_firstName = newLastName;
}

void Student::setHeight(const int newHeight)
{
	this->_height = newHeight;
}

void Student::setGrade(const CollegeCourse& course, const int newGrade)
{
	for (int i = 0;  i < this->_data.size(); i++)
	{
		if (this->_data[i].getCourse().getCourseID() == course.getCourseID())
		{
			this->_data[i].setGrade(newGrade);
		}
	}
}

double Student::getAverage() const
{
	double sum = 0.0;

	for (int i = 0; i < this->_data.size(); i++)
	{
		sum += this->_data[i].getGrade();
	}

	return sum / this->_data.size();
}

bool Student::operator==(const Student& other) const
{
	if (this->getFirstName() == other.getFirstName())
	{
		if (this->getLastName() == other.getLastName())
		{
			return true;
		}
	}


	return false;
}




bool Student::operator<(const Student& other) const
{
	return this->_height < other._height;
}

int Student::operator[](const int courseID) const
{
	if (checkCourseID(courseID) == false)
	{
		throw NoCourseException();
	}
	for (unsigned int i = 0; i < this->_data.size(); i++)
	{
		if (_data[i].getCourse().getCourseID() == courseID)
			return _data[i].getGrade();
	}
	return EMPTY;
}



void Student::print() const
{
	std::cout << "Student ID:" << _id << "\n"
		<< _firstName << " " << _lastName << "\n"
		<< "Height: " << _height << "\n" << "Grades: " << "\n";
	for (unsigned int i = 0; i < this->_data.size(); i++)
	{
		_data[i].print();
		std::cout << "\n";
	}
}