#include<stdio.h>
int main() {
    int length, breadth;
    int area;
    printf("Enter length:");
    scanf("%d", &length);
    printf("Enter breadth");
    scanf("%d", &breadth);

    area = length * breadth ; 

    printf("The area is : %d", area);

    return 0;
}
