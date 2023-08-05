/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 03:23:05 by yismaail          #+#    #+#             */
/*   Updated: 2023/08/05 22:33:12 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void);
}

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif