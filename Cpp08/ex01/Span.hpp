/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:17:59 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/26 21:10:42 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
	private:
		size_t _n;
		std::vector<int>_v;
	public:
		// Span();
		Span(size_t n);
		Span(const Span& obj);
		Span &operator=(const Span& obj);
		~Span();
		void addNumber(int num);
		size_t shortestSpan();
		size_t largestSpan();
		const size_t &getN() const;
		void setN(const size_t &n);
		void printv(std::vector<int>v);
		std::vector<int> getVector();
};