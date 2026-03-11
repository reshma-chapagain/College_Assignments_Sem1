//Wap to create struct having members id marks using pointer assign value and print it using pointer

#include<stdio.h>
struct Student{
    int id;
    float marks;
};

void structptr( struct Student *s2);
int main() {
    struct Student s;
    struct Student *s1;

    s1 = &s;
    s1->id = 1;
    s1->marks = 80;
    structptr(s1);
    return 0;
}

void structptr(struct Student *s2) {
    printf("student id : %d\n", s2->id);
    printf("student marks : %f\n", s2->marks);
}
