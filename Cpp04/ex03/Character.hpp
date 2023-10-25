/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 05:15:11 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/25 03:10:02 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character: public ICharacter{
    private:
        std::string _name;
        AMateria *_inventory[4];
    public:
        Character();
        Character(std::string const &name);
        Character(Character &rfh);
        Character &operator=(Character const &obj);
        virtual ~Character();
        std::string const &getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
        AMateria *save(int idx);
};