/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 05:02:01 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/25 02:21:57 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::Cure(const Cure &rfh): AMateria(rfh) {
    this->_type = rfh._type;
}

Cure::Cure(std::string const &type): AMateria(type) {}

Cure &Cure::operator=(Cure const &obj) {
    if (this != &obj)
        this->_type = obj._type;
    return *this;
}

Cure::~Cure() {}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria *Cure::clone() const {
    return (new Cure(*this));
}