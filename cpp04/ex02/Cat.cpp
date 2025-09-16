/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 19:13:49 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/16 20:02:50 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
    type = "Cat";
    brain = new Brain();  
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() {
    delete brain;  
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow " << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
    this->type = other.type;
    this->brain = new Brain(*(other.brain)); 
}

Cat &Cat::operator=(const Cat &other) {
    if (this != &other) {
        Animal::operator=(other);
        this->type = other.type;
        delete this->brain; 
        this->brain = new Brain(*(other.brain));
    }
    return *this;
}

