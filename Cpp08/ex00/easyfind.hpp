/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:18:40 by yismaail          #+#    #+#             */
/*   Updated: 2024/01/19 16:23:09 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>


template<typename T>
int easyfind(T& container, int tofind)
{	
	if (std::find(container.begin(), container.end(), tofind) == container.end())
		throw std::runtime_error("element not found");
	return(tofind);
}