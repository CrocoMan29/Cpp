/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:18:15 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/13 17:29:06 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

class Serializer{
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};