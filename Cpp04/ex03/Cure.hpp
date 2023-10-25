/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 05:01:58 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/24 06:21:26 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure: public AMateria{
    public:
        Cure();
        Cure(const Cure &rfh);
        Cure(std::string const &type);
        Cure &operator=(Cure const &obj);
        virtual ~Cure();
        void use(ICharacter &target);
        AMateria *clone() const;
};