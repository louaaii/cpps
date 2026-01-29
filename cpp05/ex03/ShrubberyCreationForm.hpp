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

class shrubberyCreationForm : public AForm {
    private:
        std::string target;
    public:
        shrubberyCreationForm(const std::string target);
        shrubberyCreationForm(const shrubberyCreationForm &other);
        shrubberyCreationForm &operator=(const shrubberyCreationForm &other);
        ~shrubberyCreationForm();

        void execute(Bureaucrat const & executor) const;
};





#endif