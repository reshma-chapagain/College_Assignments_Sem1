
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr, i;
    ptr=(int*)calloc(5,sizeof(int));
    for (i=0;i<5;i++){
        printf("%d ",ptr[i]);
    }
    free(ptr);
    return 0;
}