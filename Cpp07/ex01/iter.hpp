/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 02:59:59 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/22 03:30:20 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T, typename func>
void iter(T *arr, size_t lenght, func f){
	for (size_t i = 0; i < lenght; i++)
	{
		f(arr[i]++);
	}
}

template<typename T>
void print(T element){
	std::cout << element << std::endl;
}