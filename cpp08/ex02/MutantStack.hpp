#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <cstdlib>
#include <iostream>
#include <stack>
#include <algorithm>


template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>{
    public:
        MutantStack(){}
        MutantStack(const MutantStack &other) : std::stack<T,Container>(other){}
        MutantStack &operator= (const MutantStack &other){
            std::stack<T, Container>::operator=(other);
            return *this;
        }
        
        ~MutantStack(){}
        
        typedef typename Container::iterator iterator;

        iterator begin(){
            return(this->c.begin());
        }
        iterator end(){
            return(this->c.end());
        }
        
};

#endif