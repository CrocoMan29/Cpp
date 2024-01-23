/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:29:39 by yismaail          #+#    #+#             */
/*   Updated: 2024/01/19 16:11:15 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():_n(0), _v(0)
{}

Span::Span(int n)
{
	if (n < 0)
		throw Span::negativeSizeException();
	if (n > 10000)
		throw std::logic_error("too much for size");
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
	if(this->_v.size() < static_cast<unsigned int>(this->_n))
		this->_v.push_back(num);
	else
		throw std::logic_error("we can't add anything");
		
}

void Span::addRangeOfNum()
{
	std::vector<int>    vec;
        Span    spanVec(this->_n);
		srand(time(0));
        for (int i = 0; i < this->_n; i++)
            vec.push_back(rand() % 9999);
        spanVec.fillNumbers<std::vector <int> >(vec.begin(), vec.end());

        std::cout << "Shortest span: " << spanVec.shortestSpan() << std::endl;
        std::cout << "Longest span: " << spanVec.longestSpan() << std::endl;
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
	if (num < 0)
		throw Span::negativeIntException();
	return (num);
}

int Span::longestSpan()
{
	if (this->_v.size() < 2)
		throw std::logic_error("Vector needs at least two elements for a largest span");
	std::vector<int> temp = this->_v;
	std::sort(temp.begin(), temp.end());
	int num = temp.back() - temp.front();
	if (num < 0)
		throw Span::negativeIntException();
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
