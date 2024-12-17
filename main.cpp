#include "Student.h"
#include "CSStudent.h"
#include "EngineeringStudent.h"
#include "EconomyStudent.h"

#include <vector>
#include <iostream>

void printAll(std::vector<Student*>& students)
{
	std::cout << "=================\n"
		<< "  Students info  \n"
		<< "=================\n\n";
	for (unsigned int i = 0; i < students.size(); i++)
	{
		students[i]->print();
		std::cout << "Average grade: " << students[i]->getAverage() << "\n";

		std::cout << "\n*****************\n*****************\n\n";
	}

	std::cout << "Tallest student ID: " << students[0]->tallestStudent() << "\n\n";
}

int main()
{
	std::vector<Student*> students;

	CollegeCourse c1("Introduction to Computer Science", INTRO_TO_CS);
	CollegeCourse c2("LinearAlgebra", LINEAR_ALGEBRA);
	CollegeCourse c3("Calculus", CALCULUS);
	CollegeCourse c4("Introduction to Physics", INTRO_TO_PHYSICS);
	CollegeCourse c5("Data Structures", DATA_STRUCTURES);
	CollegeCourse c6("Operating Systems", OPERATING_SYSTEMS);
	CollegeCourse c7("Introduction to Economy", INTRO_TO_ECONOMY);
	CollegeCourse c8("Electronics", ELECTRONICS);
	CollegeCourse c9("Probability and Statistics", PROBABILITY_AND_STATISTICS);
	CollegeCourse c10("Object Oriented Programming", OBJECT_ORIENTED_PROGRAMMING);

	//Setting grades

	try
	{

		// First Student (CSS)
		Student* s1 = new CSStudent(111111111, "Bill", "Yard", 174, true);
		s1->setGrade(c1, 100);
		s1->setGrade(c2, 78);
		s1->setGrade(c3, 66);
		s1->setGrade(c5, 91);
		s1->setGrade(c6, 85);
		s1->setGrade(c10, 100);
		s1->setGrade(c9, 71);

		// Second Student (Engineering)
		Student* s2 = new EngineeringStudent(222222222, "Ela", "Maayan", 167, "AI");
		s2->setGrade(c4, 81);
		s2->setGrade(c2, 94);
		s2->setGrade(c3, 91);
		s2->setGrade(c8, 100);
		s2->setGrade(c9, 88);

		// Third Student (Economy)
		Student* s3 = new EconomyStudent(333333333, "Itzik", "Spensive", 190, "J.P Morgan");
		s3->setGrade(c7, 99);
		s3->setGrade(c2, 73);
		s3->setGrade(c3, 89);
		s3->setGrade(c9, 100);


		// adding students to vector
		students.push_back(s1);
		students.push_back(s2);
		students.push_back(s3);
	}
	catch (std::exception& error)
	{
		std::cerr << error.what() << std::endl;
	}




	printAll(students);

	return 0;
}