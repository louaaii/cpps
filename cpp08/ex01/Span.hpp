#ifndef SPAN_HPP
#define SPAN_HPP


class Span{
    private:
        unsigned int N;
    public:
        Span(unsigned int N);
        Span(const Span &other);
        Span &operator= (const Span &other);
        ~Span();

        void addNumber();
        void shortestSpan();
        void longestSpan();
        
};



#endif