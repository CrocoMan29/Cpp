/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 00:57:32 by yismaail          #+#    #+#             */
/*   Updated: 2023/08/02 04:59:09 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"
#include <iostream>

int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	PhoneBook phoneBook;

	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT)." << std::endl;
		std::string command;
		getline(std::cin, command);
		if (command == "ADD")
		{
			if (!phoneBook.isFull())
			{
				std::string firstname, lastname, nickname, phonenumber, darkestsecret;
				std::cout << "enter ur first name " << std::endl;
				getline(std::cin, firstname);
				if (firstname.empty())
				{
					std::cout << "firstname is invalid" << std::endl;
					continue;
				}
				std::cout << "enter ur lastname " << std::endl;
				getline(std::cin, lastname);
				if (firstname.empty())
				{
					std::cout << "lastname is invalid" << std::endl;
					break;
				}
				std::cout << "enter ur nickname " << std::endl;
				getline(std::cin, nickname);
				if (firstname.empty())
				{
					std::cout << "nickname is invalid" << std::endl;
					break;
				}
				std::cout << "enter ur phone number " << std::endl;
				getline(std::cin, phonenumber);
				if (firstname.empty() || !isDigits(phonenumber))
				{
					std::cout << "phoneNumber is invalid" << std::endl;
					continue;
				}
				std::cout << "enter ur darkest secret " << std::endl;
				getline(std::cin, darkestsecret);
				if (firstname.empty())
				{
					std::cout << "phoneNumber is invalid" << std::endl;
					continue;
				}
				Contact newContact(firstname, lastname, nickname, phonenumber, darkestsecret);
				phoneBook.addContact(newContact);
				std::cout << "add contact successefully" << std::endl;
			}
		}
		else if (command == "SEARCH")
		{
			int index;
			if (phoneBook.isFull())
			{
				phoneBook.displayContacts();
				std::cout << "enter index of contact uu want" << std::endl;
				std::cin >> index;
				phoneBook.searchContact(index);
			}
			else if (!phoneBook.isEmpty())
			{
				phoneBook.displayContacts();
				std::cout << "enter index of contact uu want" << std::endl;
				std::cin >> index;
				phoneBook.searchContact(index);
			}
			else
				std::cout << "the phoneBook is empty" << std::endl;
		}
		else if (command == "EXIT")
		{
			std::cout << "baaay baaaay baaaay" << std::endl;
			break;
		}
		else
			std::cout << "Invalide command please try again" << std::endl;
	}
}