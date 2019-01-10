#include <iostream>
#include <algorithm>
#include "traversable/QuickSort.hpp"

int main(int argc, char const *argv[])
{
    std::cout << "Hello, world" << std::endl;
    std::array<int, 10> newtargetSort = { 5, 7, 9, 1, 3, 8, 6, 10, 2, 4 };
    std::array<int, 10> targetSort = { 3, 7, 8, 1, 5, 9, 6, 10, 2, 4 };
    traversable::QuickSort(targetSort);

    return 0;
}