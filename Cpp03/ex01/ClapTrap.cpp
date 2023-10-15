/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:33:46 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/14 21:19:04 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("ana"), _hitpoints(0), _energy_points(0), _attack_damage(0){}

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
	if (this->_energy_points > 0)
		this->_energy_points -= 1;
	else
		std::cout << "ClapTrap " << this->_name << " is out of energy" << std::endl;
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

void ClapTrap::setHitpoint(int hitpoint)
{
	this->_hitpoints = hitpoint;
}

int ClapTrap::getEnergypoint()
{
	return (this->_energy_points);
}

void ClapTrap::setEnergypoint(int energypoint)
{
	this->_energy_points = energypoint;
}

int ClapTrap::getAttackdamage()
{
	return (this->_attack_damage);
}

void ClapTrap::setAttackdamage(int attackdamage)
{
	this->_attack_damage = attackdamage;
}
