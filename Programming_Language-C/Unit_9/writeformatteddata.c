#include<stdio.h>
int main() {
    FILE *fp;
    float salary = 300000;
    char name[] = "Jhon";

    fp = fopen("emp.txt", "w");
    fprintf(fp, "Name: %s\nSalary: %.2f\n", name, salary);
    fclose(fp);
    return 0;
}