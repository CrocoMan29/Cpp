/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:29:39 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/26 21:12:07 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Span::Span():_n(0), _v(0)
// {}

Span::Span(size_t n):_v(n)
{
	this->_n = n;
	
}

Span::Span(const Span &obj) 
{
	this->_v.clear();
	this->_n = obj.getN();
	this->_v = obj._v;
	// printv(obj._v);
}

Span &Span::operator=(const Span &obj)
{
	if (this != &obj)
	{
		this->_v.erase(this->_v.begin(), this->_v.end());
		this->_v = obj._v;
		setN(obj.getN());
	}
	return (*this);
}

Span::~Span()
{}

void Span::addNumber(int num)
{
	if (this->_v)
	this->_v.push_back(num);
	printv(getVector());
}

size_t Span::shortestSpan()
{
	std::sort(this->_v.begin(), this->_v.end());
	// printv(this->_v);
	std::vector<int>::iterator first = this->_v.begin();
	std::vector<int>::iterator second = this->_v.begin() + 1;
	size_t num = *(second) - *(first); 
	return (num);
}

size_t Span::largestSpan()
{
	std::sort(this->_v.begin(), this->_v.end());
	std::vector<int>::iterator last = this->_v.end() - 1;
	std::vector<int>::iterator pre_last = this->_v.end() - 2;
	return (*(last) - *(pre_last));
}

const size_t &Span::getN() const
{
	return this->_n;
}

void Span::setN(const size_t &n)
{
	this->_n = n;
}



void Span::printv(std::vector<int>v)
{
	std::vector<int>::iterator it = v.begin();
	for(; it != v.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

std::vector<int> Span::getVector()
{
	return this->_v;
}


