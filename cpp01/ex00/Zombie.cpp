/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:58:42 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/09 19:07:45 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

    
Zombie::Zombie(std::string name)
{
    _name = name;
    std::cout << _name << " is born!" << std::endl;
}


Zombie::~Zombie()
{
    std::cout << _name << " is dead!" << std::endl;
}

void Zombie::announce() const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}