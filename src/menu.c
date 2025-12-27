#include <stdbool.h>
#include <stdio.h>

#include "database.h"
#include "transaction.h"

void displayMenu()
{
    printf("Welcome to the Banking System\n");
    printf("Select:\n");
    printf("1. Transfer\n");
    printf("2. Check Balance\n");
    printf("0. Exit\n");
}

char getInput()
{
    char input;
    printf("Enter your choice: ");
    scanf(" %c", &input);
    return input;
}

void handleTransfer()
{
    char sourceAccountNumber[10];
    char destinationAccountNumber[10];
    double amount;

    printf("Please enter your account number: ");
    scanf("%s", sourceAccountNumber);

    printf("Enter destination account number: ");
    scanf("%s", destinationAccountNumber);

    printf("Enter amount to transfer: ");
    scanf("%lf", &amount);

    account_t *sourceAccount = getAccount(sourceAccountNumber);
    account_t *destinationAccount = getAccount(destinationAccountNumber);

    const bool isSuccess = transfer(sourceAccount, destinationAccount, amount);
    if (!isSuccess) {
        printf("Failed transfer %.2lf from %s to %s\n", amount, sourceAccountNumber,
               destinationAccountNumber);
        return;
    }

    printf("Transferring %.2lf to account %s\n", amount, destinationAccountNumber);
}

void handleCheckBalance()
{
    char accountNumber[10];

    printf("Enter your account number: ");
    scanf("%s", accountNumber);

    const account_t *account = getAccount(accountNumber);
    printf("Balance: %.2lf\n", account->balance);
}

bool processInput(const char input)
{
    switch (input) {
        case '1':
            printf("Transfer selected\n");
            handleTransfer();
            return true;
        case '2':
            printf("Check Balance selected\n");
            handleCheckBalance();
            return true;
        case '0':
            printf("Exiting...\n");
            return false;
        default:
            printf("Invalid choice\n");
            return true;
    }
}
