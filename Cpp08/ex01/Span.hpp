/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:17:59 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/28 17:09:36 by yismaail         ###   ########.fr       */
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
	public:
		// Span();
		Span(int n);
		Span(const Span& obj);
		Span &operator=(const Span& obj);
		~Span();
		void addNumber(int num);
		int shortestSpan();
		int largestSpan();
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