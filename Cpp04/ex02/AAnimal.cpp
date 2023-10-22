/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 01:28:35 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/12 01:28:36 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "colors.hpp"

AAnimal::AAnimal():_type("tahaja")
{
	std::cout << RED << "AAnimal default constructor called" << RESET << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << RED << "AAnimal copy constructor called" << RESET << std::endl;
	*this = src;
}

AAnimal &AAnimal::operator=(AAnimal const &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << RED << "AAnimal is destroyed" << RESET << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->_type);
}

void AAnimal::setType(std::string type)
{
	this->_type = type;
}

void AAnimal::makeSound() const
{
	std::cout << RED << "I don't have sound to make " << RESET << std::endl;
}
