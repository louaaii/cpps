#include "BitcoinExchange.hpp"


Bitcoin::Bitcoin(){}


Bitcoin::~Bitcoin(){}


bool Bitcoin::ValidDate(const std::string data){
    if(data.length() != 10)
        return false;
    if(data[4] != '-' || data)
}


bool Bitcoin::ValidValue(const std::string data){
}


void Bitcoin::input(const std::string datab){

}


void Bitcoin::ProcessData(std::map<std::string, double> &data){
    std::ifstream fil("data.csv");
    if(!fil.is_open()){
        std::cerr << "Couldn't open file";
        return;
    }
    std::string line;
    std::getline(fil, line);
    while (std::getline(fil, line))
    {
        size_t index = line.find(',');
        if (index == std::string::npos)
            continue;
        std::string date = line.substr(0, index);
        std::string ratestr = line.substr(index + 1);

        char *end;
        double rate = std::strtod(ratestr.c_str(), &end);
        data[date] = rate;
    }
    fil.close();
}



