#include<stdio.h>

int main()
{
    float P, T, R, SI, Amount;


    printf("Enter Principle : " );
    scanf("%f",&P);

    printf("Enter Rate:");
    scanf("%f",&R);

    printf("Enter Time:");
    scanf("%f",&T);

   SI= (P*T*R)/100;
   Amount= P + SI;

   printf("\n Principle = %f", P);
   printf("\n Simple Interest = %f", SI);
   printf("\n Amount = %f\n", Amount);

   return 0;

}