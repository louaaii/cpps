/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:11:09 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/11 17:19:22 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int		_index;
		bool	_full;
	public:
		PhoneBook();
		~PhoneBook();
		void	set_info();
		bool	get_info();
		void	print_tab();
		std::string	formatTab(const std::string &str) const;
};

#endif