#include "account.h"

double debit(account_t *account, double amount) {
    if (amount > account->balance) {
        return -1;
    }
    account->balance -= amount;
    return account->balance;
}

double credit(account_t *account, double amount) {
    account->balance += amount;
    return account->balance;
}

double getBalance(account_t *account) {
    return account->balance;
}
