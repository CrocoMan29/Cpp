/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 01:23:46 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/14 16:13:26 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

void identify(base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	std::cout << "Base: un" << std::endl;
}

void identify(base &p)
{
	bool check = true;
	try
	{
		(void)dynamic_cast<A*>(p);
		std::cout << "this is the A class" << std::endl;
		check = false;
	}
	catch(std::exception& e){(void)e;}
	if (check == true)
	{
		try
		{
			(void)dynamic_cast<B*>(p);
			std::cout << "this is the B class" << std::endl;
			check = false;
		}
		catch(std::exception& e){(void)e;}
	}
	if (check == true)
	{
		try
		{
			(void)dynamic_cast<C*>(p);
			std::cout << "this is the C class" << std::endl;
			
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
}
