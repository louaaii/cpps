/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 20:47:46 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/09 20:56:45 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP  

#include "Weapon.hpp"

class HumanB{
    private:
        std::string _name;
        Weapon* _weapon;
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack();

        void setWeapon(Weapon& weapon);};

#endif