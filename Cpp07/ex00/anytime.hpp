/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anytime.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 04:24:34 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/22 03:57:14 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T> void swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}

template<typename T>
T const& min(T const& a, T const& b)
{
	return (a < b ? a : b);
}

template<typename T>
T const& max(T const& a, T const& b)
{
	return (a > b ? a : b);
}

class A{
	private:
		int _a;
	public:
		A();
		A(int a);
		~A();
		A &operator=(A const &obj);
		int const &getA()const;
		void setA(const int a);
};

std::ostream &operator<<(std::ostream &os, const A &obj);