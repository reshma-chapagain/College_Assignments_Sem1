//Wap to read marks of 3 subjects calculate percantage and grade and print result

#include<stdio.h>
int main()
{
    int marks1, marks2, marks3;
    float percentage;
    printf("Enter marks of 3 subjects:");
    scanf("%d %d %d", &marks1, &marks2, &marks3);
    
    percentage = (marks1 + marks2 + marks3)/3.0;
    printf("percentage is: %f", percentage);

    if(percentage >= 90)
    {
        printf("Grade is A");
    }
    else if(percentage >= 80)
    {
        printf("Grade is B");
    }
    else if(percentage >= 70)
    {
        printf("Grade is C");
    }
    else if(percentage >= 60)
    {
        printf("Grade is D");
    }
    else
    {
        printf("Grade is F");
    }
    return 0;
}