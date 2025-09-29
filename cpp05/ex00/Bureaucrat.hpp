#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Bureaucrat{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat &operator=(const Bureaucrat &other);
        ~Bureaucrat(); 
        void getName();
        void getGrade();
        void incrementBureaucrat();
        void decrementBureaucrat();
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &other);





#endif