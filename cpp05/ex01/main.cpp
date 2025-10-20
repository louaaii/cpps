#include "Bureaucrat.hpp"

int main() {
    try{
        Bureaucrat a("Albrecht", 2);
        Bureaucrat b("Jens", 148);
        Form contract("TopSecret", 50, 25);
     
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << contract << std::endl;

        a.signForm(contract);
        std::cout << contract << std::endl;

        b.signForm(contract);
    }
    catch ( Bureaucrat::GradeTooHighException &e )
    {
        std::cout << e.what() << std::endl;
    }
    catch ( Bureaucrat::GradeTooLowException &e )
    {
        std::cout << e.what() << std::endl;
    }
    catch ( Form::GradeTooHighException &e )
    {
        std::cout << e.what() << std::endl;
    }
    catch ( Form::GradeTooLowException &e )
    {
        std::cout << e.what() << std::endl;
    }
}