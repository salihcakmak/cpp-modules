#include "Account.hpp"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;
using std::setfill;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts() {
    return _nbAccounts;
}

int Account::getTotalAmount() {
    return _totalAmount;
}

int Account::getNbDeposits() {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals() {
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos() {
    _displayTimestamp();
    cout
            << "accounts:" << getNbAccounts()
            << ";total:" << getTotalAmount()
            << ";deposits:" << getNbDeposits()
            << ";withdrawals:" << getNbWithdrawals()
            << endl;
}

void Account::makeDeposit(int deposit) {
    _nbDeposits++;
    _totalNbDeposits++;
    _displayTimestamp();
    cout
            << "index:" << _accountIndex
            << ";p_amount:" << checkAmount()
            << ";deposit:" << deposit
            << ";amount:" << checkAmount() + deposit
            << ";nb_deposits:" << _nbDeposits
            << endl;
    _amount += deposit;
    _totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    if (_amount - withdrawal < 0) {
        cout
                << "index:" << _accountIndex
                << ";p_amount:" << checkAmount()
                << ":refused"
                << endl;
        return false;
    } else {
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        cout
                << "index:" << _accountIndex
                << ";p_amount:" << checkAmount()
                << ";withdrawal:" << _nbWithdrawals
                << ";amount:" << checkAmount() - withdrawal
                << ";nb_withdrawals:" << _nbWithdrawals
                << endl;
        _amount -= withdrawal;
    }
    return true;
}

int Account::checkAmount() const {
    return _amount;
}

void Account::displayStatus() const {
    _displayTimestamp();
    cout
            << "index:" << _accountIndex
            << ";amount:" << checkAmount()
            << ";deposits:" << _nbDeposits
            << ";withdrawals:" << _nbWithdrawals
            << endl;
}

void Account::_displayTimestamp() {
    time_t curr_time;
    curr_time = time(NULL);

    tm *time = localtime(&curr_time);
    cout
            << "["
            << time->tm_year + 1900
            << setw(2) << setfill('0')
            << time->tm_mon
            << setw(2) << setfill('0')
            << time->tm_mday
            << "_"
            << time->tm_hour
            << time->tm_min
            << time->tm_sec
            << "] ";

}

Account::Account(int initial_deposit) {
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _displayTimestamp();
    cout
            << "index:" << _accountIndex
            << ";amount:" << checkAmount()
            << ";created"
            << endl;
    _totalAmount += initial_deposit;
}

Account::Account() {}

Account::~Account() {
    _displayTimestamp();
    cout
            << "index:" << _accountIndex
            << ";amount:" << checkAmount()
            << ";closed"
            << endl;
}