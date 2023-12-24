/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anytime.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 04:24:34 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/24 09:04:55 by yismaail         ###   ########.fr       */
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
