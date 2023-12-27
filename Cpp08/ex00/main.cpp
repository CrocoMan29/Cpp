/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:03:38 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/26 11:50:09 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <stdexcept>
#include "easyfind.hpp"

int main (){
	std::vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(7);

	// int r = 3;
	// try
	// {
	// 	int y = easyfind(v, r);
	// 	std::cout << "tofind = " << y << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	std::vector<int>::iterator it= v.begin();
	(void)it;
	// std::cout << v.max_size() << std::endl;
	v.insert(v.end(), 5);
	// std::cout << *(v.end() - 2) << std::endl;
	for (; it != v.end(); it++)
	{
		std::cout << *it << std::endl;
	}
}