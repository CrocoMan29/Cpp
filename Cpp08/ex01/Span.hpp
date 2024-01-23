/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:17:59 by yismaail          #+#    #+#             */
/*   Updated: 2024/01/19 16:10:49 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <stdexcept>

class Span {
	private:
		int _n;
		std::vector<int>_v;
		Span();
	public:
		Span(int n);
		Span(const Span& obj);
		Span &operator=(const Span& obj);
		~Span();
		void addNumber(int num);
		template < typename Container >
		void fillNumbers(const typename Container::iterator &begin, const typename Container::iterator &end){
			for (typename Container::iterator i = begin; i != end; i++)
			{
				this->addNumber(*i);
			}
		}
		void addRangeOfNum();
		int shortestSpan();
		int longestSpan();
		const int &getN() const;
		void setN(const int &n);
		void printv(std::vector<int>v);
		std::vector<int> getVector();
		class negativeIntException: public std::exception{
			virtual const char* what() const throw();
		};
		class negativeSizeException: public std::exception{
			virtual const char* what() const throw();
		};
};