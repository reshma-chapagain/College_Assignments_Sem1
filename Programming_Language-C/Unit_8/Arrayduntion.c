#include <stdio.h>
struct Student
{
    int roll;
    float per;
};

void display(struct Student s1[3]);

int main()
{
    struct Student s1[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter Roll: ");
        scanf("%d", s1[i].roll);
        printf("\nEnter Percentage:");
        scanf("%f", s1[i].per);
    }

    display(s1);
    return 0;
}
void display(struct Student s1[])
{
    int n = sizeof(s1) / sizeof(s1[0]);
    for (int i = 0; i < n; i++)
    {
        printf("Your Roll :%d, per : %f", s1[i].roll, s1[i].per);
    }
}