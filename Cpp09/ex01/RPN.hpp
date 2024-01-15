/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:05:29 by yismaail          #+#    #+#             */
/*   Updated: 2024/01/12 19:20:34 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <stack>
#include <sstream>

class RPN{
	private:
		std::stack<int>stack;
	public:
		RPN();
		RPN(const RPN &obj);
		RPN &operator=(const RPN &obj);
		~RPN();
		void run(const char *av);
		void checkInput(const char *av);
		void printStack();
};