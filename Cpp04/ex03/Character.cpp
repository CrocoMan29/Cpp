/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 05:17:02 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/25 03:23:58 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    int i = 0;

    while (i < 4)
    {
        this->_inventory[i] = NULL;
        i++;
    }
    this->_name = "anonymous";
}

Character::Character(std::string const &name)
{
    int i = 0;
    while (i < 4)
    {
        this->_inventory[i] = NULL;
        i++;
    }
    this->_name = name;
}

Character::Character(Character &rfh)
{
    int i = 0;
    while (i < 4)
    {
        this->_inventory[i] = NULL;
        if (this->_inventory[i])
            this->_inventory[i] = rfh._inventory[i]->clone();
        i++;
    }
    this->_name = rfh._name;
}

Character &Character::operator=(Character const &obj)
{
    if (this != &obj)
    {
        int i = 0;
        while (i < 4)
        {
            if (this->_inventory[i])
                delete this->_inventory[i];
            this->_inventory[i] = NULL;
            if (obj._inventory[i])
                this->_inventory[i] = obj._inventory[i]->clone();
            i++;
        }
        this->_name = obj._name;
    }
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
        for (int j = i+1; j< 4; j++)
        {
            if (this->_inventory[i] == this->_inventory[j])
                this->_inventory[j] = NULL;
        }
    }
}

std::string const &Character::getName() const
{
   return (this->_name);
}

void Character::equip(AMateria *m)
{
    int i;
    for(i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    int i;
    for (i = 0; i < 4; i++)
    {
        if (i == idx)
        {
            this->_inventory[i] = NULL;
            break;
        }
    }
}

void Character::use(int idx, ICharacter &target)
{
    int i;
    for (i = 0; i < 4; i++)
    {
        if (i == idx)
        {
            this->_inventory[i]->use(target);
            break;
        }
    }
}

AMateria *Character::save(int idx)
{
    for (int i = 0; i < 4; i++)
    {
        if (i == idx)
            return this->_inventory[i];
    }
    return NULL;
}
