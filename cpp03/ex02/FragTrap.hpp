/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:59:41 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/15 19:03:54 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP


#include "ClapTrap.hpp"


class FragTrap : public ClapTrap {
    public:
        FragTrap(std::string name);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif