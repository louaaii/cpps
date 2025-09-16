/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:08:37 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/16 17:34:30 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
    
    ClapTrap a("Louai");
    ClapTrap b("Lucas");
    ScavTrap c("Cyril");
    ScavTrap d("Majid");
    FragTrap e("Houssein");
    FragTrap f("Talal");

    a.attack("Lucas");
    b.takeDamage(30);
    b.beRepaired(10);
    d.attack("Cyril");
    c.takeDamage(20);
    c.guardGate();
    f.attack("Houssein");
    e.takeDamage(30);
    e.beRepaired(40);
    f.highFivesGuys();
    e.highFivesGuys();
    

    return 0;
}