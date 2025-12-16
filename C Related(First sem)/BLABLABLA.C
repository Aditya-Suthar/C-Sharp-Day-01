#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with current time
    srand(time(0));

    // Generate 10 random numbers between 1 and 100
    for (int i = 0; i < 10; i++) {
        int num = (rand() % 100) + 1;  // range 1 to 100
        printf("Random number %d: %d\n", i + 1, num);
    }

    return 0;
}

// just a random code summoned from chatgpt to study
