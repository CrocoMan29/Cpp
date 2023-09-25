/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 09:59:40 by yismaail          #+#    #+#             */
/*   Updated: 2023/09/23 23:20:07 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
using namespace std;
int	main(void)
{
	Zombie *horde;
	int n = 5;
	horde = zombieHorde(n, "yassir");
	for (int i=0; i<n; ++i)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}