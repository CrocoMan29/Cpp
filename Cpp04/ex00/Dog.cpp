/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 01:28:22 by yismaail          #+#    #+#             */
/*   Updated: 2023/11/10 17:46:54 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal()
{
	this->_type = "Dog";
	std::cout << "Constructor of " << this->_type << " is called" << std::endl;
}

Dog::Dog(Dog const &obj)
{
	std::cout << "Copy constuctor of dog is called " << std::endl;
	*this = obj;
}

Dog &Dog::operator=(Dog const &obj)
{
	this->_type = obj._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "this dog is died" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "haw haw haw ...." << std::endl;
}
