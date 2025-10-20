#include "Bureaucrat.hpp"

int main() {
    try
    {
        Bureaucrat a("Albrecht", 2);
        Bureaucrat b("Jens", 148);
        // Bureaucrat d("gg", 149);
        // Bureaucrat f("ii", 151);
     
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        
        a.incrementBureaucrat();
        // a.incrementBureaucrat();
        b.decrementBureaucrat();
        b.decrementBureaucrat();
        // b.decrementBureaucrat();

        std::cout << a << std::endl;
        std::cout << b << std::endl;
    }
    catch ( Bureaucrat::GradeTooHighException &e )
    {
        std::cout << e.what() << std::endl;
    }
    catch ( Bureaucrat::GradeTooLowException &e )
    {
        std::cout << e.what() << std::endl;
    }
    // try
    // {
    //     std::cout << MAGENTA << "\n--- Testing copy and assignment operator ---\n" << RESET << std::endl;
     
    //     Bureaucrat doc("Doc", 30);
    //     Bureaucrat copyDoc(doc);
    //     Bureaucrat assignemnt("AssignDoc", 150);
    //     assignemnt = doc;

    //     std::cout << "Original doc: " << doc << std::endl;
    //     std::cout << "Copy of doc: " << copyDoc << std::endl;
    //     std::cout << "Assingment: " << assignemnt << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    return 0;
}