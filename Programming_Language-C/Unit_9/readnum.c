//wap to write two num and print it using file
#include<stdio.h>
int main(){
    int a=10,b=40;
    FILE *fp;
    fp=fopen("num.txt","w");
    fprintf(fp,"%d %d",a,b);
    fclose(fp);

    fp=fopen("num.txt","r");
    fscanf(fp,"%d %d",&a,&b);
    printf("First num: %d, Second num: %d",a,b);
    fclose(fp);
    return 0;
}