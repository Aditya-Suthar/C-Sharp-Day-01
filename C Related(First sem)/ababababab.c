#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // Seed with current time

    int dice1 = (rand() % 6) + 1;  // Random number 1–6
    int dice2 = (rand() % 6) + 1;  // Random number 1–6

    printf("You rolled: %d and %d\n", dice1, dice2);
    printf("Total: %d\n", dice1 + dice2);

    return 0;
}


//random code to study copied from chatgpt