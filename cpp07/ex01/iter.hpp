#ifndef ITER_HPP
#define ITER_HPP

#include <cstdlib>
#include <iostream>
#include <string>


template<typename T, typename O>
void iter(T* const array, size_t length, O function){
    for(size_t i = 0; i < length; i++)
        function(array[i]);
}

template<typename T, typename O>
void iter(T* array, size_t length, O function){
    for(size_t i = 0; i < length; i++)
        function(array[i]);
}

template<typename T>
void print(T const & element) {
    std::cout << element << std::endl;
}

template<typename T>
void increment(T & element) {
    element++;
}


#endif