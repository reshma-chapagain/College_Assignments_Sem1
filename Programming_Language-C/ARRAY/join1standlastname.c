// Wap to join first and last name
#include <stdio.h>
#include <string.h>
int main()
{
    char first[10] = "Dipna";
    char last[10] = "Badar";
    strcat(first, last);
    printf("first name = %s", first);

    return 0;
}