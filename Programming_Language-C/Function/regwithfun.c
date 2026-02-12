//Wap to print register var value using function.
#include<stdio.h>
void displayAuto(void);

int main() {
    displayAuto();
    return 0;
}

void displayAuto() {
    register int x=10;
    printf("Value of x = %d\n", x);
}
