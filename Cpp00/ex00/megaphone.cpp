/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 08:19:08 by yismaail          #+#    #+#             */
/*   Updated: 2023/07/15 08:33:01 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

using namespace std;


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

	if (ac == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (int i = 1; i < ac; i++)
		{
			str = strToUpper(av[i]);
			cout << str << endl;
		}
	}
}

int main(int ac, char **av)
{
	doUpper(ac, av);
	// string str;

	// for (int i = 1; i < ac; i++)
	// {
	// 	str = strToUpper(av[i]);
	// 	cout << str;
	// }
	return (0);
}