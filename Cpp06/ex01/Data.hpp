/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:13:32 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/13 17:15:15 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Data {
	private:
		int  i_type;
		float f_type;
		double d_type;
		Data();
	public:
		Data(int i, float f, double d);
		Data(const Data& rfh);
		Data& operator=(const Data& rfh);
		~Data();
		const int& getItype()const;
		void setItype(int& i);
		const float& getFtype()const;
		void setFtype(float& f);
		const double& getDtype()const;
		void setDtype(double& d);
};