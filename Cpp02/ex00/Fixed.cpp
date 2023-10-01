#include "Fixed.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 02:12:04 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/01 02:12:10 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():fixed_num(0){
	std::cout<< "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed& obj){
	std::cout << "Default constructor called" << std::endl;
	*this = obj;
}

Fixed &Fixed::operator=(Fixed& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_num = obj.getRawBits();
	return(*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_num);
}

void Fixed::setRawBits(int const raw){
	this->fixed_num = raw;
}
