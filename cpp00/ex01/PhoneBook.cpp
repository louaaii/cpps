/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:19:29 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/07/18 20:44:03 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::Exit() const
{
    std::cout << "Exiting the PhoneBook application." << std::endl;
    exit(0);
}

void PhoneBook::AddContact(const Contact& contact)
{
    if (Index < 8)
    {
        contacts[Index] = contact;
        
        Index++;
    }
    else
    {
        contacts[Index % 8] = contact;
        Index++;
    }
}

// void PhoneBook::SearchContact() const
// {
//     for (int i = 0; i < Index; i++)
//     {
//         std::cout << "Contact " << i + 1 << ":" << std::endl;
//         std::cout << "First Name: " << contacts[i].GetFirstName() << std::endl;
//         std::cout << "Last Name: " << contacts[i].GetLastName() << std::endl;
//         std::cout << "Nickname: " << contacts[i].GetNickname() << std::endl;
//         std::cout << "Phone Number: " << contacts[i].GetPhoneNumber() << std::endl;
//         std::cout << "Darkest Secret: " << contacts[i].GetDarkestSecret() << std::endl;
//     }
// }

