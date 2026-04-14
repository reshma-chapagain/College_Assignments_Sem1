#include<stdio.h>
void table(int n);

int main() {
    int  n;
    printf("Enter a number");
    scanf("%d", &n);
    table(n);
}

void printTable(int n) {
    for(int i =1; i<=10; i++) {
        printf(i*n);
    }
}  