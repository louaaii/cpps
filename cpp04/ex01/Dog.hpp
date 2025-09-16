/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 19:14:18 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/16 18:06:13 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP 
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
    Brain* brain;  
    
public:
    Dog();
    Dog(const Dog& other);           
    Dog& operator=(const Dog& other); 
    ~Dog();
    void makeSound() const;
    void setBrainIdea(int index, std::string idea);
    std::string getBrainIdea(int index) const;
    Brain* getBrain() const { return brain; }
};

#endif