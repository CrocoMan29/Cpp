/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:54:19 by yismaail          #+#    #+#             */
/*   Updated: 2023/11/12 14:23:39 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
    // BureauCrat b2("b2", 150);
    try
    {
        Bureaucrat b1("b1", 1);
        Bureaucrat *b3 = new Bureaucrat("b3", 0);
        Bureaucrat *b4 = b3;
        std::cout << b1;
        std::cout << b3;
        std::cout << b4;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // std::cout << b2 << std::endl;
    return 0;
}