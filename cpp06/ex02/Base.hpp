/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 18:16:54 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/12/17 18:40:38 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <limits>
#include <string>
#include <iomanip>

class Base{
    public:
        virtual ~Base(){}
        static Base * generate(void);
        static void identify(Base* p);
        static void identify(Base& p);
};

class A : public Base{};

class B : public Base{};

class C : public Base{};


#endif