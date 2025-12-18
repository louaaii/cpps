#include "Array.hpp"


int main() {
    
    Array<int> empty;
    std::cout << "empty size: " << empty.size() << std::endl;

    Array<int> arr(5);
    for (int i = 0; i < arr.size(); i++)
        arr[i] = i * 10;
    
    std::cout << "arr: ";
    for (int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    Array<int> copy(arr);
    arr[0] = 999;
    std::cout << "original[0]: " << arr[0] << std::endl;
    std::cout << "copy[0]: " << copy[0] << std::endl;

    Array<int> assigned;
    assigned = arr;
    std::cout << "assigned size: " << assigned.size() << std::endl;

    try {
        std::cout << arr[10] << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << arr[-1] << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
