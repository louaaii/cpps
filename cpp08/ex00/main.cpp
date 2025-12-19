#include "easyfind.hpp"


int main() {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    try {
        std::vector<int>::iterator it = easyfind(vec, 3);
        std::cout << "Found: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << "Not found" << std::endl;
    }

    try {
        easyfind(vec, 10);
    } catch (std::exception &e) {
        std::cout << "Not found" << std::endl;
    }

    return 0;
}
