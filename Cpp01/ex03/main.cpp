/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 06:57:25 by yismaail          #+#    #+#             */
/*   Updated: 2023/09/25 21:01:31 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon slah = Weapon("hajra");
	HumanA ana("yassir", slah);
	ana.Attack();
	Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.Attack();
club.setType("some other type of club");
bob.Attack();

	// Weapon club = Weapon("crude spiked club");
HumanB jim("Jim");
jim.setWeapon(club);
jim.attack();
club.setType("some other type of club");
jim.attack();
}
