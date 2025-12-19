#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <cstdlib>
#include <iostream>
#include <exception>
#include <vector>
#include <list>



template<typename T>
typename T::iterator easyfind(T& container, int n){
    typename T::iterator it;
    for(it = container.begin(); it != container.end(); ++it){
        if(*it == n)
            return it;
    }
    throw std::exception();
}


#endif