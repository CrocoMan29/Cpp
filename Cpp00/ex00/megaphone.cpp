/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 08:19:08 by yismaail          #+#    #+#             */
/*   Updated: 2023/07/18 10:44:37 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

string strToUpper(string str)
{
	string strup;
	for (int i = 0; str[i]; i++)
	{
		if (isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			continue;
		}
	}
	return (str);
}
void	doUpper(int ac, char **av)
{
	string	str;
	int	count;

	count = 0;
	if (ac == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (int i = 0; i < ac; i++)
			if (!av[i][0])
				count++;
		if (count == ac - 1)
			cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
	if (ac != 1)
	{
		for (int i = 1; i < ac; i++)
		{
			str = strToUpper(av[i]);
			cout << str;
			if (i != ac - 1)
				cout << " ";
		}
	}
}
