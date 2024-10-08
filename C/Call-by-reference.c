#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;    
    *b = temp;  
}

int main() {
    int tmp, num1, num2;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    swap(&num1, &num2);

    printf("num1 : %d\n", num1);
    printf("num2 : %d\n", num2);

    return 0;
}