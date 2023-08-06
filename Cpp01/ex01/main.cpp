/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 09:59:40 by yismaail          #+#    #+#             */
/*   Updated: 2023/08/06 10:05:34 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
using namespace std;
int	main(void)
{
	int	n;
	string name;

	n = 7;
	name = "Bob";
	cout	<< endl
			<< "----------------------------"	<< endl
			<< "|   Zombie Constructor     |"	<< endl
			<< "----------------------------"	<< endl
			<< endl;

	Zombie *zombie_horde;
	zombie_horde = zombieHorde(n, "Nani");

	cout	<< endl
			<< "-------------------------"	<< endl
			<< "| Zombie Horde Announce |"	<< endl
			<< "-------------------------"	<< endl
			<< endl;

	for (int i = 0; i < n; i++)
		zombie_horde[i].announce();

	cout	<< endl
			<< "-------------------------"	<< endl
			<< "|    Zombie Set Name    |"	<< endl
			<< "-------------------------"	<< endl
			<< endl;

	for (int i = 0; i < n; i++)
		zombie_horde[i].setName(name);

	cout	<< endl
			<< "-------------------------"	<< endl
			<< "| Zombie Horde Announce |"	<< endl
			<< "-------------------------"	<< endl
			<< endl;

	for (int i = 0; i < n; i++)
		zombie_horde[i].announce();


	cout	<< endl
			<< "---------------------"	<< endl
			<< "| Zombie Horde Kill |"	<< endl
			<< "---------------------"	<< endl
			<< endl;

	delete[] zombie_horde;
	return (0);
}