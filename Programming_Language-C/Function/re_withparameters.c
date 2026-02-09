//Wap to assign twqo values and print swuare wirh funtion
#include<stdio.h>
int square(int x);
int main() {
    int a=10;   
    printf("Square of %d is %d", a, square(a));
    return 0;
}
int square(int x) {
    return x*x;
}