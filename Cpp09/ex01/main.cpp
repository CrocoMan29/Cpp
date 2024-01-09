/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:05:08 by yismaail          #+#    #+#             */
/*   Updated: 2024/01/09 18:07:32 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "ERROR" << std::endl;
	}
	RPN oper;
	try
	{
		oper.run(av);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}