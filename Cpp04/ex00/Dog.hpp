/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 01:28:18 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/12 21:17:06 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog:public Animal{
	public:
		Dog();
		Dog(Dog const &obj);
		Dog &operator=(Dog const &obj);
		~Dog();
		void makeSound() const;
}