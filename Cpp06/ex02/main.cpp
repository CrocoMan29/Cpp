/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 23:11:39 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/14 22:16:30 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "generate.hpp"
#include "identify.hpp"

int main ()
{
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		Base *base = generate();
		identify(base);
		identify(*base);
		delete base;
	}
	return (0);
}