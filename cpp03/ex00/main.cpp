/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:08:37 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/15 18:22:10 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
    
    ClapTrap a("Louai");
    ClapTrap b("Lucas");

    a.attack("Lucas");
    b.takeDamage(0);
    b.beRepaired(0);

    return 0;
}