//wap to write number to a binary file.
#include<stdio.h>
int main(){
    FILE *fp;
    int num=20;
    fp=fopen("data.dat","wb");
    fwrite(&num,sizeof(num),1,fp);
    fclose(fp);
    return 0;
}