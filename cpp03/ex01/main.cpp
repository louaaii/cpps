/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:08:37 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/15 18:55:41 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {
    
    ClapTrap a("Louai");
    ClapTrap b("Lucas");
    ScavTrap c("Cyril");
    ScavTrap d("Majid");

    a.attack("Lucas");
    b.takeDamage(20);
    b.beRepaired(10);
    d.attack("Cyril");
    c.takeDamage(20);
    c.guardGate();
    

    return 0;
}