#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
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


class Bureaucrat;

class Form{
    private:
        const std::string name;
        const int SignGrade;
        const int ExecuteGrade;
        bool _Signed;

    public:
        Form(const std::string name, int SignGrade, int ExecuteGrade);
        Form(const Form &other);
        Form &operator=(const Form &other);
        ~Form();

        std::string getFormName() const;
        int getSignGrade() const;
        int getExecuteGrade() const;
        bool isSigned() const;
        void BeSigned(const Bureaucrat &bureaucrat);

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw() {
                    return RED BOLD "Grade Too High!" RESET;
                }
        };
        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw() {
                    return RED BOLD "Grade Too Low!" RESET;
                }
        };
};

std::ostream &operator<<(std::ostream &out, const Form &other);








#endif