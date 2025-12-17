#include "Base.hpp"

int main()
{  
    srand(time(NULL));
    Base* basePtr = Base::generate();

    std::cout << "Identifying by pointer: ";
    Base::identify(basePtr);

    std::cout << "Identifying by reference: ";
    Base::identify(*basePtr);

    delete basePtr;
    return 0;
    
}