/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 08:31:34 by yismaail          #+#    #+#             */
/*   Updated: 2023/08/09 07:18:07 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <iostream>

class Weapon {
	private:
		std::string _type;
	public:
		Weapon(std::string const &type);
		std::string const &getType()const;
		void setType(const std::string &type);
		
};

#endif