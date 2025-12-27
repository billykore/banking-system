#include <stdbool.h>
#include <stdio.h>

#include "account.h"
#include "database.h"

bool transfer(account_t *from, account_t *to, const double amount)
{
    if (amount > from->balance) {
        printf("Insufficient balance!\n");
        return false;
    }

    debit(from, amount);
    credit(to, amount);

    return true;
}

double checkBalance(const char *accountNumber)
{
    const account_t *account = getAccount(accountNumber);
    return account->balance;
}
