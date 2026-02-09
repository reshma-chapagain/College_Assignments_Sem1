//Wap  assign two values and print square with function
#include<stdio.h>
int square();

int main() {
    printf("Square of num is %d", square());
    return 0;
}
int square() {
    int n=10;
    return n*n;
}