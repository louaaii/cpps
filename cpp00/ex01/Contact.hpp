/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:59:52 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/08/14 17:37:56 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class Contact
{
    private:
        std::string Fields[5];
        
        enum FieldsIndex
        {
            FIRST_NAME = 0,
            LAST_NAME,
            NICKNAME,
            PHONE_NUMBER,
            DARKEST_SECRET
        };
    
    public:
        Contact(void);
        ~Contact(void);

        bool set_Contact();
};




#endif