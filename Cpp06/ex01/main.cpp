/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:05:46 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/11 16:12:36 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main ()
{
	const char* str = "Yassir ismaaili";
	uintptr_t ptr = reinterpret_cast<uintptr_t>(str);
	std::cout << "ptr= " << ptr << std::endl;
	return (0);
}