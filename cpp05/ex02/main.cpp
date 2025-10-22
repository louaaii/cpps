#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main() 
   {
    std::cout << "\n\033[36m----------- Shrubbery Tests -----------\n\033[0m" << std::endl;

    try
    {
        Bureaucrat              Alfred( "Alfred", 10 );
        ShruberryCreationForm   Plant( "Garden" );
        ShruberryCreationForm   copy( Plant );

        std::cout << std::endl;
        std::cout << copy << std::endl;

        Alfred.signForm( copy );
        Alfred.executeForm( copy );

    }
    catch( Bureaucrat::GradeTooHighException& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch( Bureaucrat::GradeTooLowException& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n\033[36m----------- Robotomy Tests -----------\n\033[0m" << std::endl;
    
    try
    {
        Bureaucrat          Doc( "Doc", 40 );
        RobotomyRequestForm Robot( "Alfred" );
        RobotomyRequestForm copy( Robot );

        std::cout << std::endl;
        std::cout << copy << std::endl;

        srand( time( NULL ) );
        Doc.signForm( copy );
        Doc.executeForm( copy );
    
    }
    catch( Bureaucrat::GradeTooHighException& e )
    {
        std::cout << e.what() << std::endl;
    }
    catch( Bureaucrat::GradeTooLowException& e )
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n\033[36m----------- Presidential Tests -----------\n\033[0m" << std::endl;

    try
    {
        Bureaucrat              President( "President", 5 );
        PresidentialPardonForm  Fool( "The Fool" );
        PresidentialPardonForm  copy( Fool );

        std::cout << std::endl;
        std::cout << copy << std::endl;

        President.signForm( copy );
        President.executeForm( copy );
    
    }
     catch( Bureaucrat::GradeTooHighException& e )
    {
        std::cout << e.what() << std::endl;
    }
    catch( Bureaucrat::GradeTooLowException& e )
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}