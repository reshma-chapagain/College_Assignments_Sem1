#include<stdio.h>
int sum(int a , int b);
int main() {
    int x=10;
    int y=20;
    printf("Sum of two nums = %d",sum(x,y));
    return 0;
}

int sum(int a, int b) {
    return a+b;
}