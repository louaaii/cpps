/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 19:11:17 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/16 18:28:49 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "=== Testing Abstract Animal Class ===" << std::endl;
    
    // Animal animal;  // ERROR: Cannot instantiate abstract class
    
    Animal* animals[4];
    
    std::cout << "Creating animals..." << std::endl;
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();
    
    std::cout << "\nMaking sounds..." << std::endl;
    for (int i = 0; i < 4; i++) {
        animals[i]->makeSound();
    }
    
    std::cout << "\nDeleting animals..." << std::endl;
    for (int i = 0; i < 4; i++) {
        delete animals[i];
    }
    
    return 0;
}