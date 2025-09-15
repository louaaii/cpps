/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:09:39 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/15 19:03:20 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(100), energyPoints(100), attackDamage(30) {
    std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    if(energyPoints > 0 && hitPoints > 0){
        std::cout << "Claptrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage !" << std::endl;
        energyPoints--;
    } 
    else 
        std::cout << "ClapTrap " << name << " can't attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << name << " takes " << amount << " damage" << std::endl;
    if(hitPoints > 0)
        hitPoints -= amount;
    else    
        std::cout << "ClapTrap " << name << " is already dead" << std::endl;        
}

void ClapTrap::beRepaired(unsigned int amount){
    if(energyPoints && hitPoints > 0){
        std::cout << "ClapTrap " << name << " repairs for " << amount << std::endl;
        hitPoints += amount;
        energyPoints--;
    } 
    else 
        std::cout << "ClapTrap " << name << " can't repair" << std::endl;
    
}

