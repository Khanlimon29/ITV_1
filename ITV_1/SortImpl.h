#pragma once
#include "Sort.h"
#include <vector>
class SortImpl : public Sort {
public:
	void sortFile(std::string fileNameInput, std::string fileNameOutput) override;
private:
	std::vector<int> parseFile(std::string fileNameInput);
	void Sort(std::vector<int>& array);
	void writeToFile(std::vector<int>& array, std::string fileNameOutput);
};
