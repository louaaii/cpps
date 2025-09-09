/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:57:22 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/09 20:19:52 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class Zombie {
private:
    std::string _name;
    
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();

    void setName(std::string name);
    void announce() const;
};

Zombie* zombieHorde(int N, std::string name);

#endif