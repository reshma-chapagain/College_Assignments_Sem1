// WAP to print 12345, 123 using realloc() and malloc()
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr, i;
    ptr = (int *)malloc(5 * sizeof(int)); 
    for (i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }
    for (i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    ptr = (int *)realloc(ptr, 3 * sizeof(int)); 
    printf("\n");
    for (i = 0; i < 3; i++) {
        printf("%d ", ptr[i]);
    }
    free(ptr);
}