#include<stdio.h>
int main() {
    int i;
    int n;

    printf("Enter a number");
    scanf("%d", &n);

    int sum = 0;
    for(i = 1; i<= n; i++) {
        sum = sum + i;
       
    }

     printf("Sum is: %d", sum);


     for(i = n; i>=1; i--) {
     printf("%d\n", i );

    }
     return 0;
}