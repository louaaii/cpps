/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmokhtar <lmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:05:07 by lmokhtar          #+#    #+#             */
/*   Updated: 2025/09/11 18:51:12 by lmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

void replaceman(std::string filename, std::string s1, std::string s2)
{
    std::ifstream infile(filename.c_str());
    if (!infile.is_open()) {
        std::cerr << "Error: Could not open input file: " << filename << std::endl;
        return;
    }
    
    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile.is_open()) {
        std::cerr << "Error: Could not create output file: " << filename << ".replace" << std::endl;
        infile.close();
        return;
    }
    
    std::string line;
    while (std::getline(infile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outfile << line;
        if (!infile.eof())
            outfile << std::endl;
    }
    
    infile.close();
    outfile.close();
}

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cerr << "Usage: ./Sed <filename> <string to replace> <replacement string>" << std::endl;
        return 1;
    }
    
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    
    if (s1.empty()) {
        std::cerr << "Error: string to replace cannot be empty" << std::endl;
        return 1;
    }
    
    replaceman(filename, s1, s2);
    
    return 0;
}