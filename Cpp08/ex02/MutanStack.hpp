/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 21:08:53 by yismaail          #+#    #+#             */
/*   Updated: 2024/01/19 16:36:47 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template<typename T>
class MutanStack: public std::stack<T>{
	public:
		MutanStack():std::stack<T>(){}
		MutanStack(const MutanStack &obj): std::stack<T>(obj){}
		MutanStack& operator=(const MutanStack& other) {
   			if (this != &other) {
        		*this = other;
    		}
    		return *this;
		}
		virtual ~MutanStack() {}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
};