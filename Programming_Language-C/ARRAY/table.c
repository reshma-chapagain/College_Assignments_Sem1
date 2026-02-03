#include<stdio.h>
int main(){
    int arr[2][3]={
        {10,20,30},
        {20,40,60};
    };

    for (int i = 0; i < 2; i++)
    {    for (int j = 0; i < 3; j++)
        prinrf("%d\t", arr[i][j]);
    }

    printf("\t");
    
}