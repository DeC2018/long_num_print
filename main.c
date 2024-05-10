#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LENGTH 1000

int main() {
    char input[MAX_LENGTH];
    char sign = '+';

    // Read the input string from the keyboard
    printf("Enter a string of numbers (maximum 1000 characters): ");
    fgets(input, sizeof(input), stdin);

    // Check if the input starts with a non-numeric character
    if (isdigit(input[0]) || input[0] == '+') {
        sign = '+';
    } else if (input[0] == '-') {
        sign = '-';
    }

    // Print the string of numbers with the appropriate sign
    printf("%c ", sign);
    for (int i = (sign == '-' ? 1 : 0); input[i] != '\0'; i++) {
        printf("%c", input[i]);
    }
    printf("\n");

    return 0;
}
