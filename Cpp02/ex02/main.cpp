/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:01:32 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/05 10:43:59 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed a(1.23f);
	Fixed c(1.22f);
	Fixed const b(Fixed(5.05f) * Fixed(2));
	if (a != c)
	{	
		std::cout << "a and c are not equal" << std::endl;
	}
	std::cout << a << std::endl;
	std::cout << c << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, c) << std::endl;
	std::cout << Fixed::min(a, c) << std::endl;
	return 0;
}