/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 06:10:12 by yismaail          #+#    #+#             */
/*   Updated: 2023/09/26 01:15:44 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char **av){
	// (void)ac;
	if (ac > 1)
	{
		
	Harl harl;
	int i = harl.takeindex(av[1]);
	harl.chooseOne(i);
	}
}