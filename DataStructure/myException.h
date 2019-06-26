#pragma once

#include <iostream>
#include <string>

class illegalParameterValue
{
public:
	illegalParameterValue(std::string message = "Illegal parameter value") :
		_message(message) 
	{
	}

	void outputMessage() { std::cout << _message << std::endl; }

	const std::string& what() { return _message; }

private:
	std::string _message;
};

class stackEmpty
{
public:
	stackEmpty(std::string message = "Illegal operator on empty stack") :
		_message(message)
	{
	}

	void outputMessage() { std::cout << _message << std::endl; }

	const std::string& what() { return _message; }

private:
	std::string _message;
};