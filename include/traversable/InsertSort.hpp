#pragma once

#include <array>

namespace traversable {
    template <typename _Tp, std::size_t N>
    void InsertSort(std::array<_Tp, N>& target){
        for(std::size_t outer = 0; outer < N; ++outer){
            
            for(std::size_t inner = outer; inner > outer; --inner){

                if(target[inner] < target[inner - 1]){
                    auto temp = target[inner];
                    target[inner] = target[inner -1];
                    target[inner] = temp;
                } else {
                    break;    
                }
            }
        }

    }
}