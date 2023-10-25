/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 05:01:50 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/24 06:21:36 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice: public AMateria{
    public:
        Ice();
        Ice(const Ice &rfh);
        Ice(std::string const &type);
        Ice &operator=(Ice const &obj);
        virtual ~Ice();
        void use(ICharacter &target);
        AMateria *clone() const;
};