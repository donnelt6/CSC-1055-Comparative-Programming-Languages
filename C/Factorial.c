#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    // Taking input from the user
    printf("Enter number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    printf("factorial: %d\n", factorial);

    return 0;
}