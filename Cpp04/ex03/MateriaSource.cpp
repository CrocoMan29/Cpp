/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 06:02:39 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/25 22:26:01 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    int i = 0;

    while (i < 4)
    {
        this->_inventory[i] = NULL;
        i++;
    }
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    int i = 0;

    while (i < 4)
    {
        this->_inventory[i] = NULL;
        if (src._inventory[i])
            this->_inventory[i] = src._inventory[i]->clone();
        i++;
    }
}

MateriaSource::~MateriaSource()
{
    int i = 0;

    while (i < 4)
    {
        if (this->_inventory[i] != NULL)
            delete this->_inventory[i];
        i++;
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src)
{
    if (this != &src)
    {
        int i = 0;

        while (i < 4)
        {
            if (this->_inventory[i])
                delete this->_inventory[i];
            this->_inventory[i] = NULL;
            if (src._inventory[i])
                this->_inventory[i] = src._inventory[i]->clone();
            i++;
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
    int i = 0;

    while (i < 4)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            break;
        }
        i++;
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    int i = 0;
    while (i < 4)
    {
        if (this->_inventory[i] && this->_inventory[i]->getType() == type)
            return this->_inventory[i]->clone();
        // delete this->_inventory[i];
        i++;
    }
    return 0;
}
