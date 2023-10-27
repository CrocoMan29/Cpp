/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 01:46:17 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/27 04:51:55 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const & src);
        WrongAnimal &operator=(WrongAnimal const &obj);
        ~WrongAnimal();
        std::string getType() const;
        void setType(std::string type);
        void makeSound() const;
};