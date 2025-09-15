/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 19:11:17 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/15 19:24:16 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

    
int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;
    delete i;
    
    return 0;
}