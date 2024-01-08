/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:36:43 by yismaail          #+#    #+#             */
/*   Updated: 2024/01/08 03:31:33 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool BitcoinExchange::checkDate(const std::string &date)
{
	if (date.length() != 10)
		return (false);
	for (size_t i = 0; i < 10; i++)
	{
		if (i != 4 && i != 7)
		{
			if (!std::isdigit(date[i]))
				return false;
		}
		else
		{
			if (date[i] != '-')
				return false;
		}	
	}
	int y, m, d;
	std::string year = date.substr(0,4);
	std::string month = date.substr(5,2);
	std::string day = date.substr(8,2); 
	std::stringstream ssYear(year);
	std::stringstream ssMonth(month);
	std::stringstream ssDay(day);
	ssYear >> y;
	ssMonth >> m;
	ssDay >> d;
	if (m == 0 || d == 0 || m > 12 || d > 31)
		return false;
	if (d == 31 && (m == 4 || m == 6 || m == 9 || m == 11))
		return false;
	if (m == 2)
	{
		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
			if (d > 29)
				return false;
		}
		else if (d > 28)
			return false;
	}
	return true;
}

bool BitcoinExchange::checkValue(const std::string &str, bool flag)
{
	char *p = NULL;
	double val;

	val = std::strtod(str.c_str(), &p);
	if (val == 0.0 && !std::isdigit(str[0]))
		return false;
	if (*p && std::strcmp(p, "f"))
		return false;
	if (val < 0)
		return false;
	if (flag && val > 1000)
		return false;
	return true;
}

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
	*this = obj;
}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj)
{
	if (this != &obj)
	{
		this->data = obj.data;
	}
	return (*this);
}

void BitcoinExchange::run(const char *filename)
{
	handleCSV();
	handleInput(filename);
}

void BitcoinExchange::handleCSV()
{
	std::ifstream csv("./data.csv");

	if (!csv)
		throw std::runtime_error("Error: Failed to open csv file");
	std::string line;
	float val;
	if (!std::getline(csv, line))
		throw std::runtime_error("Error: Failed to read csv line");
	if (std::strcmp(line.c_str(), "date,exchange_rate"))
		throw std::runtime_error("Error: headr of csv file is not valid");
	while (std::getline(csv, line))
	{
		if (line.length() < 12 || line[10] != ',')
			throw std::runtime_error("Error: csv line has wrong format");
		if (!checkDate(line.substr(0, 10)))
			throw std::runtime_error("Error: csv line has wrong date format");
		if (!checkValue(line.substr(11), false))
			throw std::runtime_error("Error: csv line has wrong value format");
		std::string value = line.substr(11);
		std::stringstream ss(value);
		ss >> val;
		data[line.substr(0, 10)] = val;
	}
	csv.close();
	if (data.empty())
		throw std::runtime_error("Error: Failed to store map data from csv file");
}

void BitcoinExchange::handleInput(const char *filename)
{
	std::ifstream input(filename);

	if (input.fail())
		throw std::runtime_error("Error: we can't open this file");
	std::string line;
	if (!std::getline(input, line))
		throw std::runtime_error("Error: Failed to read csv line");
	if (std::strcmp(line.c_str(), "date | value"))
		throw std::runtime_error("Error: headr of csv file is not valid");
	while (std::getline(input, line))
	{
		if (line.length() < 14 || line[11] != '|' || line[10] != ' ' || line[12] != ' ' )
			throw std::runtime_error("Error: input line has wrong format");
		if (!checkDate(line.substr(0, 10)))
		{
			std::cerr << "Error: bad input => " << line.substr(0, 10) << '\n';
			continue;
		}
		if (!checkValue(line.substr(13), true))
		{
			std::cerr << "Error: not a valid value\n";
			continue;
		}
		printResult(line);
	}
	input.close();
}

void BitcoinExchange::printResult(const std::string &line)
{
	std::string date;
	float val;
	float result;

	date = line.substr(0, 10);
	std::stringstream ss(date);
	ss >> val;
	result = val * findVal(findDate(date));
	std::cout << date << " => " << val << " = " << result << '\n';
}

float BitcoinExchange::findVal(const std::string &date)
{
	return data[date];
}

std::string BitcoinExchange::findDate(const std::string &line)
{
	std::map<std::string, float>::const_iterator it;

	it = data.find(line);
	if (it != data.end())
		return it->first;
	it = data.lower_bound(line);
	if (it == data.begin())
		throw std::runtime_error("Error: no match date exists");
	return (--it)->first;
}

void BitcoinExchange::printMap(void)
{
	for (std::map<std::string, float>::iterator it = data.begin(); it != data.end() ; ++it) {
		std::cout << it->first << " " << it->second << '\n';
	}
}
