/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 19:13:22 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/16 19:53:03 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP 
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat();
        ~Cat();
        void makeSound() const;
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
};

class WrongCat : public WrongAnimal{
    public:
        WrongCat();
        ~WrongCat();
        void wrongmakeSound() const;
};

#endif
