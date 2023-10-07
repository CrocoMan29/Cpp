/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:08:11 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/07 19:30:57 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (){
	ClapTrap clap("clap");
	// ClapTrap clap2(clap);
	// ClapTrap clap3;
	// clap3 = clap2;
	clap.attack("target");
	clap.takeDamage(11);
	clap.beRepaired(15);
	clap.takeDamage(20);
	std::cout << clap.getHitpoints() << std::endl;
	clap.beRepaired(2);
	
	// clap2.attack("target");
	// clap3.attack("target");
	return (0);
}