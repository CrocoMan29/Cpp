/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:18:40 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/26 11:15:43 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>


template<typename T>
int easyfind(T& container, int tofind)
{
	typename T::reverse_iterator it = std::find(container.rbegin(), container.rend(), tofind);
	
	if (it != container.rbegin())
		return (*it);
	else
		throw std::runtime_error("element not found");
}