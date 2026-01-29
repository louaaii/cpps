#include "ShrubberyCreationForm.hpp"
#include <fstream>


shrubberyCreationForm::shrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137),target(target){
    std::cout << "shrubberyCreationForm created" << std::endl;
}

shrubberyCreationForm::~shrubberyCreationForm(){}

shrubberyCreationForm::shrubberyCreationForm(const shrubberyCreationForm &other) : AForm(other){
    this->target = other.target;
}

shrubberyCreationForm &shrubberyCreationForm::operator=(const shrubberyCreationForm &other){
    if(this != &other)
        this->target = other.target;
    return *this;
}

void shrubberyCreationForm::execute(Bureaucrat const & executor) const{
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


