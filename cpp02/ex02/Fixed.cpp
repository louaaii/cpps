/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 18:38:13 by marvin            #+#    #+#             */
/*   Updated: 2025/09/13 18:38:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {    
    std::cout << "Copy constructor called" << std::endl;
    this->value = other.getRawBits();
}

Fixed::Fixed(const int i) {
    std::cout << "Int constuctor called" << std::endl;
    this->value = i << this->fractionalBits;
}

Fixed::Fixed(const float f) {
    std::cout << "Float constuctor called" << std::endl;
    this->value = roundf(f * (1 << this->fractionalBits));
}

Fixed &Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other)
        this->value = other.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits(int const raw) {
    this->value = raw;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(this->value) / (1 << this->fractionalBits);
}

int Fixed::toInt(void) const {
    return this->value >> this->fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a.value > b.value) ? a : b;
}

Fixed &Fixed::operator++() {
    this->value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    ++(*this);
    return temp;
}
