/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 01:28:25 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/21 06:30:54 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat:public AAnimal{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(Cat const &src);
		Cat &operator=(Cat const &obj);
		~Cat();
		void	makeSound() const;
};