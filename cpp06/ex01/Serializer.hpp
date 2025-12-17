#ifndef CONVERTER_HPP
#define CONVERTER_HPP


#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <limits>
#include <string>
#include <iomanip>
#include <stdint.h>

struct Data {
    int     n;
    float   f; 
    char    c;
};

class Serializer{

    private:
        Serializer();
        Serializer(const Serializer &other);
        Serializer &operator=(const Serializer &other);
        virtual ~Serializer();

    public :
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

};



#endif