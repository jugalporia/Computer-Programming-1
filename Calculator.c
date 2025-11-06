#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int main(void) {
    char op;
    int num1, num2;
    int result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (op) {
        case '+':
            result = add(num1, num2);
            printf("%d + %d = %d\n", num1, num2, result);
            break;

        case '-':
            result = subtract(num1, num2);
            printf("%d - %d = %d\n", num1, num2, result);
            break;

        case '*':
            result = multiply(num1, num2);
            printf("%d * %d = %d\n", num1, num2, result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Cannot divide by zero.\n");
            } else {
                result = divide(num1, num2);
                printf("%d / %d = %d\n", num1, num2, result);
            }
            break;

        default:
            printf("Error: Invalid operator. Please use +, -, *, or /.\n");
            break;
    }

    return 0;
}
