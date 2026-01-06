/*#include <stdio.h>
int main()
{
    int a = 10;

    printf("\nAfter pre-increment %d", ++a);
    printf("\nAfter post decrement %d", a--);
    printf("\nAfter decrement %d", --a);
    return 0;
}*/

/*WAP to read percentage and print pass or fail*/
/*#include <stdio.h>
int main()
{
    float per;
    printf("Enter the percentage(%)");
    scanf("%f", &per);

    if (per >= 40)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}*/

#include <stdio.h>
int main()
{
    int Math, Sci;
    printf("Enter marks of Math:");
    scanf("%d", &Math);
    printf("Enter marks of Science:");
    scanf("%d", &Sci);
    if  (Math>=45 && Sci>=45){
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

return 0;
}