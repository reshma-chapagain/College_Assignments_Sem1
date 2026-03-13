#include<stdio.h>
int main() {
    FILE *fp;
    fp = fopen("data.txt", "w");
    fprintf(fp, "Hello World");
    printf("File created and data written successfully.\n");
    fclose(fp);
    return 0;
}