#include<stdio.h>

struct Student {
    int id;
    int total;
};

int main() {
    struct Student s1;
    s1.id = 12;
    s1.total = 89;
    
   
    printf("Member id:" , s1.id);
    printf("Total Mark:", s1.total );

    return 0;
}