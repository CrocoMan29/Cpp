#include "Cat.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 01:28:28 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/12 01:28:29 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "colors.hpp"

Cat::Cat():Animal()
{
	this->_type = "Cat";
	this->brain = new Brain();
	std::cout << YELLOW << "cat controctor called" << RESET << std::endl;
}

Cat::Cat(Cat const &src):Animal(src)
{
	*this = src;
	std::cout << YELLOW << "copy constructor of cat is called" << RESET << std::endl;
}

Cat &Cat::operator=(Cat const &obj)
{
	if (this != &obj)
	{
		this->_type = obj._type;
		this->brain = new Brain(*obj.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << YELLOW << "destructor of cat is called " << RESET << std::endl;
}

void Cat::makeSound() const
{
	std::cout << YELLOW << "mieoow miooow ........" << RESET << std::endl;
}
