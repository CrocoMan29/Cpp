/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:33:46 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/10 19:47:17 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << "ClapTrap " << this->_name << " is created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &obj){
	*this = obj; 
}

ClapTrap &ClapTrap::operator=(ClapTrap &obj){
	this->_name = obj._name;
	this->_hitpoints = obj._hitpoints;
	this->_energy_points = obj._energy_points;
	this->_attack_damage = obj._attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << this->_name << " is destroyed" << std::endl;
}

void ClapTrap::attack(std::string const &target){
	this->_hitpoints -= this->_attack_damage;
	this->_energy_points -= 1;
	if (this->_hitpoints <= 0)
		std::cout << "ClapTrap " << this->_name << " died" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	
}

void ClapTrap::takeDamage(unsigned int amount){
	this->_hitpoints -= amount;
	if (this->_hitpoints <= 0)
		std::cout << "ClapTrap " << this->_name << " died" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	this->_hitpoints += amount;
	if (this->_hitpoints <= 0)
		std::cout << "ClapTrap " << this->_name << " already died!!!" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " be repaired " << amount << " points of damage!" << std::endl;
}

std::string ClapTrap::getName(){
	return (this->_name);
}

void ClapTrap::setName(std::string name){
	this->_name = name;
}

int ClapTrap::getHitpoints()
{
	return this->_hitpoints;
}
