#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("Presidential Pardon Form", 25, 5), target(target){
    std::cout << "PresidentialPardonForm created" <<  std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other){
    this->target = other.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
    if(this != &other)
        this->target = other.target;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if(!this->isSigned())
        throw(AForm::FormNotSignedException());
    if(executor.getGrade() > this->getExecuteGrade())
        throw(AForm::GradeTooLowException());
    std::cout << target << GREEN <<" has been pardoned by Zaphod Beeblebrox" << RESET << std::endl;
}