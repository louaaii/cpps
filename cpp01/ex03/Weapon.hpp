/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 20:41:37 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/09 21:01:22 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>


class Weapon{
    
private:
    std::string type;

public:
    const std::string& getType() const;
    void setType(std::string type);
    Weapon(std::string type);
    ~Weapon();
    
};



#endif