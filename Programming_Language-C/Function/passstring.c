#include<stdio.h>
void printString(char str[]);

int main() {
    char str[] = "Hello, World!";
    printString(str);
    return 0;
}

void printString(char str[]) {
    printf("%s\n", str);
}