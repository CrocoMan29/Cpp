/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:32:32 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/11 16:51:45 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(const std::string &input)
{
	ScalarConverter::convert(input);
	
}

char Data::getCtype() const
{
	return this->c_type;
}

void Data::setCtype(const char c)
{
	this->c_type = c;
}

int Data::getItype() const
{
	return this->i_type;
}

void Data::setItype(const int i)
{
	this->i_type = i;
}

float Data::getFtype() const
{
	return this->f_type;
}

void Data::setFtype(const float f)
{
	this->f_type = f;
}

double Data::getDtype() const
{
	return this->d_type;
}

void Data::setDtype(const double d)
{
	this->d_type = d;
}
