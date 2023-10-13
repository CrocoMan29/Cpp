/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 20:05:48 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/10 20:05:20 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap(){}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap " << _name << " is created." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &obj):ClapTrap(obj)
{
	*this = obj;
}

ScavTrap &ScavTrap::operator=(ScavTrap &obj)
{
	this->_name = obj._name;
	this->_hitpoints = obj._hitpoints;
	this->_energy_points = obj._energy_points;
	this->_attack_damage = obj._attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScaveTrap " << this->_name << " is destroyed" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << this->_name << " cannot die now......" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	this->_hitpoints -= this->_attack_damage;
	this->_energy_points -= 1;
	if (this->_hitpoints <= 0)
		std::cout << "ScavTrap " << this->_name << " died" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::takedamage(unsigned int amount)
{
	this->_hitpoints -= amount;
	if (this->_hitpoints <= 0)
		std::cout << "ScavTrap " << this->_name << " died" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
}

void ScavTrap::berepaired(unsigned int amount)
{
	this->_hitpoints += amount;
	if (this->_hitpoints <= 0)
		std::cout << "ScavTrap " << this->_name << " already died!!!" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " be repaired " << amount << " points of damage!" << std::endl;
}
