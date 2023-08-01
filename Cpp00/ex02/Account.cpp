/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 07:43:56 by yismaail          #+#    #+#             */
/*   Updated: 2023/08/01 18:26:09 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	_accountIndex = 0;
int	_amount = 0;
int	_nbDeposits = 0;
int	_nbWithdrawals = 0;

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

void Account::makeDeposit(int deposit)
{
	static int nb_depo = 0
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			  << "p_amount:" << this->_amount << ";"
			  << "deposit:" << deposit << ";";
	this->_amount = this->_amount + deposit;
	std::cout << "amount:" << this->_amount << ";";
	if (deposit > 0)
		nb_depo++;
	std::cout << "nb_deposits:" << nb_depo << std::endl;	
}

bool Account::makeWithdrawal(int withdrawal)
{
	static int nb_wdr = 0;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			  << "p_amount:" << this->_amount << ";";
	if ((this->_amount - withdrawal) > 0)
	{
		nb_wdr++;
		this->_amount = this->_amount - withdrawal;
		std::cout << "withdrawal:" << withdrawal << ";"
				  << "amount:" << this->_amount << ";"
				  << "nb_withdrawals:" << nb_wdr << std::endl;
	}
	else
		std::cout << "withdrawal:refused" << std::endl; 
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			  << "amount:" << this->_amount << ";"
			  << "closed" << std::endl;
}