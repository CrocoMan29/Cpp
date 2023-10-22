/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 01:28:32 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/21 06:07:24 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal
{
	protected:
		std::string _type;
	public:
		AAnimal();
		AAnimal(AAnimal const & src);
		AAnimal & operator=(AAnimal const & obj);
		virtual ~AAnimal();
		std::string getType() const;
		void setType(std::string type);
		virtual void makeSound() const;
};