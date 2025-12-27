#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <stdbool.h>

#include "account.h"

bool transfer(account_t *from, account_t *to, double amount);

#endif // TRANSACTION_H
