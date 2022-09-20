#include <stdio.h>
#include <stdbool.h>

int main()
{
    char operator;
    double num1;
    double num2;
    double result;
    bool status = true;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("Enter number 1: ");
    scanf("%lf", &num1);
    printf("Enter number 2: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        status = false;
        printf("%c is not a valid operator", operator);
        break;
    }
    if (status)
    {
        return printf("\nResult: %.2lf", result);
    }
    else
    {
        return 0;
    }
}