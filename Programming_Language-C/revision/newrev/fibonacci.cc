#include<stdio.h>

int fibo(int n);

int main () {
    
    return 0;
}

int fibo(int n) {
   int fibnm1 = fibo(n-1) ;
   int fibnm2 = fibo(n-2);
   int fibn = fibnm1 - fibnm2 ;
   
   return fibn;
}