/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:54:19 by yismaail          #+#    #+#             */
/*   Updated: 2023/11/16 16:23:52 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
    try
    {
        Form f1("form", 1, 1);
        Form f2("yassir", 2, 3);
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
        f2 = f1;
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}