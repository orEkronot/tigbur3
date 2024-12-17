#include "NoCourseException.h"

const char* NoCourseException::what() const
{
	return "Error: the course is not part of the student’s syllabus";
}


