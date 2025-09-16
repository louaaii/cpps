/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 19:14:42 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/16 20:14:31 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
    type = "Dog";
    brain = new Brain();  
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() {
    delete brain;  
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof " << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << " Dog copy constructor called" << std::endl;
    this->type = other.type;
    this->brain = new Brain(*(other.brain)); 
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << " Dog assignment operator called" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        this->type = other.type;
        delete this->brain; 
        this->brain = new Brain(*(other.brain)); 
    }
    return *this;
}

