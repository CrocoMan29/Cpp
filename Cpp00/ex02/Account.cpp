/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 07:43:56 by yismaail          #+#    #+#             */
/*   Updated: 2023/08/02 04:28:30 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int Account::getTotalAmount(void)
{
	return _totalAmount;
}

int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

Account::Account(int initial_deposit)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	this->_accountIndex = _nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";" << "created" << std::endl;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "account:" << _nbAccounts << ";"
			  << "total:" << _totalAmount << ";"
			  << "deposits:" << _totalNbDeposits << ";"
			  << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void) {
	std::time_t now_time_t = std::time(NULL);
	std::tm* now_tm = std::localtime(&now_time_t);

    std::cout << '[' << now_tm->tm_year + 1900;
	printTwoNum(now_tm->tm_mon + 1);
	printTwoNum(now_tm->tm_mday);
	std::cout << '_';
	printTwoNum(now_tm->tm_hour);
	printTwoNum(now_tm->tm_min);
	printTwoNum(now_tm->tm_sec);
	std::cout << "] ";
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			  << "amount:" << this->_amount << ";"
			  << "deposits:" << this->_nbDeposits << ";"
			  << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::printTwoNum(int number)
{
	if (number > 9)
		std::cout << number;
	else
		std::cout << 0 << number;
}

int Account::checkAmount(void) const
{
	return this->_amount;
}

void Account::makeDeposit(int deposit)
{
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			  << "p_amount:" << this->_amount << ";"
			  << "deposit:" << deposit << ";";
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits++;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;	
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			  << "p_amount:" << this->_amount << ";";
	if ((this->_amount - withdrawal) > 0)
	{
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";"
				  << "amount:" << this->_amount << ";"
				  << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	}
	std::cout << "withdrawal:refused" << std::endl;
	return false; 
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			  << "amount:" << this->_amount << ";"
			  << "closed" << std::endl;
}