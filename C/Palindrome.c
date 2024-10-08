#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], temp;
    int length, i, isPalindrome = 1;  

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;  
    }

    for (i = 0; i < length; i++) {
        str[i] = tolower(str[i]);
    }

    // Check if the string is a palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;  
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
