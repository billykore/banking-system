#include <stdio.h>

#include "menu.h"

int main() {
    printf("Welcome to the Banking System\n");

    while (1) {
        displayMenu();

        char input = getInput();

        processInput(input);
    }

    return 0;
}
