/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 03:25:06 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/22 03:29:50 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main (){
	int intArray[] = { 1, 2, 3, 4, 5 };
    size_t length = sizeof(intArray) / sizeof(intArray[0]);
	std::cout << length << std::endl;

    iter(intArray, length, print<int>);
}