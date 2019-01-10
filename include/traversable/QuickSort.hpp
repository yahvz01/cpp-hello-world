#pragma once

#include <chrono>
#include <thread>
#include <array>
#include <string>

namespace traversable {

    template <typename _Tp, std::size_t N>
    void QuickSortImpl(std::array<_Tp, N>& target, std::size_t begin, std::size_t end){
        if(begin >= end){
            return;
        }
        std::size_t pivot = begin;
        std::size_t left = begin + 1;
        std::size_t right = end;

        while(left <= right){
            
            while( left <= end && target[left] < target[pivot]){
                ++left;
            }
            while( left < right && target[right] > target[pivot]){
                --right;
            }
            if(left == right && right > begin + 1){
                --right;
            }

           if(left < right){
                auto temp = target[left];
                target[left] = target[right];
                target[right] = temp;
            } else if(left >= right) {
                auto temp = target[right];
                target[right] = target[pivot];
                target[pivot] = temp;
            }
        }
        
        QuickSortImpl(target, begin, right - 1 );
        QuickSortImpl(target, right + 1, end );
    }

    template <typename _Tp, std::size_t N>
    void QuickSort(std::array<_Tp, N>& target){
        QuickSortImpl(target, 0, N - 1);

        printArrayWithSleep(target);
    }    
}