#ifndef SPAN_HPP
#define SPAN_HPP

#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span{
    private:
        unsigned int N;
        std::vector<int> num;
    public:
        Span(unsigned int N);
        Span(const Span &other);
        Span &operator= (const Span &other);
        ~Span();

        void addNumber(int number);

        template<typename O>
        void addNumber(O begin, O end){
            if(num.size() + std::distance(begin, end) > N)
                throw std::exception();
            num.insert(num.end(), begin, end);
        }

        int shortestSpan();
        int longestSpan();
        
};



#endif