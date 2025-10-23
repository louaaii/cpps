#include "Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Intern::Intern(const Intern &other){
    (void) other;
}

Intern& Intern::operator=(const Intern& other){
    if(this != &other){}
    return(*this);
}



AForm* Intern::makeForm(const std::string formName, const std::string target){
    std::string validNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    int i = 0;

    while(i < 3 && formName != validNames[i])
        i++;
    switch (i)
    {
    case 0:
        std::cout << GREEN << "Intern creates " << RESET << formName << std::endl;
        return (new ShruberryCreationForm(target));
    case 1:
        std::cout << GREEN << "Intern creates " << RESET << formName << std::endl;
        return(new RobotomyRequestForm(target));
    case 2:
        std::cout << GREEN << "Intern creates " << RESET << formName << std::endl;
        return(new PresidentialPardonForm(target));
    default:
        std::cout << RED << " Invalid Form Name" << RESET << std::endl;
        return (NULL);
    }
}
