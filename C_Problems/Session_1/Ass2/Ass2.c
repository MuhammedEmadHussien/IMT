#include <stdio.h>

int main()
{
    int num1, num2, num3;

    // Scan three numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Print the numbers in reversed order
    printf("Numbers in reversed order: %d %d %d\n", num3, num2, num1);

    return 0;
}
