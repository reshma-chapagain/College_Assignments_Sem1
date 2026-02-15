#include<stdio.h>
int main () {
    int x = 10;
    int *intPtr = &x;
    printf("Address of x = %p\n", &x);
    printf("Address of x = %p", intPtr);

    return 0;
}