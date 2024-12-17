#pragma once
#include <exception>
class NoCourseException : public std::exception
{
	const char* what() const;
};

