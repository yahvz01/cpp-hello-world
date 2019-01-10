#pragma once

#include <array>

namespace traversable {
    
    template <typename _Tp, std::size_t N>
    void BubbleSort(std::array<_Tp, N>& target){
        for(std::size_t outer = 1; outer < N; ++outer){
            
            for(std::size_t inner = 0; inner < (N - outer); ++inner ){
                if(target[inner] > target[inner + 1]){
                    auto temp = target[inner];
                    target[inner] = target[inner + 1];
                    target[inner + 1] = temp;
                }
            }
       }
    }
}