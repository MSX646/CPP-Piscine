#include <iomanip>
#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";closed" << std::endl;
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
}

int Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawls:" << getNbWithdrawals() << std::endl; 
}

void	Account::_displayTimestamp(void)
{
	static std::time_t cur_time = std::time(nullptr);
	std::cout << std::put_time(std::localtime(&cur_time), "[%Y%m%d_%OH%OM%OS] ");	
}

void	Account::makeDeposit(int deposit)
{
		this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	if (deposit < 0)
	{
		std::cout << "refused" << std::endl;
		return;
	}
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount" << this->_amount << ";";
	std::cout<< "withdrawal:";
	if (withdrawal > this->_amount || withdrawal < 0)
	{
		std::cout<< "refused" << std::endl;
		return false;
	}
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	std::cout << withdrawal << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

int Account::checkAmount(void) const
{
	return this->_amount;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}
