/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 21:05:12 by yismaail          #+#    #+#             */
/*   Updated: 2024/01/08 01:58:48 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <list>
#include "BitcoinExchange.hpp"

void check_leaks()
{
	system("leaks btc");
}

int main(int argc, char **argv)
{
	// check_leaks();

	if (argc != 2)
	{
		std::cout << "Input error\n";
		return (1);
	}

	BitcoinExchange btc;
	try {
		btc.run(argv[1]);
	} catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
//	btc.print_map();

	return (0);
}