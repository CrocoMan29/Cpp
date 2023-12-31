/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:28:40 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/09 16:50:39 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cctype>
#include <sstream>
#include <iomanip>
#include <limits>

class ScalarConverter
{
	private:
	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &rfh);
		ScalarConverter &operator=(ScalarConverter const &obj);
		~ScalarConverter();
		static void convert(const std::string& literal);
};

void checkArg(char *str, int *i, int *c, int *f, int *d);