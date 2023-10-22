/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 01:47:05 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/16 01:53:41 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    *this = src;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &obj)
{
    this->_type = obj._type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal is destroyed" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->_type;
}

void WrongAnimal::setType(std::string type)
{
    this->_type = type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "I don't have sound to make" << std::endl;
}
