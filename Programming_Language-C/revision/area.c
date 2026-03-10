#include<stdio.h>
int main() {
    int l, b , area, perimeter;
    printf("Enter length");
    scanf("%d",&l );
    printf("Enter breadth");
    scanf("%d", &b);

    area = l * b;
    perimetr = 2* (l + b);
    printf("Area is %d",area);
    printf("Perimeter is %d", perimeter);
    return 0;
}