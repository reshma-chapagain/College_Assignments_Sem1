#include<stdio.h>
int main()
{
    int A = 10; //1010
    int B = 12; //1100
    printf("Bitwise operator & : %d \n", A&B);
    printf("Bitwise operator | : %d \n", A|B);
    printf("Bitwise operator ^ : %d \n", A^B);
    printf("Bitwise operator ~ : %d \n", ~A);
    printf("Bitwise operator << : %d \n", A<<1);
    printf("Bitwise operator >> : %d \n", A>>1);
    return 0;
}