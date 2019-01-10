#pragma once

#include <array>

namespace traversable {
    
    template <typename _Tp, std::size_t N>
    void SelectionSort(std::array<_Tp, N>& target){
        for(std::size_t outer = 0; outer < N; ++outer) {

            std::size_t minimumIndex = outer;
            for(std::size_t inner = outer; inner < N; ++inner){
                if(target[minimumIndex] > target[inner]){
                    minimumIndex = inner;
                } else {
                    break;
                }
            }
            auto temp = target[outer];
            target[outer] = target[minimumIndex];
            target[minimumIndex] = temp;
        }
    }
}