#include "BitcoinExchange.hpp"


Bitcoin::Bitcoin(){}


Bitcoin::~Bitcoin(){}


bool Bitcoin::ValidDate(const std::string date){
    if(date.length() != 10)
        return false;
    if(date[4] != '-' || date[7] != '-')
        return false;
    std::string ys = date.substr(0, 4);
    std::string ms = date.substr(5, 2);
    std::string ds = date.substr(8, 2);

    char *end;
    long year = std::strtol(ys.c_str(), &end, 10);
    long month = std::strtol(ms.c_str(), &end, 10);
    long day = std::strtol(ds.c_str(), &end, 10);

    if(year < 1000 || year > 9999)
        return false;
    if(month < 1 || month > 12)
        return false;
    if(day < 1 || day > 31)
        return false;

    return true;
}


bool Bitcoin::ValidValue(const std::string value){

    char *end;
    double valid = std::strtod(value.c_str(), &end);
    if(end == value.c_str() || *end == '\n')
        return false;
    if(valid > -1 && valid < 1001)
        return true;
    return false;
}


void Bitcoin::input(const std::string data){
    
    std::ifstream fil(data);
    if(!fil.is_open()){
        std::cerr << "Couldn't open file: " << data;
        return;
    }
    std::string line;
    while (std::getline(fil, line))
    {
        std::cout << line << std::endl;
    }
    fil.close();
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



