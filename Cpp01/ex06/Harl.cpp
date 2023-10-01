/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 05:57:31 by yismaail          #+#    #+#             */
/*   Updated: 2023/09/26 01:21:49 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	m_FP[0] = &Harl::debug;
	m_FP[1] = &Harl::info;
	m_FP[2] = &Harl::warning;
	m_FP[3] = &Harl::error;

	Level[0] = "DEBUG";
	Level[1] = "INFO";
	Level[2] = "WARNING";
	Level[3] = "ERROR";
}

int Harl::takeindex(char *str)
{
	std::string slevel = str;
	for (int i = 0; i < 4; i++)
	{
		if (slevel == Level[i])
			return i;
	}
	return (4);
	
}


void Harl::chooseOne(int i){
	switch (i)
	{
	case 0:
		(this->*m_FP[0])();
	case 1:
		(this->*m_FP[1])();
	case 2:
		(this->*m_FP[2])();
	case 3:
		(this->*m_FP[3])();
		break;
	default:
		std::cout << "I told uu we don't do that here." << std::endl;
		break;
	}
}

void Harl::debug(){
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}
void Harl::info(){
	std::cout <<  "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn/’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}
void Harl::warning(){
	std::cout <<  "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}
void Harl::error(){
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}