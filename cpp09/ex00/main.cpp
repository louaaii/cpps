#include "BitcoinExchange.hpp"

int main(int ac, char **av){
    if(ac != 2)
        return 0;
    if(av[1] != "input.txt")
        std::cout << "wrong file name" << std::endl;
}


