#include <string.h>

#include "account.h"

struct Account accounts[2] = {
    {"123456", 1000.0},
    {"789012", 2000.0}
};

account_t *getAccount(char *accountNumber) {
    for (int i = 0; i < 2; i++) {
        if (strcmp(accounts[i].accountNumber, accountNumber) == 0) {
            return &accounts[i];
        }
    }
    return NULL;
}
