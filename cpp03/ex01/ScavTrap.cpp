/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:43:27 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/16 17:28:03 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " is born" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap "<< name << " has been killed" << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if(energyPoints > 0 && hitPoints > 0){
        std::cout << "ScavTrap " << name << " pummels " << target << " causing " << attackDamage << " points of damage !" << std::endl;
        energyPoints--;
    } 
    else 
        std::cout << "ScavTrap " << name << " can't pummel" << std::endl;
}