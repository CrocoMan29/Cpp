/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:17:45 by yismaail          #+#    #+#             */
/*   Updated: 2024/01/19 16:10:18 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main ()
{
	try
	{
		Span sp(5);
		// sp.addNumber(6);
		// sp.addNumber(3);
		// sp.addNumber(17);
		// sp.addNumber(9);
		// sp.addNumber(11);
		// sp.addNumber(33);
		// sp.addNumber(34);
		// sp.addNumber(387);

		// sp.printv(sp.getVector());
		// sp.printv(sp.getVector());
		// std::cout << sp.shortestSpan() << std::endl;
		// std::cout << sp.largestSpan() << std::endl;
		sp.addRangeOfNum();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	

}