#include<stdio.h>

float area( float side);
float circlearea(float radius);
float rectarea(float length , float breadth);
int main() {

    float length = 10;
    float breadth = 20;

    printf("area is: %f", rectarea(length,breadth));
    return 0;
}

float area(float side) {
    return side * side;
}

float circlearea(float radius)

{
    return 3.14 * radius * radius;

}

float rectarea(float length, float breadth) {
    return length * breadth;
}