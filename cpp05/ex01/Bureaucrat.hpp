#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
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

class Form;

class Bureaucrat{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat &operator=(const Bureaucrat &other);
        ~Bureaucrat(); 
        
        std::string getName() const;
        int getGrade() const;
        void incrementBureaucrat();
        void decrementBureaucrat();
        void signForm(Form &form) const;
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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &other);

#endif