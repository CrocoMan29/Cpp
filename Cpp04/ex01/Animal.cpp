#include "Animal.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 01:28:35 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/12 01:28:36 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "colors.hpp"

Animal::Animal():_type("tahaja")
{
	std::cout << RED << "Animal default constructor called" << RESET << std::endl;
}

Animal::Animal(Animal const & src)
{
	std::cout << RED << "Animal copy constructor called" << RESET << std::endl;
	*this = src;
}

Animal &Animal::operator=(Animal const &obj)
{
	this->_type = obj._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << RED << "Animal is destroyed" << RESET << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}

void Animal::setType(std::string type)
{
	this->_type = type;
}

void Animal::makeSound() const
{
	std::cout << RED << "I don't have sound to make " << RESET << std::endl;
}
