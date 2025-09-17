#include <stdio.h>

int main() {
    int num, rem, binary = 0, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num > 0) {
        rem = num % 2;             // get remainder
        binary = binary + rem * place; // build binary number
        place = place * 10;        // move to next position
        num = num / 2;             // reduce number
    }

    printf("Binary = %d", binary);

    return 0;
}