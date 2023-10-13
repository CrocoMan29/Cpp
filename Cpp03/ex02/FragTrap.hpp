/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:16:19 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/10 20:31:31 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap:public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap &obj);
		FragTrap	&operator=(FragTrap &obj);
		~FragTrap();
		void highFivesGuys(void);
		void attack(std::string const &target);
		void takedamage(unsigned int amount);
		void berepaired(unsigned int amount);
};