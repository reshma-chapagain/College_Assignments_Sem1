//wAP TO COMPARE RAM AND ROHIT
#include<stdio.h>
#include<string.h>
int main(){
    char name1[10]="Ram";
    char name2[10]="Rohit";
    int c = strcmp(name1,name2);
    if(c==1){
        printf("%s is greater",name1);
        }else if(c==-1){
            printf("%s is greater",name2);
        }else{
            printf("%s and %s are same", name1, name2);
        }
    return 0;
}