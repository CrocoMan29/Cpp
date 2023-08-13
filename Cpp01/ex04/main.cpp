/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:13:38 by yismaail          #+#    #+#             */
/*   Updated: 2023/08/13 12:16:26 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <unistd.h>

void replaceStrFile(std::string& file, std::string& s1, std::string& s2)
{
	(void)s1;
	(void)s2;
	std::ifstream infile;

	if (s1.empty())
		return ;		
	infile.open(file);
	if (!infile.is_open())
	{
		std::cerr << "cannot open this file " << std::endl;
		return ;
	}
	
	std::ofstream outfile((file + ".replace").c_str());
	if (!outfile)
	{
		std::cerr << "cannot open this file " << std::endl;
		return ;
	}
	std::string line;
	while (getline(infile, line))
	{
		std::string modifiedline;
		size_t pos = 0;
        size_t lastPos = 0;

        while ((pos = line.find(s1, lastPos)) != std::string::npos) {
            modifiedline += line.substr(lastPos, pos - lastPos);
            modifiedline += s2;
            lastPos = pos + s1.length();
        }
		modifiedline += line.substr(lastPos);
		outfile << modifiedline << std::endl;
	}
	infile.close();
	outfile.close();
}

int main (int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << av[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	
	replaceStrFile(filename, s1, s2); 
		
}