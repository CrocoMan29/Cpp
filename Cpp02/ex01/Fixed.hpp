/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:16:32 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/02 20:40:35 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {
	private:
		int					fixed_num;
		static const int	frac_num = 8;
	public:
		Fixed();
		Fixed(Fixed& obj);
		Fixed	&operator=(Fixed& obj);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed(const int num);
		Fixed(const float num);
		float toFloat( void ) const;
		int toInt( void ) const;
		std::ostream& operator<<(std::ostream& os, const Fixed& obj);
};