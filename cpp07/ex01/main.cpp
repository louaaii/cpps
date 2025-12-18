#include "iter.hpp"




int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    
    std::cout << "Original: ";
    iter(arr, 5, print<int>);     
    
    iter(arr, 5, increment<int>); 
    
    std::cout << "After increment: ";
    iter(arr, 5, print<int>);     
    
    return 0;
}