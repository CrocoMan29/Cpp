/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 06:10:12 by yismaail          #+#    #+#             */
/*   Updated: 2023/08/13 06:49:32 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char **av){
	if (ac != 2)
		std::cout << "we don't do that here" << std::endl;
	else {
		Harl harl;
		int i = harl.takeindex(av[1]);
		harl.chooseOne(i);
	}
}