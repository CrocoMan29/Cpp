/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 07:43:56 by yismaail          #+#    #+#             */
/*   Updated: 2023/07/31 07:58:39 by yismaail         ###   ########.fr       */
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
	return _nbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _nbWithdrawals;
}

Account::Account(int initial_deposit)
{
	_accountIndex
}

void Account::displayAccountsInfos(void)
{
}
