/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 20:05:52 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/10 20:02:11 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &obj);
		ScavTrap	&operator=(ScavTrap &obj);
		~ScavTrap();
		void guardGate();
		void attack(std::string const &target);
		void takedamage(unsigned int amount);
		void berepaired(unsigned int amount);
};