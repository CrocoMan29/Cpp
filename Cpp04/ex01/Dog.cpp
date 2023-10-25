#include "Dog.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 01:28:22 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/12 01:28:23 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "colors.hpp"

Dog::Dog():Animal()
{
	this->_type = "Dog";
	this->brain = new Brain();
	std::cout << BLUE << "Constructor of Dog is called" << RESET << std::endl;
}

Dog::Dog(Dog const &obj):Animal(obj)
{
	this->_type = obj._type;
	this->brain = new Brain(*obj.brain);
	std::cout << BLUE << "Copy constuctor of dog is called " << RESET << std::endl;
}

Dog &Dog::operator=(Dog const &obj)
{
	if (this != &obj)
	{
		this->_type = obj._type;
		this->brain = new Brain(*obj.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << BLUE << "this dog is died" << RESET << std::endl;
}

void Dog::makeSound() const
{
	std::cout << BLUE << "haw haw haw ........" << RESET << std::endl;
}
