/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:08:11 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/13 19:23:31 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (){
	ClapTrap clap;
	std::cout << clap.getName() << std::endl;
	std::cout << clap.getHitpoints() << std::endl;
	// std::cout << clap.getEnergy_points() << std::endl;
	// std::cout << clap.getAttack_damage() << std::endl;
	clap.setName("clap");
	std::cout << clap.getName() << std::endl;
	// ClapTrap clap("clap");
	// ClapTrap clap2(clap);
	// ClapTrap clap3;
	// clap3 = clap2;
	// clap.attack("target");
	// clap.takeDamage(11);
	// clap.beRepaired(15);
	// clap.takeDamage(20);
	// std::cout << clap.getHitpoints() << std::endl;
	// clap.beRepaired(2);
	
	// clap2.attack("target");
	// clap3.attack("target");
	return (0);
}