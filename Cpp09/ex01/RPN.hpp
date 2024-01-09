/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:05:29 by yismaail          #+#    #+#             */
/*   Updated: 2024/01/09 18:07:46 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <stack>

class RPN{
	private:
		std::stack<int>s;
		void checkInput(const std::string input);
	public:
		RPN();
		RPN(const RPN &obj);
		RPN &operator=(const RPN &obj);
		~RPN();
		void run(const char **av);
}