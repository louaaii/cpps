#include "Form.hpp"

Form::Form(const std::string name, int SignGrade, int ExecuteGrade) : name(name), SignGrade(SignGrade), ExecuteGrade(ExecuteGrade), _Signed(false) {
    if(SignGrade < 1 || ExecuteGrade < 1)
        throw GradeTooHighException();
    else if(SignGrade > 150 || ExecuteGrade > 150)
        throw GradeTooLowException();
    std::cout << "Form " << name << " created" << std::endl;
}

Form::~Form(){}

Form::Form(const Form &other) : name(other.name), SignGrade(other.SignGrade), ExecuteGrade(other.ExecuteGrade), _Signed(other._Signed){}

Form& Form::operator=(const Form &other){
    if(this != &other)
        this->_Signed = other._Signed;
    return *this;
}

std::string Form::getFormName() const{
    return this->name;
}

int Form::getSignGrade() const {
    return this->SignGrade;
}

int Form::getExecuteGrade() const {
    return this->ExecuteGrade;
}

bool Form::isSigned() const {
    return this->_Signed;
}

void Form::BeSigned(const Bureaucrat &bureaucrat){
    if(bureaucrat.getGrade() > this->SignGrade)
        throw GradeTooLowException();
    else
        this->_Signed = true;
}

std::ostream &operator<<(std::ostream &out, const Form &other){
    out << MAGENTA << other.getFormName() << RESET << ", form sign grade " 
        << BOLD << YELLOW << other.getSignGrade() << RESET << ", form execute grade "
        << BOLD << YELLOW << other.getExecuteGrade() << RESET << ", is signed: "
        << BOLD << (other.isSigned() ? GREEN "true" : RED "false") << RESET;
    return out;
}