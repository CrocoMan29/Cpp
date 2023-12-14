/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:32:32 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/13 17:29:43 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(): i_type(0), f_type(0.0f), d_type(0.0){}

Data::Data(int i, float f, double d): i_type(i), f_type(f), d_type(d){}

Data::Data(const Data &rfh)
{
	*this = rfh;
}

Data &Data::operator=(const Data &rfh)
{
	if (this != &rfh)
	{
		this->i_type = rfh.i_type;
		this->f_type = rfh.f_type;
		this->d_type = rfh.d_type;
	}
	return (*this);
}

Data::~Data(){}

const int &Data::getItype() const
{
	return this->i_type;
}

void Data::setItype(int &i)
{
	this->i_type = i;
}

const float &Data::getFtype() const
{
	return this->f_type;
}

void Data::setFtype(float &f)
{
	this->f_type = f;
}

const double &Data::getDtype() const
{
	return this->d_type;
}

void Data::setDtype(double &d)
{
	this->d_type = d;
}
