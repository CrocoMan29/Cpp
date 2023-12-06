/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:31:21 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/06 16:35:24 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(ScalarConverter const &rfh)
{
	(void)rfh;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &obj)
{
	(void)obj;
	return(*this);
}

ScalarConverter::~ScalarConverter(){}

void ScalarConverter::convert(char *av)
{
	checkArg(av);
	// char c = static_cast<char>(*av);
	// int a = static_cast<int>(*av);
	// // float f;
	// // double d;
	// std::cout << c << std::endl;
	// std::cout << a << std::endl;
}

int	check_char(std::string str)
{
	
	size_t buff = 0;
	if (str == "nan" || str == "+inf" || str == "-inf" || str == "nanf" || str == "+inff" || str == "-inff" || str.compare("nan"))
		return 2;
	int conv_v = std::stoi(str, &buff);
	if (buff != str.length())
		return (0);
	if (conv_v >= 32 && conv_v <= 126)
		return(1);
	return (2);
}

void checkArg(char *str)
{
	std::string s(str);

	if (check_char(s) == 1)
	{
		int v = std::stoi(s);
		char c = static_cast<unsigned char>(v);
		
		std::cout << "char: " << c << std::endl;
	}
	else if (check_char(s) == 2)
	{
		std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: Impossible" << std::endl;
	//****************************************************
	
	// else if ()		
	// if ()
}
