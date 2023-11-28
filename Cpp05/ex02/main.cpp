/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:54:19 by yismaail          #+#    #+#             */
/*   Updated: 2023/11/28 06:11:29 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{
    try
    {
		ShrubberyCreationForm sh("oussama");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}