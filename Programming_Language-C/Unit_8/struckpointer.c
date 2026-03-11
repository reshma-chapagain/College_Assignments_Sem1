// Wap to create struct having members id , marks using pointer and display the output

#include <stdio.h>

struct Student
{
    int id;
    float marks;
};

int main()
{
    struct Student s;     
    struct Student *s1;   

    s1 = &s;              

    s1->id = 1;
    s1->marks = 60;

    printf("Student id : %d\n", s1->id);
    printf("Student marks : %f\n", s1->marks);

    return 0;
}