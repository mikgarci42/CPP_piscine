#include <iostream>
#include <ctime>
#include "Account.hpp"
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

int	Account::checkAmount(void) const
{
	if (this->_amount < 0)
		return (0);
	return (1);
}

void	ft_time(void)
{
	struct tm *timeinfo;
	time_t	timer;

	time(&timer);
	timeinfo = localtime(&timer);
	std::cout << std::setfill('0')
		 << "["
		 << timeinfo->tm_year + 1900 << std::setw(2) << timeinfo->tm_mon + 1 << std::setw(2) << timeinfo->tm_mday
		 << "_"
		 << std::setw(2) << timeinfo->tm_hour << std::setw(2) << timeinfo->tm_min << std::setw(2) << timeinfo->tm_sec
		 << "] ";
}

void	Account::makeDeposit(int value)
{
	ft_time();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";deposit:" << value << ";";
	this->_amount += value;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits += 1;
	std::cout << "nb_deposits:" << this->_nbDeposits << "\n";
	this->_totalAmount += value;
	Account::_totalNbDeposits += 1;
}

bool	Account::makeWithdrawal(int value)
{
	ft_time();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	this->_amount -= value;
	if (checkAmount())
	{
		std::cout << "withdrawal:" << value << ";";
		std::cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals += 1;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << "\n";
		this->_totalAmount -= value;
		Account::_totalNbWithdrawals += 1;
		return true;
	}
	this->_amount += value;
	std::cout << "withdrawal:refused\n";
	return false;
}

void	Account::displayStatus(void) const
{
	ft_time();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	ft_time();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

Account::~Account(void)
{
	ft_time();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed\n";
}

Account::Account(void)
{
	return ;
}

Account::Account(int a) : _amount(a)
{
	ft_time();
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts += 1;
	Account::_totalAmount += this->_amount;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created\n";
}
