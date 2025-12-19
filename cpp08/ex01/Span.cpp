#include "Span.hpp"


Span::Span(unsigned int N): N(N){}

Span::~Span(){}

Span::Span(const Span &other){
    this->N = other.N;
    this->num = other.num;
}

Span &Span::operator=(const Span &other){
    if(this != &other)
    {
        this->N = other.N;
        this->num = other.num;
    }
    return *this;
}


void Span::addNumber(int number){
    if(num.size() >= N)
        throw std::exception();
    num.push_back(number);
}

int Span::shortestSpan(){
    if(num.size() < 2)
        throw std::exception();
    std::vector<int> sort = num;
    std::sort(sort.begin(), sort.end());

    int shortest = sort[1] - sort[0];
    for(int i = 1; i < sort[i + 1]; ++i){
        int diff = sort[i + 1] - sort[i];
        if(diff < shortest)
            shortest = diff;
    }
    return shortest;
}

int Span::longestSpan(){
    if(num.size() < 2)
        throw std::exception();
    int max = *std::max_element(num.begin(), num.end());
    int min = *std::min_element(num.begin(), num.end());

    return(max - min);
}