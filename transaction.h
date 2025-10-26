#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "account.h"

int transfer(account_t *from, account_t *to, double amount);

#endif // TRANSACTION_H
