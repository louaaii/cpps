#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP


#include <cstdlib>
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <sstream>


class Bitcoin{
    private : 
        std::map<std::string, double> data;
    public :
        Bitcoin();
        ~Bitcoin();

        bool ValidDate(const std::string data);
        bool ValidValue(const std::string data);
        void input(const std::string data);
        void ProcessData(std::map<std::string, double> &data);
        
};







#endif