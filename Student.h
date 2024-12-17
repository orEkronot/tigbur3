#pragma once
#include <string>
#include <vector>
#include "StudentData.h"
#include "NoCourseException.h"

//////////////////
// course codes //
//////////////////

// ** CS Courses **
#define INTRO_TO_CS 1001
#define DATA_STRUCTURES 1002
#define OPERATING_SYSTEMS 1003
#define OBJECT_ORIENTED_PROGRAMMING 1004

// ** Math Courses **
#define LINEAR_ALGEBRA 2001
#define CALCULUS 2002
#define PROBABILITY_AND_STATISTICS 2003

// ** Physics Courses **
#define INTRO_TO_PHYSICS 3001
#define ELECTRONICS 3002

// ** Economy Courses **
#define INTRO_TO_ECONOMY 4001

class Student
{
private:
	int  _id;
	int _height;
	std::string _firstName;
	std::string _lastName;
	static int _tallestStudentID;
	static int _tallestStudentHeight;

protected:
	std::vector<StudentData> _data;


public:

	//constructor
	Student(const int id, const std::string firstName, const std::string lastName, const int height);

	// getters
	int getID() const;
	std::string getFirstName() const;
	std::string getLastName() const;
	int getHeight() const;
	int tallestStudent() const;

	// setters
	void setID(const int newID);
	void setFirstName(const std::string newFirstName);
	void setLastName(const std::string newLastName);
	void setHeight(const int newHeight);
	void setGrade(const CollegeCourse& course, const int newGrade);

	// public methods
	double getAverage() const;
	virtual void print() const;
	virtual bool checkCourseID(const int courseID) const = 0;

	// operators
	bool operator==(const Student& other) const;
	bool operator<(const Student& other) const;
	int operator[](const int courseID) const;

};

