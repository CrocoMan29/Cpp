/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 02:37:37 by yismaail          #+#    #+#             */
/*   Updated: 2023/08/09 07:20:28 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const & type):_type(type)
{
}

std::string const &Weapon::getType() const
{
	return (_type);
}

void Weapon::setType(const std::string &type)
{
	_type = type;
}
