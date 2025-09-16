/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 19:13:49 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/16 20:15:30 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow " << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << " Cat copy constructor called" << std::endl;
    this->type = other.type;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << " Cat assignment operator called" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}


WrongCat::WrongCat() {
    this->type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::wrongmakeSound() const {
    std::cout << "Wrong Meow " << std::endl;
}
