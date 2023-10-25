/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 05:01:54 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/25 02:16:42 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::Ice(const Ice &rfh): AMateria(rfh) {
    *this = rfh;
}

Ice::Ice(std::string const &type): AMateria(type) {}

Ice &Ice::operator=(Ice const &obj) {
    if (this != &obj)
        this->_type = obj._type;
    return *this;
}

Ice::~Ice() {}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

AMateria *Ice::clone() const {
    return new Ice(*this);
}