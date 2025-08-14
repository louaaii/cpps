/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:04:53 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/08/14 17:30:07 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook PhoneBook;
    std::string command;
    
    while(1)
    {   
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if(!command.compare("ADD"))
            PhoneBook.set_info();
        else if(!command.compare("SEARCH"))
            PhoneBook.get_info();
        else if(!command.compare("EXIT") || std::cin.eof())
        {
            std::cout << "Exiting." << std::endl;
            std::exit(0);
        }
        command.clear();
    }   
    return 0;
}