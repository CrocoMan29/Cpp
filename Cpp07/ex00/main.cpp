/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 23:28:41 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/22 02:57:03 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "anytime.hpp"

int main()
{
	// int a = 1, b = 2;

	// std::cout << a << "-------" << b << std::endl;
	// swap(a, b);
	// std::cout << a << "-------" << b << std::endl;
	// std::cout << min(a , b) << std::endl;
	// std::cout << max(a , b) << std::endl;

	// A d(9), s(6);
	// std::cout << d.getA() << "-------------" << s.getA() << std::endl;
	// swap(d, s);
	// std::cout << d.getA() << "-------------" << s.getA() << std::endl;
	// std::cout << min(d , s) << std::endl;
	// std::cout << max(d , s) << std::endl;

	int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
	
}