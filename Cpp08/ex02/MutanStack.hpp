/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 21:08:53 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/30 18:04:43 by yismaail         ###   ########.fr       */
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
        		std::stack<T>::operator=(other);
    		}
    		return *this;
		}
		virtual ~MutanStack() {}
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator c_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator r_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator cr_iterator;
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}

		c_iterator cbegin()
		{
			return this->c.cbegin();
		}
		c_iterator cend()
		{
			return this->c.cend();
		}

		r_iterator rbegin()
		{
			return this->c.rbegin();
		}
		r_iterator rend()
		{
			return this->c.rend();
		}

		cr_iterator crbegin()
		{
			return this->c.crbegin();
		}
		cr_iterator crend()
		{
			return this->c.crend();
		}
};