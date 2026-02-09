//Wap to  assign two values and print square with funtion
#include<stdio.h>
void square(void);

int main() {
    square();
    return 0;
}

void square() {
    int num=10;
    int square=num*num;
    printf("Square of %d is %d", num, square);
}

