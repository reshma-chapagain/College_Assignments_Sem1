#include<stdio.h>
struct Student {
    int roll;
    float per;
};
void display(struct Student *s1);

int main() {
    struct Student *s1;
    s1->roll= 10;
    s1->per = 85.5;
    display(s1);



    }

    void display(struct Student *s) {
        printf("your roll : %d, per : %f", s->roll, s->per);
    }

