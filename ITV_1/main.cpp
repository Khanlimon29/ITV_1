#include "SortImpl.h"
#include <iostream>

int main() {
    std::string inputFile = "input.txt";
    std::string outputFile = "output.txt";

    std::unique_ptr<Sort> sorter = std::make_unique<SortImpl>();

    sorter->sortFile(inputFile, outputFile);
    std::cout << "Сортировка завершена";
    return 0;
}