/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:13:32 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/11 16:43:01 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Serializer.hpp"
#include "ScalarConverter.hpp"

class Data {
	private:
		char c_type;
		int  i_type;
		float f_type;
		double d_type;
	public:
		Data(const std::string& input);
		char getCtype()const;
		void setCtype(const char c);
		int getItype()const;
		void setItype(const int i);
		float getFtype()const;
		void setFtype(const float f);
		double getDtype()const;
		void setDtype(const double d);
};