/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 19:14:42 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/16 20:02:43 by lmokhtar         ###   ########.fr       */
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
    this->type = other.type;
    this->brain = new Brain(*(other.brain)); 
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other) {
        Animal::operator=(other);
        this->type = other.type;
        delete this->brain; 
        this->brain = new Brain(*(other.brain)); 
    }
    return *this;
}

