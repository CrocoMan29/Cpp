/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:29:39 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/28 17:10:39 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Span::Span():_n(0), _v(0)
// {}

Span::Span(int n)
{
	this->_n = n;
	this->_v.reserve(n);	
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
	if (num < 0)
		throw Span::negativeIntException();
	this->_v.push_back(num);
}

int Span::shortestSpan()
{
	if (this->_v.size() < 2)
		throw std::logic_error("we need at least two element to calcule shortest span");
	std::vector<int> temp = this->_v;
	std::sort(temp.begin(), temp.end());
	std::vector<int> diff(this->_v.size());
	std::adjacent_difference(temp.begin(), temp.end(), diff.begin());
	int num = *std::min_element(diff.begin() + 1, diff.end());
	return (num);
}

int Span::largestSpan()
{
	if (this->_v.size() < 2)
		throw std::logic_error("Vector needs at least two elements for a largest span");
	std::vector<int> temp = this->_v;
	std::sort(temp.begin(), temp.end());
	int num = temp.back() - temp.front();
	return (num);
}

const int &Span::getN() const
{
	return this->_n;
}

void Span::setN(const int &n)
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

const char * Span::negativeIntException::what() const throw()
{
	return "we don't use negative int";
}

const char *Span::negativeSizeException::what() const throw()
{
	return "we cannot use negative size in vector";
}
