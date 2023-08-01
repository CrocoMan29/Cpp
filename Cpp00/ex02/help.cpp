#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Account.hpp"

static void printTwoDigitNumber(int number);

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

int Account::getNbAccounts(void) {
	return _nbAccounts;
}

int Account::getTotalAmount(void) {
	return _totalAmount;
}

int Account::getNbDeposits(void) {
	return _totalNbDeposits;
}
int Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ';'
			  << "total:" << _totalAmount << ';'
			  << "deposits:" << _totalNbDeposits << ';'
			  << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit) {
	_nbAccounts++;
	_totalAmount += initial_deposit;

	this->_accountIndex = _nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
			  << "amount:" << this->_amount << ';'
			  << "created" << std::endl;
}

Account::~Account(void) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
			  << "amount:" << this->_amount << ';'
			  << "closed" << std::endl;
}

void Account::makeDeposit(int deposit) {
	_totalAmount += deposit;
	_totalNbDeposits++;

	this->_amount += deposit;
	this->_nbDeposits++;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
			  << "p_amount:" << this->_amount - deposit << ';'
			  << "deposit:" << deposit << ';'
			  << "amount:" << this->_amount << ';'
			  << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	if (withdrawal > this->_amount) {
		std::cout << "index:" << this->_accountIndex << ';'
				  << "p_amount:" << this->_amount << ';'
				  << "withdrawal:refused" << std::endl;
		return false;
	}

	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;

	this->_amount -= withdrawal;
	this->_nbWithdrawals++;

	std::cout << "index:" << this->_accountIndex << ';'
			  << "p_amount:" << this->_amount + withdrawal << ';'
			  << "withdrawal:" << withdrawal << ';'
			  << "amount:" << this->_amount << ';'
			  << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

int	 Account::checkAmount(void) const {
	return this->_amount;
}

void Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
			  << "amount:" << this->_amount << ';'
			  << "deposits:" << this->_nbDeposits << ';'
			  << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void) {
	std::time_t now_time_t = std::time(NULL);
	std::tm* now_tm = std::localtime(&now_time_t);

    std::cout << '[' << now_tm->tm_year + 1900;
	printTwoDigitNumber(now_tm->tm_mon + 1);
	printTwoDigitNumber(now_tm->tm_mday);
	std::cout << '_';
	printTwoDigitNumber(now_tm->tm_hour);
	printTwoDigitNumber(now_tm->tm_min);
	printTwoDigitNumber(now_tm->tm_sec);
	std::cout << "] ";
}

static void printTwoDigitNumber(int number) {
	if (number > 9)
		std::cout << number;
	else
		std::cout << 0 << number;
}