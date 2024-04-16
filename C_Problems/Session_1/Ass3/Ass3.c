#include <stdio.h>

int main()
{
    int num1, num2;

    // Scan two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Perform operations
    int sum = num1 + num2;
    int diff = num1 - num2;
    int anding = num1 & num2;
    int oring = num1 | num2;
    int xoring = num1 ^ num2;

    // Print results
    printf("Summation: %d\n", sum);
    printf("Subtraction: %d\n", diff);
    printf("Bitwise AND: %d\n", anding);
    printf("Bitwise OR: %d\n", oring);
    printf("Bitwise XOR: %d\n", xoring);

    return 0;
}
