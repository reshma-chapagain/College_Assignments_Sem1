#include<stdio.h>

float conv(float cel);

int main() {
    float far = conv(0);
    printf("far : %f", far);
    return 0;
}

float conv(float cel) {
    float far = cel * (9.0/5.0) + 32;
    return far;
}
