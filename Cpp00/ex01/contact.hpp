/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:31:10 by yismaail          #+#    #+#             */
/*   Updated: 2023/07/24 18:48:06 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string phone_number;
		std::string darkest_secret;
	public:
		void setFirst_name(string f_name);
		string getFirst_name(void);
		
		void setLast_name(string l_name);
		string getLast_name(void);
		
		void setPhone_number(string ph_number);
		string getPhone_number(void);
		
		void setDarkest_secret(string d_secret);
		string getDarkest_secret(void);

		Contact::Contact(std::string f_name, std::string l_name, std::string ph_number, std::string d_secret);
};

#endif