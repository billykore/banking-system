#include <stdio.h>
#include "Money.h"


int main()
{
    char username[30];
    int pass;
    char Next;
    double MoneyTransfer;
    int option = 0;
    char loop;

    
    do
    {
        printf("Enter Username: ");
        scanf("%s", &username);
        printf("Enter Password: ");
        scanf("%d", &pass);
        printf("Welcome %s to the joko bank \n", username);
    
        printf("1. TRANSFER \n");
        printf("2. BALANCE \n");
        printf("Enter The option: ");
        scanf("%d", &option);

    if (option == 1)
    {
        printf("\nTransfer: ");
        scanf("%lf", &MoneyTransfer);
        Transfer(MoneyTransfer);
    }else if (option == 2)
    {
        CheckAccount();
    }else{
        printf("NOT VALID INPUT");
    }


        printf("\nWanna check again? (Y/N): ");
        scanf(" %c", &loop);

    } while (loop == 'Y' || loop == 'y');


  
    


    


    return 0;
}
