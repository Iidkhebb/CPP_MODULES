#include "BetterSyntax.hpp"
#include "Account.hpp"
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account Acess Account(int initial_deposit)
{
    this->_amount = initial_deposit;
    this->_accountIndex = this->_nbAccounts;
    this->_nbAccounts++;
    this->_totalAmount += initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

void Account Acess _displayTimestamp(void)
{
    std::time_t rawtime;
    std::tm* timeinfo;
    char buffer [80];

    std::time(&rawtime);
    timeinfo = std::localtime(&rawtime);
    std::strftime(buffer,80,"[%Y%m%d_%H%M%S]",timeinfo);
    print(buffer);
}

void Account Acess makeDeposit(int deposit)
{
    this->_totalAmount += deposit;
    this->_totalNbDeposits++;
    this->_nbDeposits++;
    this->_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << (this->_amount + deposit) << ";nb_deposit:" << this->_nbDeposits << std::endl;
    this->_amount += deposit;
}

void Account Acess displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account Acess displayStatus(void) const
{
    this->_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

bool Account Acess makeWithdrawal(int withdrawal)
{
    if (this->_amount >= withdrawal)
    {
        this->_amount -= withdrawal;
        this->_totalAmount -= withdrawal;
        this->_totalNbWithdrawals++;
        this->_nbWithdrawals++;
        this->_displayTimestamp();
        std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        return true;
    }
    else
    {
        this->_displayTimestamp();
        std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
        return false;
    }
}

Account Acess ~Account(void)
{
    this->_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}
