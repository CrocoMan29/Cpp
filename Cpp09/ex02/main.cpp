/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 04:41:38 by yismaail          #+#    #+#             */
/*   Updated: 2024/01/16 07:05:57 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av){
	if (ac < 2 || ac > 10000000)
	{
		std::cout << "Error\n";
		return (1);
	}
	PmergeMe pm;
	try
	{
		pm.run(ac - 1, av);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}