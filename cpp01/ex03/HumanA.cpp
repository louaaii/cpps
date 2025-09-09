/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 20:47:30 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/09 20:58:53 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {}


HumanA::~HumanA(){};

void HumanA::attack() const {
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}