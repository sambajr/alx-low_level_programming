#include <stdio.h>
#include <stdlib.h>

int is_digit(char *str) {
    while (*str) {
        if (*str < '0' || *str > '9') {
            return 0; /* Not a digit */
        }
        str++;
    }
    return 1; /* All characters are digits */
}

void multiply(char *num1, char *num2) {
    int result;

    if (!is_digit(num1) || !is_digit(num2) {
        printf("Error\n");
        exit(98);
    }

    result = atoi(num1) * atoi(num2);
    printf("%d\n", result);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    multiply(argv[1], argv[2);

    return 0;
}

