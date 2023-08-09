/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 07:35:03 by yismaail          #+#    #+#             */
/*   Updated: 2023/08/09 08:22:16 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H__
#define __HUMANB_H__

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	private:
		std::string _name;
		Weapon const *_weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon const &weapon);
		void attack();
		
};

#endif