#include<stdio.h>
int main() {
    float per=85;
    if (per >=90) {
        printf("Grade A\n");
    } else if (per>=80) {
        printf("Grade B\n");
    } else if (per>=70) {
        printf("Grade C\n");
    } else if (per>=60) {
        printf("Grade D\n");
    } else {
        printf("Fail\n");
    }
}