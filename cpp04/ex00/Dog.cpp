/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 19:14:42 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/16 20:15:39 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof " << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << " Dog copy constructor called" << std::endl;
    this->type = other.type;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << " Dog assignment operator called" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

