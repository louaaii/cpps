/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 20:46:28 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/09 21:01:06 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

private:
    std::string _name;
    Weapon& _weapon;

public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void attack() const;
};

#endif