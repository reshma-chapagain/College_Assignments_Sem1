/*#include<stdio.h>

int main()
{
    int a=20;
    printf("a=%d\n",a);
    a=40;
    printf("\na=%d",a);
    getch();
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    printf("%d\n", 20);
    printf("%c\n", 'A');
    printf("%f\n", 23.34);
    printf("%s\n", "Hello World");
    return 0;
}
    */
/*#include<stdio.h>
int main() {
    float rate;
    printf("Enter Rate :");
    scanf("%f",&rate);

    printf("\nEntered Rate is : %f", rate);
    return 0;
}*/
// WAP to read and char from user and print it
/*#include<stdio.h>
int main() {
    char ch; //variable must make sense

    printf("Enter a char :");
    scanf("%c",&ch);

    printf("%c", ch);

    return 0;

}*/

// QUESTIONS
/* WAP to read principle rate and time. Calculate SI and print SI. SI= (P*T*R)/100*/
/*#include<stdio.h>

int main()
{
    float P, T, R, SI;


    printf("Enter Principle : " );
    scanf("%f",&P);

    printf("Enter Rate:");
    scanf("%f",&R);

    printf("Enter Time:");
    scanf("%f",&T);

   SI= (P*T*R)/100;
   Amount= P+SI;

   printf("\n Principle = %f", P);
   printf("\n Simple Interest = %f", SI);
   printf("Simple Interest = %f\n", SI);

   return 0;

}*/

/*#include<stdio.h>
int main() {
    int length, breadth , area;
    printf("Enter the length : ");
    scanf("%d", &length);
    printf("\nEnter the breadth: ");
    scanf("%d" , &breadth);
    area = length * breadth;
    printf("\nArea = %d\n", area);
    return 0;
}


#include<stdio.h>
int main() {
    int A;

    printf("Enter Age: ");
    scanf("%d", &A);

    printf("Age of a person: %d\n", A);
    return 0;
}*/

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the char: ");
    ch = getchar();
    printf("\nYou entered %c", ch);

    return 0;
}

// wap to read your name using gets and print it using puts.