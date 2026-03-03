#include<stdio.h>
int main() {
    int a,b;
    int sum,diff,prod, Q;
    printf("Enter the first num:");
    scanf("%d",a);
    printf("Enter the second number");
    scanf("%d", b);

    sum = a + b;
    diff = a - b;
    prod= a * b;
    Q = a / b;
    printf("Sum is %d", sum);
    printf("diff is %d", diff);
    printf("prod is %d", prod);
    return 0;
}