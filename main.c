#include <stdbool.h>

#include "src/menu.h"

int main()
{
    bool isRunning = true;
    do {
        displayMenu();
        isRunning = processInput(getInput());
    } while (isRunning);
}
