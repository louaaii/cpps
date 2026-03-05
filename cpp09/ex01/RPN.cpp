#include "RPN.hpp"


RPN::RPN(){}

RPN::~RPN(){}

RPN &RPN::operator=(const RPN &other){
    (void)other;
    return *this;
}

RPN::RPN(const RPN &other){
    (void)other;
}

int RPN::calculate(std::string input, std::stack<int> &stack){
    std::istringstream iss(input);
    std::string token;

    if(stack.size() < 2){
        std::cerr << "Error" << std::endl;
        return -1;
    }

    while(iss >> token){
        if(std::isdigit(token[0]))
            stack.push(std::atoi(token.c_str()));
        else if(token.length() == 1 && strchr("+-*/", token[0]))
        {
            if(stack.size() >= 2){
                int uno;
                int dos;
                int result;
                char op;

                op = token[0];
                uno = stack.top();
                stack.pop();
                dos = stack.top();
                stack.pop();
                switch(op){
                    case '+': result = dos + uno; break;
                    case '-': result = dos - uno; break;
                    case '*': result = dos * uno; break;
                    case '/': 
                        if(uno == 0){
                            std::cerr << "Error : Division by 0";
                            return -1;
                        }
                        result = dos / uno; 
                        break;
                }
                stack.push(result);
            }   
        }
        else
            std::cerr << "Invalid input";
    }
    if(stack.size() != 1){
        std::cerr << "Error" << std::endl;
        return -1;
    }
    return(stack.top());
}
