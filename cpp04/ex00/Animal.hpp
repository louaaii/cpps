/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 19:11:47 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/16 18:36:32 by lmokhtar         ###   ########.fr       */
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
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType() const;
};

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        virtual void makeSound() const;
        std::string wronggetType() const;
};

#endif
