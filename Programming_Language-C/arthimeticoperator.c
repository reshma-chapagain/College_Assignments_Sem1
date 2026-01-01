#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first no:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);

    c = a + b;
    printf("\nSum = %d", c);

    c = a - b;
    printf("\nDifference = %d", c);

    c = a * b;
    printf("\nProduct = %d", c);

    c = a / b;
    printf("\nDivision = %d", c);

    c = a % b;
    printf("\nRemainder Division = %d", c);

    printf("\n Incremented value(++a) = %d", ++a);
    printf("\n Incremented Value(--a) %d", --a);
}

