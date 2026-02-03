#include<stdio.h>
int main() {
    int n=1234;
    int rev=0, rem=0, temp=n;

    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    if(temp==rev)
    
}