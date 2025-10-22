#ifndef AForm_HPP
#define AForm_HPP

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

class AForm{
    private:
        const std::string name;
        const int SignGrade;
        const int ExecuteGrade;
        bool _Signed;

    public:
        AForm(const std::string name, int SignGrade, int ExecuteGrade);
        AForm(const AForm &other);
        AForm &operator=(const AForm &other);
        ~AForm();

        std::string getAFormName() const;
        int getSignGrade() const;
        int getExecuteGrade() const;
        bool isSigned() const;
        void BeSigned(const Bureaucrat &bureaucrat);

        class FormNotSignedException : public std::exception {
            public:
                const char* what() const throw() {
                    return RED BOLD "Form Not Signed!" RESET;
                }
        };
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
        virtual void execute(const Bureaucrat &executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, const AForm &other);








#endif