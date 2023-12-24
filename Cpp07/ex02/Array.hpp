/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 09:06:56 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/24 09:08:35 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
class Array{
	private:
		T *_element;
		std::size_t _n;
	public:
		Array():_element(NULL), _n(0){}
		
		Array(std::size_t n):_element(new T[n]()), _n(n){}
		
		Array(const Array &obj):_element(new T[obj._n]), _n(obj._n){
			for(std::size_t i = 0; i < _n; i++)
			{
				_element[i] = obj._element[i];
			}
		}
		
		Array &operator=(const Array &obj){
			if (this != &obj){
				delete[] obj;
				_element = new T[obj._element];
				_n = obj._n;
				for (size_t i = 0; i < _n; i++)
				{
					_element[i] = obj._element[i];
				}
			}
			return *this;
		}
		
		~Array(){
			delete[] _element;
		}
		
		T &operator[](std::size_t index)
		{
			if (index >= _n){
				throw std::out_of_range("Array index is out of range");
			}
			return (_element[index]);
		}
		
		std::size_t size() const {
			return _n;
		}
};
