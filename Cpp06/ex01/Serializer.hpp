/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:54:38 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/11 16:08:16 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

class Serializer {
	private:
		Serializer();
	public:
		Serializer(Serializer const &src);
		~Serializer();
		Serializer &operator=(Serializer const &src);
};