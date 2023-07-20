/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:06:00 by yismaail          #+#    #+#             */
/*   Updated: 2023/07/20 16:53:58 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>


class Contact
{
	public:
		std::string first_name;
		std::string last_name;
		std::string phone_number;
		std::string darkest_secret;
};

class phoneBook
{
	public:
		Contact contact[8];
	
};

#endif