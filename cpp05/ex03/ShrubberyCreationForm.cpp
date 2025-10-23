#include "ShrubberyCreationForm.hpp"
#include <fstream>


ShruberryCreationForm::ShruberryCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137),target(target){
    std::cout << "ShruberryCreationForm created" << std::endl;
}

ShruberryCreationForm::~ShruberryCreationForm(){}

ShruberryCreationForm::ShruberryCreationForm(const ShruberryCreationForm &other) : AForm(other){
    this->target = other.target;
}

ShruberryCreationForm &ShruberryCreationForm::operator=(const ShruberryCreationForm &other){
    if(this != &other)
        this->target = other.target;
    return *this;
}

void ShruberryCreationForm::execute(Bureaucrat const & executor) const{
    if(!this->isSigned())
        throw AForm::FormNotSignedException();
    if(executor.getGrade() > this->getExecuteGrade())
        throw AForm::GradeTooLowException();
    std::ofstream outfile;
    outfile.open((this->target + "_shrubbery").c_str());
    outfile << "       _-_" << std::endl;
    outfile << "    /~~   ~~\\" << std::endl;
    outfile << " /~~         ~~\\" << std::endl;
    outfile << "{               }" << std::endl;
    outfile << " \\  _-     -_  /" << std::endl;
    outfile << "   ~  \\\\ //  ~" << std::endl;
    outfile << "_- -   | | _- _" << std::endl;
    outfile << "  _ -  | |   -_" << std::endl;
    outfile << "      // \\\\" << std::endl;
    outfile.close();
}


