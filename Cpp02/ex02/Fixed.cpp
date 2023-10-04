/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:01:24 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/04 15:54:32 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():fixed_num(0){
}

Fixed::Fixed(const Fixed& obj){
	*this = obj;
}

Fixed &Fixed::operator=(const Fixed& obj){
	this->fixed_num = obj.getRawBits();
	return(*this);
}

Fixed::~Fixed(){}

int Fixed::getRawBits(void) const{
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
}

float Fixed::toFloat(void) const{
	float num = (float)this->fixed_num / (float)(1 << this->frac_num);
	return num;
}

int Fixed::toInt() const {
	int num = this->fixed_num >> this->frac_num;
    return num;
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj){
	os << obj.toFloat();
	return os;
}

Fixed Fixed::operator+(const Fixed &obj) const
{
	Fixed res;
	res.setRawBits(this->getRawBits() + obj.getRawBits());
	return res;
}

Fixed Fixed::operator-(const Fixed &obj) const
{
	Fixed res;
	res.setRawBits(this->getRawBits() - obj.getRawBits());
	return Fixed();
}

Fixed Fixed::operator*(const Fixed &obj) const
{
	Fixed res;
	res.setRawBits((this->getRawBits() * obj.getRawBits()) >> this->frac_num);
	return Fixed();
}

Fixed Fixed::operator/(const Fixed &obj) const
{
	Fixed res;
	res.setRawBits((this->getRawBits() << this->frac_num) / obj.getRawBits());
	return Fixed();
}

bool Fixed::operator>(const Fixed &obj) const
{
	return (this->getRawBits() > obj.getRawBits());
}

bool Fixed::operator<(const Fixed &obj) const
{
	return (this->getRawBits() < obj.getRawBits());
}

bool Fixed::operator>=(const Fixed &obj) const
{
	return (this->getRawBits() >= obj.getRawBits());
}

bool Fixed::operator<=(const Fixed &obj) const
{
	return (this->getRawBits() <= obj.getRawBits());
}

bool Fixed::operator==(const Fixed &obj) const
{
	return (this->getRawBits() == obj.getRawBits());
}

bool Fixed::operator!=(const Fixed &obj) const
{
	return (this->getRawBits() != obj.getRawBits());
}

Fixed &Fixed::operator++()
{
	this->fixed_num++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed &Fixed::operator--()
{
	this->fixed_num--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
	return (a < b ? a : b);
}

Fixed& Fixed::min(Fixed& a, Fixed& b){
	return (a < b ? a : b);
}

const Fixed &Fixed::max(const Fixed & a, const Fixed & b){
	return (a > b ? a : b);
}
Fixed &Fixed::max(Fixed& a, Fixed& b){
	return (a > b ? a : b);
}
