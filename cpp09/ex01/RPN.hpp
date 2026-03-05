#ifndef RPN_HPP
#define RPN_HPP

#include <cstdlib>
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include <stack>
#include <cctype>


class RPN{
    private:

    public:
        RPN();
        ~RPN();
        RPN(const RPN &other);
        RPN &operator=(const RPN &other);

        int calculate(std::string input, std::stack<int> &stack);
};





#endif