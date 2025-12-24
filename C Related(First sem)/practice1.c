#include <stdio.h>
int main() {
    int x = 10;
    if (x == 10 || ++x == 11)
        printf("%d", x);
    return 0;
}