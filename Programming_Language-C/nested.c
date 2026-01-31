//wap to print the table of 1 to 10 usinf nested loop

#include<stdio.h>
int main() {
    for (int a=20; a<=40; a++) {
        for (int b=1; b<=10; b++){
            printf("%d\t", a*b);
        }
    }
    printf("\n");
}