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


class ScalarConverter{

    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter &operator=(const ScalarConverter &other);
        virtual ~ScalarConverter();

    public :
        static void convert(std::string value);
		static void toChar(double value);
		static void toInt(double value);
		static void toFloat(double value);
		static void toDouble(double value);
		static double parseInput(std::string const &value);

};



#endif