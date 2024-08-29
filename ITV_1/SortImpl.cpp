#include "SortImpl.h"
#include <fstream>
#include <algorithm>
#include <iostream>

void SortImpl::sortFile(std::string fileNameInput, std::string fileNameOutput)
{
	std::vector<int> numbers = parseFile(fileNameInput);
	Sort(numbers);
	writeToFile(numbers, fileNameOutput);
}

std::vector<int> SortImpl::parseFile(std::string fileNameInput)
{
	std::ifstream file(fileNameInput);

	if (!file.is_open()) {
		std::cout << "Файл не открылся" << std::endl;
	}

	std::vector<int> numbers;
	int number;
	while (file >> number)
	{
		numbers.push_back(number);
	}
	return numbers;
}
void SortImpl::Sort(std::vector<int>& array)
{
	std::sort(array.begin(), array.end());
}

void SortImpl::writeToFile(std::vector<int>& array, std::string fileNameOutput)
{
	std::ofstream outputFile(fileNameOutput);

	if (!outputFile.is_open()) {
		std::cout << "Файл не открылся" << std::endl;
	}

	for (const int& number : array) {
		outputFile << number << " ";
	}

	outputFile.close();
};