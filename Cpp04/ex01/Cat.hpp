/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 01:28:25 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/21 05:40:13 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat:virtual public Animal{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(Cat const &src);
		Cat &operator=(Cat const &obj);
		~Cat();
		void	makeSound() const;
};