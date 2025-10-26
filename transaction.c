#include <stdio.h>
#include <string.h>

#include "account.h"
#include "database.h"

int transfer(account_t *from, account_t *to, double amount) {
    if (amount > from->balance) {
        printf("Insufficient balance!\n");
        return -1;
    }

    debit(from, amount);
    credit(to, amount);

    return 0;
}

double checkBalance(char *accountNumber) {
    account_t *account = getAccount(accountNumber);
    return account->balance;
}
