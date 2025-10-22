#include "AForm.hpp"

AForm::AForm(const std::string name, int SignGrade, int ExecuteGrade) : name(name), SignGrade(SignGrade), ExecuteGrade(ExecuteGrade), _Signed(false) {
    if(SignGrade < 1 || ExecuteGrade < 1)
        throw GradeTooHighException();
    else if(SignGrade > 150 || ExecuteGrade > 150)
        throw GradeTooLowException();
    std::cout << "AForm " << name << " created" << std::endl;
}

AForm::~AForm(){}

AForm::AForm(const AForm &other) : name(other.name), SignGrade(other.SignGrade), ExecuteGrade(other.ExecuteGrade), _Signed(other._Signed){}

AForm& AForm::operator=(const AForm &other){
    if(this != &other)
        this->_Signed = other._Signed;
    return *this;
}

std::string AForm::getAFormName() const{
    return this->name;
}

int AForm::getSignGrade() const {
    return this->SignGrade;
}

int AForm::getExecuteGrade() const {
    return this->ExecuteGrade;
}

bool AForm::isSigned() const {
    return this->_Signed;
}

void AForm::BeSigned(const Bureaucrat &bureaucrat){
    if(bureaucrat.getGrade() <= this->SignGrade)
        this->_Signed = true;
    else
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const AForm &other){
    out << MAGENTA << other.getAFormName() << RESET << ", AForm sign grade " 
        << BOLD << YELLOW << other.getSignGrade() << RESET << ", AForm execute grade "
        << BOLD << YELLOW << other.getExecuteGrade() << RESET << ", is signed: "
        << BOLD << (other.isSigned() ? GREEN "true" : RED "false") << RESET;
    return out;
}