/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:06:00 by yismaail          #+#    #+#             */
/*   Updated: 2023/07/26 15:44:13 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>
#include "contact.hpp"

class PhoneBook 
{
private:
    Contact contacts[8];
    int contactNum;

public:
    PhoneBook();

    bool isFull() const;
    void addContact(const Contact& newContact);
    void displayContacts() const;
    bool searchContact(int index) const;
};

#endif