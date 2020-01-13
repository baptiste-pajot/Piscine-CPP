/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Account.class.cpp                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 16:04:25 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 17:12:58 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

static std::string	formate_date(int date)
{
    if (date < 10)
    {
        return ("0" + std::to_string(date));
    }
    return (std::to_string(date));
}

static void			display_timeStamp(void)
{
    time_t now = std::time(0);
    tm *ltm = std::localtime(&now);
    std::cout   << "["
                << 1900 + ltm->tm_year
                << formate_date(ltm->tm_mon + 1)
                << formate_date(ltm->tm_mday)
                << "_"
                << formate_date(ltm->tm_hour)
                << formate_date(ltm->tm_min)
                << formate_date(ltm->tm_sec)
                << "] " ;
}

int		Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int		Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int		Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	display_timeStamp();
	std::cout << "acccount:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	display_timeStamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	Account::_nbAccounts--;
	display_timeStamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";closed" << std::endl;
}

/*void	Account::makeDeposit(int deposit)
{
}

bool	Account::makeWithdrawal(int withdrawal)
{
}

int		Account::checkAmount(void) const
{
}*/

void	Account::displayStatus(void) const
{
}

/*void	Account::_displayTimestamp(void)
{
}*/

Account::Account(void)
{
}