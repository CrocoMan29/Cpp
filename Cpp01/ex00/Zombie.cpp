/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 03:21:51 by yismaail          #+#    #+#             */
/*   Updated: 2023/08/06 09:40:28 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie::Zombie(std::string name)
{
	setName(name);
	std::cout << this->_name << " created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << ": is dead " << std::endl;
}
