/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:16:29 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/10 20:34:00 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap " << _name << " is created." << std::endl;
}

FragTrap::FragTrap(FragTrap &obj):ClapTrap(obj)
{
	*this = obj;
}

FragTrap &FragTrap::operator=(FragTrap &obj)
{
	this->_name = obj._name;
	this->_hitpoints = obj._hitpoints;
	this->_energy_points = obj._energy_points;
	this->_attack_damage = obj._attack_damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << "is destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "rche9 rche9 hnaya" << std::endl;
}

void FragTrap::attack(std::string const &target)
{
	this->_hitpoints -= this->_attack_damage;
	this->_energy_points -= 1;
	if (this->_hitpoints <= 0)
		std::cout << "FragTrap " << this->_name << " died" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void FragTrap::takedamage(unsigned int amount)
{
	this->_hitpoints -= amount;
	if (this->_hitpoints <= 0)
		std::cout << "FragTrap " << this->_name << " died" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
}

void FragTrap::berepaired(unsigned int amount)
{
	this->_hitpoints += amount;
	if (this->_hitpoints <= 0)
		std::cout << "FragTrap " << this->_name << " already died!!!" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " be repaired " << amount << " points of damage!" << std::endl;
}
