#ifndef ACCOUNT_H
#define ACCOUNT_H

typedef struct Account {
    char accountNumber[10];
    double balance;
} account_t;

double debit(account_t *account, double amount);

double credit(account_t *account, double amount);

double getBalance(account_t *account);

#endif // ACCOUNT_H
