#include <gtest/gtest.h>
#include "traversable/SelectionSort.hpp"

TEST(SelectionSort, Success){

    std::array<int, 10> targetSort = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
    
    traversable::SelectionSort(targetSort);

    int outerIndex = 1;
    std::for_each(targetSort.begin(), targetSort.end(), [&](int i){
        EXPECT_EQ(i, outerIndex);
        ++outerIndex;
    });
}