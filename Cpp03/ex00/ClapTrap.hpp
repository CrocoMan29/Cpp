/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:33:26 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/07 19:29:23 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		int _hitpoints;
		int _energy_points;
		int _attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap& obj);
		ClapTrap	&operator=(ClapTrap& obj);
		~ClapTrap();
		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName();
		void setName(std::string name);
		int getHitpoints();
};