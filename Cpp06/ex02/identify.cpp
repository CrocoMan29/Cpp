/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 01:23:46 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/18 00:58:43 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Base: unfounded" << std::endl;
}

void identify(Base &p)
{
	bool check = true;
	try
	{
		A &c =  dynamic_cast<A&> (p);
		(void)c;
		std::cout << "this is the A class" << std::endl;
		check = false;
	}
	catch(std::exception& e){(void)e;}
	if (check == true)
	{
		try
		{
			B &a = dynamic_cast<B &> (p);
			(void)a;
			std::cout << "this is the B class" << std::endl;
			check = false;
		}
		catch(std::exception& e){(void)e;}
	}
	if (check == true)
	{
		try
		{
			C &d = dynamic_cast<C&> (p);
			(void)d;
			std::cout << "this is the C class" << std::endl;
			check = false;
		}
		catch(std::exception& e)
		{
			(void)e;
			std::cout << "this is not any class of A B C" << std::endl;
		}
	}
}
