/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 01:28:18 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/21 06:10:20 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog:public AAnimal{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(Dog const &obj);
		Dog &operator=(Dog const &obj);
		~Dog();
		void makeSound() const;
};