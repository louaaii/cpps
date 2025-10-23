#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
    std::cout << BOLD YELLOW "\n===== Testing Intern Form Creation =====\n" RESET << std::endl;
    
    Intern someRandomIntern;
    AForm* form1;
    AForm* form2;
    AForm* form3;
    AForm* form4;

    form1 = someRandomIntern.makeForm("shrubbery creation", "Garden");
    form2 = someRandomIntern.makeForm("robotomy request", "Bender");
    form3 = someRandomIntern.makeForm("presidential pardon", "Criminal");
    
    std::cout << CYAN "\n- Testing invalid form name -\n" RESET << std::endl;
    form4 = someRandomIntern.makeForm("world domination", "Earth");
    
    if (form1 && form2 && form3) {
        std::cout << CYAN "\n- Testing forms with bureaucrats -\n" RESET << std::endl;
        
        try {
            Bureaucrat boss("CEO", 1);
            Bureaucrat manager("Manager", 40);
            Bureaucrat intern("Intern", 140);
            
            std::cout << "\nCreated bureaucrats:" << std::endl;
            std::cout << boss << std::endl;
            std::cout << manager << std::endl;
            std::cout << intern << std::endl;
            
            std::cout << MAGENTA "\nTesting Shrubbery Form:" RESET << std::endl;
            boss.signForm(*form1);
            intern.executeForm(*form1);  // no
            
            std::cout << MAGENTA "\nTesting Robotomy Form:" RESET << std::endl;
            manager.signForm(*form2);
            manager.executeForm(*form2); // yes
            
            std::cout << MAGENTA "\nTesting Presidential Pardon:" RESET << std::endl;
            manager.signForm(*form3);    // fails
            boss.signForm(*form3);       // yes
            manager.executeForm(*form3); // no
            boss.executeForm(*form3);    // yes
        }
        catch (std::exception &e) {
            std::cout << RED "Exception: " << e.what() << RESET << std::endl;
        }
    }
    
    std::cout << CYAN "\n- Cleaning up -\n" RESET << std::endl;
    delete form1;
    delete form2;
    delete form3;
    if (form4) delete form4;
    
    return 0;
}
