/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:28:40 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/06 14:01:39 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ScalarConverter
{
	private:
	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &rfh);
		ScalarConverter &operator=(ScalarConverter const &obj);
		~ScalarConverter();
		void convert(char *av);
};

void checkArg(char *str);