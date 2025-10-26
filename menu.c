#include <stdio.h>
#include <stdlib.h>

#include "transaction.h"
#include "database.h"

void displayMenu() {
    printf("Select:\n");
    printf("1. Transfer\n");
    printf("2. Check Balance\n");
    printf("0. Exit\n");
}

char getInput() {
    char input;
    printf("Enter your choice: ");
    scanf(" %c", &input);
    return input;
}

void handleTransfer() {
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

    int result = transfer(sourceAccount, destinationAccount, amount);

    printf("Transfering %.2lf to account %s\n", amount, destinationAccountNumber);
}

void handleCheckBalance() {
    char accountNumber[10];

    printf("Enter your account number: ");
    scanf("%s", accountNumber);

    account_t *account = getAccount(accountNumber);
    printf("Balance: %.2lf\n", account->balance);
}

void processInput(char input) {
    switch (input) {
        case '1':
            printf("Transfer selected\n");
            handleTransfer();
            break;
        case '2':
            printf("Check Balance selected\n");
            handleCheckBalance();
            break;
        case '0':
            printf("Exiting...\n");
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
}
