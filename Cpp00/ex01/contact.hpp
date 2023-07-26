/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:31:10 by yismaail          #+#    #+#             */
/*   Updated: 2023/07/26 15:42:46 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
class Contact 
{
	private:
    	std::string firstName;
    	std::string lastName;
    	std::string nickname;
    	std::string phoneNumber;
    	std::string darkestSecret;

	public:
    	Contact();
    	Contact(const std::string& firstName, const std::string& lastName,
        	    const std::string& nickname, const std::string& phoneNumber,
            	const std::string& darkestSecret);

    	std::string getFirstName() const;
    	std::string getLastName() const;
    	std::string getNickname() const;
    	std::string getPhoneNumber() const;
    	std::string getDarkestSecret() const;
    	void display() const;
};

#endif