/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 19:00:15 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/16 17:32:52 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " gets to see the light" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " is no more" << std::endl;
}

void FragTrap::highFivesGuys(void){
    if(hitPoints > 0)
        std::cout << "FragTrap " << name << " is requesting a high five!" << std::endl;
}

void FragTrap::attack(const std::string& target){
    if(energyPoints > 0 && hitPoints > 0){
        std::cout << "FragTrap " << name << " slashes " << target << " causing " << attackDamage << " points of damage !" << std::endl;
        energyPoints--;
    } 
    else 
        std::cout << "FragTrap " << name << " can't slash" << std::endl;
}
