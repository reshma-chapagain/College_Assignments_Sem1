#include <stdio.h>
int main()
{
    int a = 1;
start:
    printf("%d\n", a);
    a++;
    if (a > 10)
    {
        goto end;
    }
    else
    {
        goto start;
    }
end:
    return 0;
}