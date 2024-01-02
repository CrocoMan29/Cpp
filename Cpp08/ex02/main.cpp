/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 20:37:38 by yismaail          #+#    #+#             */
/*   Updated: 2024/01/01 23:50:08 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutanStack.hpp"
#include <vector>
int main (){
	MutanStack<int> s;
	s.push(22);
	s.push(1);
	s.push(44);
	MutanStack<int>::iterator it = s.end();
	std::cout << s.top() << std::endl;

	std::cout << s.size() << std::endl;

	std::cout << *it << std::endl;
	it--;
	it--;
	
	std::cout << *it << std::endl;

	return 0;
}