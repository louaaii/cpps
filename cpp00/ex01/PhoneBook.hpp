/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:11:09 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/07/18 20:51:47 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int Index;
    public:
        // PhoneBook() : contactCount(0) {}
        // ~PhoneBook() {}

        void AddContact(const Contact& contact);
        void SearchContact() const;
        void Exit() const;
};

#endif