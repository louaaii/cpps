/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 19:11:47 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/16 20:06:56 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    protected:
        std::string type;
    
    public:
        Animal();
        Animal(const Animal& other);           
        Animal& operator=(const Animal& other);
        virtual ~Animal();
        virtual void makeSound() const = 0;
        std::string getType() const;
};

#endif
