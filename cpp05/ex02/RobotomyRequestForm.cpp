#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45),target(target){
    std::cout << "RobotomyRequestForm created" <<  std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other){
    this->target = other.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
    if(this != &other)
        this->target = other.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if(!this->isSigned())
        throw(AForm::FormNotSignedException());                                                                                                                                                                                                                                                                                        
    if(executor.getGrade() > this->getExecuteGrade())
        throw(AForm::GradeTooLowException());
    std::cout << "Drilling noise" << std::endl;
    if(rand() % 2)
        std::cout << target << BLUE  << " has been robotomized successfully" << RESET << std::endl;
    else
        std::cout << RED << "Robotomy failed on " << RESET << target << std::endl;
}
