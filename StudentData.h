#pragma once
#include <string>
#include <iostream>
#include "CollegeCourse.h"

class StudentData
{
public:

	// constructor
	StudentData(const CollegeCourse& course, const int grade);

	// getters
	int getGrade() const;
	const CollegeCourse& getCourse() const;

	// setters
	void setGrade(const int newGrade);

	// public methods
	void print() const;

private:
	int _grade;
	const CollegeCourse& _course;
};

