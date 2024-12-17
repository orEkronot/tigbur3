#pragma once
#include <string>
class CollegeCourse
{

	static int _numOfCourses;
private:
	std::string _name;
	int _courseID;

public:
	CollegeCourse(const std::string name, const int id);
	std::string getName() const;
	void setName(const std::string name);

	int getCourseID() const;
	void setCourseID(const int id);
	int totalNumberOfCourses() const;
};

