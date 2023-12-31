/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:27:54 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/09 16:48:25 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int ac, char **av)
{
	if (ac != 2)
    {
        std::cerr << "Invalid number of arguments" << std::endl;
        return 1;
    }
    std::string literal = av[1];
    ScalarConverter::convert(literal);

    return 0;
}