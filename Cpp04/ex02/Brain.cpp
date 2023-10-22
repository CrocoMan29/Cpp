/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 01:31:30 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/21 05:59:14 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "colors.hpp"

Brain::Brain()
{
    std::cout << GREEN << "Brain Default constructor called" << RESET << std::endl;
}

Brain::Brain(Brain const &src)
{
    std::cout << GREEN << "Brain Copy constructor called" << RESET << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = src.ideas[i];
    }
}

Brain &Brain::operator=(Brain const &obj)
{
    if (this != &obj)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = obj.ideas[i];
        }
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << GREEN << "Brain Destructor called" << RESET << std::endl;
}