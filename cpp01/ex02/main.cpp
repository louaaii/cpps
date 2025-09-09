/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 20:24:16 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/09 20:39:19 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {

    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "The address of the string variable is: " << &string << std::endl;
    std::cout << "The address held by stringPTR is: " << stringPTR << std::endl;
    std::cout << "The address held by stringREF is: " << &stringREF << std::endl;
    std::cout << "The value of the string variable is: " << string << std::endl;
    std::cout << "The value pointed to by stringPTR is: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF is: " << stringREF << std::endl;

    return 0;
}