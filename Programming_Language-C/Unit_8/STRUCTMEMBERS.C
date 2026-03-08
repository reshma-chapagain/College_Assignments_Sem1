// WAP TO CREATE STRUCTURE HAVING MEMBERS AS NUM1 NUM2 NOW ASSIGN VALUES AND PRINT SUM
#include <stdio.h>
struct number
{
    int num1;
    int num2
};
int main()
{
    struct number n1;
    n1.num1 = 10;
    n1.num2 = 20;
    int sum = n1.num1 + n1.num2;

    printf("Sum of Numbers using struct =  %d", sum);

    return 0; 
}