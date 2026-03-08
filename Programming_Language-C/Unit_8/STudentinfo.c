//WAp to creare struct student info having four members as Name, faculty, percentage and assign values and print it.
#include<stdio.h>
#include<string.h>
struct studentInfo {
    char name[50];
    char faculty[50];
    float percentage
};
int main() {
   struct studentInfo s1;
   strcpy(s1.name, "Ram");
   strcpy(s1.faculty, "Science");
   s1.percentage = 85.5;

   printf("Name: %s\n", s1.name);
    printf("Faculty: %s\n", s1.faculty);
    printf("Percentage: %.2f\n", s1.percentage);

    return 0;
}