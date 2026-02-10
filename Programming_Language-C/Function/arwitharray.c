//Wap to pass age of arr as argument and print it.
#include<stdio.h>
void age(int arr[]);

int main() {
    int ages[5] = {10,20,30,40,50};
    age(ages);
    return 0;
}

void age(int arr[]) {
   for(int i=0; i<5; i++) {
       printf("%d\t", arr[i]);
   }
}