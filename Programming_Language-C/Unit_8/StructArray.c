#include<stdio.h>
struct Student {
    int roll;
    float per;
};

int main() {
    struct Student s1[3];
    for(int i = 0; i<3; i++) {  //reading data for 3 students
        printf("Enter Roll: ");
        scanf("%d", s1[i].roll);
        printf("\nEnter Percentage:");
        scanf("%f", s1[i].per);
    }
    for( int i = 0; i<3; i++)
    {
        printf("Your Roll :%d, per : %f", s1[i].roll , s1[i].per);
    }

    return 0;
}