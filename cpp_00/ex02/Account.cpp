/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 16:31:13 by keteo             #+#    #+#             */
/*   Updated: 2025/12/30 16:31:13 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::getNbAccounts()
{
	return _nbAccounts;
}

int Account::getTotalAmount()
{
	return _totalAmount;
}

int	Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return	_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
			  << ";total:" << getTotalAmount()
			  << ";deposits:" << getNbDeposits()
		  	  << ";withdrawals:" << getNbWithdrawals()
			  << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits ++;
	std::cout << "index:" << _accountIndex
			  << ";p_amount:" << _amount;
	_amount += deposit;
	std::cout << ";amount:" << _amount
			  << ";deposit:" << deposit
			  << ";nb_deposits:" << _nbDeposits
			  << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";p_amount:" << _amount;

	if (_amount < withdrawal)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;

	std::cout << ";withdrawal:" << withdrawal
			  << ";amount:" << _amount
			  << ";nb_withdrawals:" << _nbWithdrawals
			  << std::endl;
	return true;
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";deposits:" << _nbDeposits
			  << ";withdrawals:" << _nbWithdrawals
			  << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t	now;
	std::tm*	timeinfo;

	now = std::time(NULL);
	timeinfo = std::localtime(&now);

	std::cout << "["
			  << (timeinfo->tm_year + 1900)
			  << (timeinfo->tm_mon + 1 < 10 ? "0" : "")
			  << (timeinfo->tm_mon + 1)
			  << (timeinfo->tm_mday < 10 ? "0" : "")
			  << timeinfo->tm_mday
			  << "_"
			  << (timeinfo->tm_hour < 10 ? "0" : "")
			  << timeinfo->tm_hour
			  << (timeinfo->tm_min < 10 ? "0" : "")
			  << timeinfo->tm_min
			  << (timeinfo->tm_sec < 10 ? "0" : "")
			  << timeinfo->tm_sec
			  << "] ";
}