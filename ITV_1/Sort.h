#pragma once
#include <string>
class Sort
{
public:
	virtual void sortFile(std::string fileNameInput, std::string fileNameOutput) = 0;
};