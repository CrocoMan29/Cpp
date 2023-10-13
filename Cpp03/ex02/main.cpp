/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 20:05:36 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/10 20:07:29 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main (){
	ScavTrap s("yassir");
	ClapTrap y("oussama");
	std::cout << y.getName() << std::endl;
	std::cout << y.getHitpoints() << std::endl;
	std::cout << y.getEnergypoint() << std::endl;
	std::cout << y.getAttackdamage() << std::endl;
	// ScavTrap s1 = s;
	s.attack("3ssiya");
	std::cout << s.getName() << std::endl;
	std::cout << s.getHitpoints() << std::endl;
	std::cout << s.getEnergypoint() << std::endl;
	std::cout << s.getAttackdamage() << std::endl;
	s.guardGate();
}