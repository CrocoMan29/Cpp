/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 01:28:18 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/21 05:40:22 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog:public Animal{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(Dog const &obj);
		Dog &operator=(Dog const &obj);
		~Dog();
		void makeSound() const;
};