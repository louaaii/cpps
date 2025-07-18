/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:04:53 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/07/18 20:51:34 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook PhoneBook;
    std::string command;
    
    while(1)
    {   
        if(std::cin.eof())
        {
            std::cout << "Exiting." << std::endl;
            exit(0);
        }
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if(!command.compare("ADD"))
            PhoneBook.AddContact(Contact());
        else if(!command.compare("SEARCH"))
            PhoneBook.SearchContact();
        else if(!command.compare("EXIT"))
            PhoneBook.Exit();
        command.clear();
    }   
}