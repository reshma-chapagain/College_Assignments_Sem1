//Wap to change calye of a cairable using pointer and print it,
#include<stdio.h>
int main()
{
    int x=10;
    
    printf("Value of x before change: %d\n", x);
  
    int *ptr=&x;
    *ptr=20;
    printf("Value of x after change: %d\n", x);
    return 0;
}
