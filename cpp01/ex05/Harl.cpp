/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:29:10 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/11 18:47:57 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug( void ) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "F,B+2 → Dash iWS3,4 → B21~F24, → dash b3~f21" << std::endl;
}

void Harl::info( void ) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << " CH : B1 → B2~F4, → B21,F24 → dash b3~f21" << std::endl;
}

void Harl::warning( void ) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "CH : F3 → SSR iWS3,4 → Dash 1 → B3~F24, → Dash b3~f21." << std::endl;
}   

void Harl::error( void ) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "CH : 3+4 → dash iWS3,4 → dash 1 → B3~F24, → dash b3~f21." << std::endl;
}

void Harl::complain( std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for(int i = 0; i < 4; i++) {
        if(levels[i] == level) {
            (this->*functions[i])();
            return;
        }
    }
    std::cout << "WRONG : QI CHARGE" << std::endl;
}