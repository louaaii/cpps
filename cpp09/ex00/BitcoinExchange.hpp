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
        std::map<std::string, double> database;
    public :
        Bitcoin();
        ~Bitcoin();

        bool ValidDate(const std::string database);
        bool ValidValue(const std::string database);
        void input(const std::string database);
        void ProcessData(const std::string database);
        
};







#endif