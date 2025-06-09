/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 14:15:46 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/09 17:36:22 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <time.h>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account() {}

Account::Account( int initial_deposit ): _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts++;
	//[19920104_091532] index:0;amount:42;created
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";created" << std::endl;
}
Account::~Account( void )
{
	//[19920104_091532] index:0;amount:47;closed
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";closed" << std::endl;
}

int	Account::getNbAccounts( void ) {return _nbAccounts;}
int	Account::getTotalAmount( void ) {return _totalAmount;}
int	Account::getNbDeposits( void ) {return _totalNbDeposits;}
int	Account::getNbWithdrawals( void ) {return _totalNbWithdrawals;}

void	Account::displayAccountsInfos( void )
{
	//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
			<< ";total:" << _totalAmount
			<< ";deposits:" << _totalNbDeposits
			<< ";withdrawals:" << _totalNbWithdrawals
			<< std::endl;
}
void	Account::makeDeposit( int deposit )
{
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;

	//[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";p_amount:" << _amount - deposit
			<< ";deposit:" << deposit
			<< ";amount:" << _amount
			<< ";nb_deposits:" << _nbDeposits
			<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > checkAmount())
	{
		//[19920104_091532] index:0;p_amount:47;withdrawal:refused
		_displayTimestamp();
		std::cout << "index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";withdrawal:refused"
				<< std::endl;
		return false;
	}
	else
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;

		//[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
		_displayTimestamp();
		std::cout << "index:" << _accountIndex
				<< ";p_amount:" << _amount + withdrawal
				<< ";withdrawal:" << withdrawal
				<< ";amount:" << _amount
				<< ";nb_withdrawals:" << _nbWithdrawals
				<< std::endl;
	}
	return true;
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::displayStatus( void ) const
{
	//[19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";deposits:" << _nbDeposits
			<< ";withdrawals:" << _nbWithdrawals
			<< std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t rawtime;
	struct tm * timeinfo;
	char buffer [20];

	time (&rawtime);
	timeinfo = localtime (&rawtime);

	strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", timeinfo);
	std::cout << buffer ;
}
