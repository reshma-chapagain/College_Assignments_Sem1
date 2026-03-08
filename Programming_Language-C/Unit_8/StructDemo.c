#include<stdio.h>
struct student {
    int roll;
    int math;
    int sci
};

int main(){
    struct student s1;
    s1.roll = 1;
    s1.math = 20;
    s1.sci = 40;

    printf("Roll Number: %d", s1.roll);
    printf("Math mark : %d", s1.math);
    printf("Science Mark : %d", s1.sci);

    return 0;
}

//WAP TO CREATE STRUCTURE HAVING MEMBERS AS NUM1 NUM2 NOW ASSIGN VALUES AND PRINT sUM