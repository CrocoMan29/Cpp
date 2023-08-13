/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 05:56:59 by yismaail          #+#    #+#             */
/*   Updated: 2023/08/13 06:45:16 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H__
#define __HARL_H__

#include <iostream>

class Harl {
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		typedef void (Harl::*FuncP)(void);
    	FuncP m_FP[4];
    	std::string Level[4];
	public:
		Harl();
		int takeindex(char *str);
		void chooseOne(int i);
		// void switchCase(int i);
		
};

#endif