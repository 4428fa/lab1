#include <stdio.h>
int main() {
    int sum = 0;
    // Using for loop
    printf("Using for loop:\n");
    for (int i = 2; i <= 100; i += 2) {
        sum += i;
        printf("Adding: %d, Current Sum: %d\n", i, sum);
    }
    printf("Total Sum: %d\n\n", sum);
    // Reset sum
    sum = 0;
    // Using while loop
    printf("Using while loop:\n");
    int i = 2;
    while (i <= 100) {
        sum += i;
        printf("Adding: %d, Current Sum: %d\n", i, sum);
        i += 2;
    }
    printf("Total Sum: %d\n\n", sum);
    // Reset sum
    sum = 0;
    // Using do-while loop
    printf("Using do-while loop:\n");
    i = 2;
    do {
        sum += i;
        printf("Adding: %d, Current Sum: %d\n", i, sum);
        i += 2;
    } while (i <= 100);
    printf("Total Sum: %d\n", sum);
    return 0;
}