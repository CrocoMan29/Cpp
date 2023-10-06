/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:16:27 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/06 08:39:37 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int main() {
    // Fixed a;
// Fixed const b( 10 );
Fixed const c( -42.57f );
// Fixed const d( b );
// a = Fixed( 0.4321f );
// std::cout << "a is " << a << std::endl;
// std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
// std::cout << "d is " << d << std::endl;
// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// std::cout << "d is " << d.toInt() << " as integer" << std::endl;
}

