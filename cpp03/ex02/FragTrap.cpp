/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 19:00:15 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/15 19:04:51 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap " << name << " gets to see the light" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " is no more" << std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout << "FragTrap " << name << " is requesting a high five!" << std::endl;
}
