/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 07:29:50 by yismaail          #+#    #+#             */
/*   Updated: 2023/08/06 09:40:00 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie a("yassine");
	Zombie *z;
	z = newZombie("yassir");

	a.announce();
	z->announce();
	randomChump("youness");
	randomChump("oussama");
	delete z;
	
}