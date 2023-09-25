/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 09:43:08 by yismaail          #+#    #+#             */
/*   Updated: 2023/09/23 23:17:48 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		Zombie(const std::string& name);
		~Zombie();
		Zombie();
		void announce(void);
		void setName(std::string name);
};

Zombie *newZombie(std::string name);
Zombie* zombieHorde( int N, std::string name );

#endif