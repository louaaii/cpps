/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:59:52 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/11 17:25:52 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include <cstdlib>
# include <sstream>

class Contact{
	private:
		static std::string	_fields[5];
		std::string			_info[5];

		enum Field {
			FirstName = 0,
			LastName,
			NickName,
			PhoneNumber,
			DarkestSecret
		};
	public:
		Contact();
		~Contact();

		bool		set_contact();
		void		get_contact();
		void		PrintTab(int index) const;
		std::string	formatTab(const std::string &str) const;
};

#endif