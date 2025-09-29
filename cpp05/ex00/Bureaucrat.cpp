#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name) {
    std::cout << "Bureaucrat" << name << "created" << std::endl;
    
}

Bureaucrat::~Bureaucrat(){
    
} 

Bureaucrat::Bureaucrat(const Bureaucrat &other){
    this->grade = other.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other){
    if(this != &other)
        this->grade = other.grade;
    return *this;
}

void getGrade(){
    try
}

void getName(){
}

void incrementBureaucrat(){

}

void decrementBureaucrat(){

}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &other) {
    out << other.grade;
    return out;
}
