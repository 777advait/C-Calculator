#include <stdio.h>

enum Operation { Add = 1, Sub, Div, Mul };

// func declarations
int operate(int operation);

// main func
int main() {
  printf("Select operation:\n[1] Add\n[2] Subtract\n[3] Divide\n [4] "
         "Multiply\n\nEnter corresponding number: ");

  int operation;
  scanf("%d", &operation);

  if (operation < 1 || operation > 4) {
    printf("Invalid operation index: %d", operation);
  }

  printf("\nYour result is: %d", operate(operation));

  return 0;
}

// func definations
int operate(int operation) {
  int num1, num2;

  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);

  switch (operation) {
  case Add:
    return num1 + num2;

  case Sub:
    return num1 - num2;

  case Mul:
    return num1 * num2;

  case Div:
    return num1 / num2;

  default:
    return 0;
  }
}
