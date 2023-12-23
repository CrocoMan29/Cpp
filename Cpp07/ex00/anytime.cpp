/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anytime.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 04:51:21 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/22 03:57:48 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "anytime.hpp"

A::A(): _a(0)
{
}

A::A(int a) : _a(a) {}

A &A::operator=(A const &obj)
{
	this->_a = obj._a;
	return (*this);
}

int const &A::getA() const
{
	return (this->_a);
}

void A::setA(const int a)
{
	this->_a = a;
}

A::~A(){}

std::ostream &operator<<(std::ostream &os, const A &obj)
{
	os << obj.getA();
	return (os);
}
