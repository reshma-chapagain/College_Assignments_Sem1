#include <stdio.h>
int main()
{

    int length;
    int breadth;

    printf("Enter length:");
    scanf("%d", &length);
    printf("Enter breadth:");
    scanf("%d", &breadth);

    int Area;

    Area = length * breadth;
    printf("The area is : %d", Area);

    return 0;
}