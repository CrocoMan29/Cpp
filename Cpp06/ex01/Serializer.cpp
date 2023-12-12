/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:56:27 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/11 15:57:46 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){}

Serializer::Serializer(Serializer const &src)
{
	(void)src;
}

Serializer::~Serializer(){}

Serializer &Serializer::operator=(Serializer const &src)
{
	(void)src;
	return *this;
}
