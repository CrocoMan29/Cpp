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

Cat::Cat():Animal()
{
	std::cout << "cat controctor called" << std::endl;
}

Cat::Cat(Cat const &src):Animal(src)
{
	std::cout << "Copy constroctor of cat is called " << std::endl;
	*this = src;
}

Cat &Cat::operator=(Cat const &obj)
{
	this->_type = obj._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "destructor of cat is called " << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "haw haw haw !!!!!!!!" << std::endl;
}
