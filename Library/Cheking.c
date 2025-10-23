#include <stdio.h>
#include "Money.h"

 void CheckAccount(void){
    char next;
    
    printf("Check Your Savings [Y/N]: ");
    scanf(" %c", &next);

    if (next == 'y'  || next == 'Y')
    {
        printf("Your Money in bank is %.0lf", Bank );
    }else{
        printf("huh?");
    }
    
}