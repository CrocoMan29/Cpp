/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:28:39 by yismaail          #+#    #+#             */
/*   Updated: 2024/01/08 03:30:46 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <fstream>
#include <sstream>

class BitcoinExchange{
	private:
		std::map<std::string, float> data;
		bool checkDate(const std::string &date);
		bool checkValue(const std::string &str, bool flag);
		void handleCSV();
		void handleInput(const char *filename);
		void printResult(const std::string &line);
		float findVal(const std::string &date);
		std::string findDate(const std::string &line);
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &obj);
		~BitcoinExchange();
		BitcoinExchange &operator=(const BitcoinExchange &obj);
		void run(const char *filename);
		void printMap();
};