/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:06:53 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/08/14 17:53:06 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    for(int i = 0; i < 5; i++)
        this->Fields[i] = std::string();
}

Contact::~Contact(){}

bool Contact::set_Contact()
{
    for(int i = 0; i < 5; i++)
    {
        while(1)
        {
            std::cout << "Enter " << Fields[i] << ": ";
            std::getline(std::cin, this->Fields[i]);
            if (!this->Fields[i].empty())
                break;
            if(std::cin.eof())
                return false;
            break;
        }
    }
    std::cout << "Contact set successfully." << std::endl;
    return true;
}
