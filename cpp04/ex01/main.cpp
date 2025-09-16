/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 19:11:17 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/16 20:01:05 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "=== Creating Array of Animals ===" << std::endl;
    
    const int arraySize = 10;
    Animal* animals[arraySize];
    
    std::cout << "\n--- Creating Dogs ---" << std::endl;
    for (int i = 0; i < arraySize / 2; i++) {
        animals[i] = new Dog();
    }
    
    std::cout << "\n--- Creating Cats ---" << std::endl;
    for (int i = arraySize / 2; i < arraySize; i++) {
        animals[i] = new Cat();
    }
    
    std::cout << "\n--- Testing Polymorphism ---" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        std::cout << "Animal " << i << " (" << animals[i]->getType() << "): ";
        animals[i]->makeSound();
    }
    
    std::cout << "\n--- Deleting Animals (as Animal*) ---" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        std::cout << "Deleting animal " << i << "..." << std::endl;
        delete animals[i]; 
    }
    
    std::cout << "\n=== Program Complete ===" << std::endl;
    return 0;
}