#include <stdio.h>
#include "Money.h"

double Transfer(double transfer) {
    
    if (transfer > Bank) {
        printf("Insufficient balance!\n");
    } else if (transfer <= 0) {
        printf("Invalid amount.\n");
    } else {
        Bank -= transfer;
        printf("Transfer successful!\n");
        printf("Your money now is: %.0lf\n", Bank);
    }

    return Bank; 
}
