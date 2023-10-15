/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 01:28:32 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/13 19:37:34 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(Animal const & src);
		Animal & operator=(Animal const & obj);
		virtual ~Animal();
		std::string getType() const;
		void setType(std::string type);
		virtual void makeSound() const;
};