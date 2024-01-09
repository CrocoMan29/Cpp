/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:53:43 by yismaail          #+#    #+#             */
/*   Updated: 2024/01/09 18:12:49 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const RPN &obj)
{
	*this = obj;
}

RPN &RPN::operator=(const RPN &obj)
{
	if (this != &obj)
	{
		this->s = obj.s;
	}
	return (*this);
}

RPN::~RPN(){}

void RPN::run(const char **av)
{
	std::stringstream rpnExpretion;

	
}
