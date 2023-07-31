/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 00:57:32 by yismaail          #+#    #+#             */
/*   Updated: 2023/07/31 03:53:46 by yismaail         ###   ########.fr       */
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
				std::cout << "enter ur last name " << std::endl;
				getline(std::cin, lastname);
				std::cout << "enter ur nick name " << std::endl;
				getline(std::cin, nickname);
				std::cout << "enter ur phone number " << std::endl;
				getline(std::cin, phonenumber);
				std::cout << "enter ur darkest secret " << std::endl;
				getline(std::cin, darkestsecret);
				if (!isDigits(phonenumber))
					{
						std::cout << "phoneNumber is invalid" << std::endl;
						break;
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