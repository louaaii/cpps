/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 19:01:57 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/09 20:10:38 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    Zombie *horde = zombieHorde(N, "LUCAS");
    for(int i = 0; i < N; i++)
        horde[i].announce();
    delete[] horde;
    return 0;
}