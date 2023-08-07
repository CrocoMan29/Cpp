/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 09:45:31 by yismaail          #+#    #+#             */
/*   Updated: 2023/08/07 02:06:58 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N > 0)
	{
		Zombie *zombies = new Zombie[N];
		for (int i = 0; i < N; i++)
		{
			zombies[i].setName(name);
		}
		return (zombies); 
	}
	return NULL;
}