#include<stdio.h>
int diff(int a , int b);
int main() {
    int x=10;
    int y=20;
    printf("Difference of two nums = %d",diff(x,y));
    return 0;
}

int diff(int a, int b) {
    return a-b;
}