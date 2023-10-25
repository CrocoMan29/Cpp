/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 05:02:10 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/24 22:45:13 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): _type("default") {}

AMateria::AMateria(std::string const &type):_type(type)
{
}

AMateria::AMateria(AMateria const &src)
{
    *this = src;
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(AMateria const &src)
{
    this->_type = src._type;
    return *this;
}

std::string const &AMateria::getType() const
{
    return this->_type;
}

void AMateria::use(ICharacter &target)
{
    // (void)target;
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
