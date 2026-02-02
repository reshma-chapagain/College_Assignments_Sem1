//Wap to print the sum of digit
#include<stdio.h>
int main() {
    int n = 1234;
    int sum = 0;
    int rem;
    while(n!=10) {
        rem =n%10;
        sum= sum+rem;
        n=n/10;
    }

    printf("sum of digit =%d",sum);
    return 0;
}