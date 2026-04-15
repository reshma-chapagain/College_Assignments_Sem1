#include<stdio.h>

int per (int sci , int math , int sansk);

int main() {
    int sci = 98;
    int math = 96;
    int sanskrit = 99;

    printf("Percentage is :%d", per(sci , math , sanskrit));
    return 0;
}

int per(int sci, int math, int sansk) {
    return ((sci + math + sansk)/3);
}