/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:05:46 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/13 17:38:03 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int main ()
{
	Data d(1337, 13.37f, 13.37);
	std::cout << "---------------before serialization----------------" << std::endl;
	std::cout << "d.i_type= " << d.getItype() << std::endl;
	std::cout << "d.f_type= " << d.getFtype() << "f" << std::endl;
	std::cout << "d.d_type= " << d.getDtype() << std::endl;
	std::cout << "---------------after serialization----------------" << std::endl;
	uintptr_t ptr = Serializer::serialize(&d);
	Data* d1 = Serializer::deserialize(ptr);
	std::cout << "d1.i_type= " << d1->getItype() << std::endl;
	std::cout << "d1.f_type= " << d1->getFtype() << "f" << std::endl;
	std::cout << "d1.d_type= " << d1->getDtype() << std::endl;
	return (0);
}