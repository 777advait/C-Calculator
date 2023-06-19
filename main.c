#include <stdio.h>

// func declarations
int operate(int operation);

// main func
int main() {
    printf("Select operation:\n[1] Add\n[2] Subtract\n[3] Divide\n[4] Multiply\n\nEnter corresponding number: ");
    int operation;

    scanf("%d", &operation);

    printf("\nYour result is: %d", operate(operation));

    return 0;
}

// func definations
int operate(int operation) {
    int num1, num2, result;

    if (operation == 1) {

        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);

        result = num1 + num2;
    }

    else if (operation == 2) {
        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);

        result = num1 - num2;
    }

    else if (operation == 3) {
        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);

        result = num1 / num2;
    }

    else if (operation == 4) {
        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);

        result = num1 * num2;
    }

    return result;
}