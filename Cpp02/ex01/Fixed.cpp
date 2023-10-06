/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:16:36 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/06 09:12:24 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_num(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_num = obj.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->fixed_num);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_num = raw;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_num = num << this->frac_num;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_num = (num * (1 << this->frac_num)) + (num >= 0 ? 0.5 : -0.5);
}

float Fixed::toFloat(void) const
{
	float num = (float)this->fixed_num / (float)(1 << this->frac_num);
	return num;
}

int Fixed::toInt() const
{
	int num = this->fixed_num >> this->frac_num;
	return num;
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
	os << obj.toFloat();
	return os;
}
