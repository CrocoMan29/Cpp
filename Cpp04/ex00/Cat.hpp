/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 01:28:25 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/15 05:34:56 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat:virtual public Animal{
	public:
		Cat();
		Cat(Cat const &src);
		Cat &operator=(Cat const &obj);
		~Cat();
		void	makeSound() const;
};