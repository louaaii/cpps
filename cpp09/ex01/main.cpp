#include "RPN.hpp"


int main(int ac, char **av){
    if(ac != 2){
        std::cerr << "Error" << std::endl;
        return 1;
    }
    
    RPN rpn;
    std::stack<int> stack;
    int result = rpn.calculate(av[1], stack);
    
    if(result != -1)
        std::cout << result << std::endl;
    
    return 0;
}