/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:16:36 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/02 20:42:20 by yismaail         ###   ########.fr       */
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

Fixed::Fixed(const int num){
	this->fixed_num = num << this->frac_num;
}

Fixed::Fixed(const float num){
	this->fixed_num = (int)(num * (1 << this->frac_num) + (num >= 0 ? 0.5 : -0.5));
	// std::cout << "fixed : "<< this->fixed_num << std::endl;
}

float Fixed::toFloat(void) const{
	float num = (float)this->fixed_num / (float)(1 << this->frac_num);
	// std::cout << "float : "<< num << std::endl;
	return num;
}

int Fixed::toInt() const {
	int num = this->fixed_num >> this->frac_num;
	// std::cout << "int : "<< num << std::endl;
    return num;
}

std::ostream &Fixed::operator<<(std::ostream &os, const Fixed &obj)
{
	std::cout << obj.toFloat();
	return os;
}
