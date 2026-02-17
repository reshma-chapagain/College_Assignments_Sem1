#include<stdio.h>
int main(){
    char *name[4] = {"ram", "rohit", "sita", "gita"};
    for(int i=0; i<4; i++) {
        printf("%s\n", name[i]);
    }
    return 0;
}