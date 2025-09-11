/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:04:53 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/11 17:18:47 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int	main(void)
{
	PhoneBook	phoneBook;
	std::string input;

	while (1)
	{
		std::cout << "Commands: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof() || !input.compare("EXIT")) {
			std::cout << "Exiting ..." << std::endl;
			std::exit(0);
		}
		if (!input.compare("ADD"))
		phoneBook.set_info();
		else if (!input.compare("SEARCH"))
			if (!phoneBook.get_info()) {
				std::cout << "Exiting ..." << std::endl;
				std::exit(0);
			}
		input.clear();
	}
	return (0);
}