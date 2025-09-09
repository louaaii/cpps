/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 19:02:32 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/09 20:19:45 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombieHorde;
    zombieHorde = new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        zombieHorde[i].setName(name);
    }
    return zombieHorde;
}