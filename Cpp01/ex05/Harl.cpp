/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 23:09:27 by yismaail          #+#    #+#             */
/*   Updated: 2023/08/13 05:53:12 by yismaail         ###   ########.fr       */
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

void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (Level[i] == level)
		{
			(this->*m_FP[i])();
			return ;
		}
	}
	std::cout << "invalid command" << std::endl;
	
}

void Harl::debug(){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info(){
	std::cout <<  "I cannot believe adding extra bacon costs more money. You didn/’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(){
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}