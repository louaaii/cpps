#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m" 

class ShruberryCreationForm : public AForm {
    private:
        std::string target;
    public:
        ShruberryCreationForm(const std::string target);
        ShruberryCreationForm(const ShruberryCreationForm &other);
        ShruberryCreationForm &operator=(const ShruberryCreationForm &other);
        ~ShruberryCreationForm();

        void execute(Bureaucrat const & executor) const;
};





#endif