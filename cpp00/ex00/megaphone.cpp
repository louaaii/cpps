/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:15:13 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/07/18 18:26:10 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if(ac < 2)
        std::cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE*";
    else
    {
        for(int i = 1; i < ac; i++)
        {
            for(int j = 0; av[i][j]; j++)
                std::cout << (char)toupper(av[i][j]);
        }
    }
    std::cout << std::endl;
    return(0);
}
