/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:05:27 by yismaail          #+#    #+#             */
/*   Updated: 2023/07/26 19:32:38 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

PhoneBook::PhoneBook():contactNum(0) {}

bool PhoneBook::isFull() const
{
	return contactNum == 8;
}

void PhoneBook::addContact(const Contact& newContact)
{
	if (contactNum >= 0 && contactNum < 8)
	{
		contacts[contactNum] = newContact;
		contactNum++;
	}
	else
		contacts[contactNum % 8] = newContact;
}

void PhoneBook::displayContacts() const
{
	std::cout << "Index\tFirst Name\tLast Name\tNick Name" << std::endl;

	for (int i = 0; i < contactNum; ++i)
	{
		std::string firstName = contacts[i].getFirstName();
		std::string lastName = contacts[i].getLastName();
		std::string nickName = contacts[i].getNickname();
		if (firstName.length() > 10)
			firstName = firstName.substr(0, 9) + ".";
		if (lastName.length() > 10)
			lastName = lastName.substr(0, 9) + ".";
		if (nickName.length() > 10)
			nickName = nickName.substr(0,9) + ".";
		std::cout << i << "\t" << firstName << "\t\t" << lastName << "\t\t" << nickName << "\t";
	}
}

bool PhoneBook::searchContact(int index) const
{
	if (index >= 0 && index < 8)
	{
		contacts[index].display();
		return true;
	}
	else
	{
		std::cout << "invalid index please try again\n";
		return false;
	}
}
