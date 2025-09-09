/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:15:13 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/09 18:49:43 by lmokhtar         ###   ########.fr       */
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
            std::string str = av[i];
            for(int j = 0; str[j]; j++)
                std::cout << (char)toupper(str[j]);
        }
    }
    std::cout << std::endl;
    return(0);
}
