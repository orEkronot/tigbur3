#pragma once
#include <exception>
class NoCourseException :  std::exception
{
	const char* what() const;
};

