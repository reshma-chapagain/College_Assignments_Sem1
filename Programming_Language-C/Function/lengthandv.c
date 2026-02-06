//Wap to read length and breadth and calculate perimeter using function, passing value through parameter.
#include<stdio.h>
int perimeter(int l , int b);
int main() {
    int length, breadth;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &length, &breadth);
    printf("Perimeter of rectangle = %d", perimeter(length, breadth));
    return 0;
}

int perimeter(int l, int b) {
    return 2*(l+b);
}