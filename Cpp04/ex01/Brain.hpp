/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 01:30:35 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/21 05:54:30 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(Brain const & src);
        Brain & operator=(Brain const & obj);
        ~Brain();
};