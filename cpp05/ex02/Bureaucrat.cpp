#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade) {
    if(grade < 1)
        throw GradeTooHighException();
    else if(grade > 150)
        throw GradeTooLowException();    
    std::cout << "Bureaucrat " << name << " created" << std::endl;
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat &other){
    this->grade = other.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other){
    if(this != &other)
        this->grade = other.grade;
    return *this;
}

std::string Bureaucrat::getName() const{
    return this->name;
}

int Bureaucrat::getGrade() const {
    return this->grade;
}

void Bureaucrat::incrementBureaucrat(){
    if(grade - 1 < 1)
        throw GradeTooHighException();
    else
        grade--;
}

void Bureaucrat::decrementBureaucrat(){
    if(grade + 1 > 150)
        throw GradeTooLowException();
    else 
        grade++;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &other){
    out << CYAN << other.getName() << RESET << ", bureaucrat grade " 
        << BOLD << YELLOW << other.getGrade() << RESET;
    return out;
}


void Bureaucrat::signForm(AForm &form) const {

    try{
        form.BeSigned(*this);
    }
    catch(const std::exception& e)
    {
        std::cout << MAGENTA << name << " couldn't sign " << RESET << form.getAFormName()
                  << " because " << e.what() << std::endl;
        return;
    }
    std::cout << MAGENTA << name << " signed " << RESET << form.getAFormName() << std::endl;

}

void Bureaucrat::executeForm(AForm const & form) const {
    try{
        form.execute(*this);
    }
    catch(const std::exception& e)
    {
        std::cout << MAGENTA << name << " couldn't execute " << RESET << form.getAFormName()
                  << " because " << e.what() << std::endl;
        return;
    }
    std::cout << MAGENTA << name << " executed " << RESET << form.getAFormName() << std::endl;
}
