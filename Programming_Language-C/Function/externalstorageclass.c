#include<stdio.h>
extern int length, breadth;
int area() {
    return length * breadth;

}
int main(){
     printf("Area of rectangle = %d\n", area());
}

int length = 10;
int breadth = 5;