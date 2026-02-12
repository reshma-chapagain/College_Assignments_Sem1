#include<stdio.h>
void countCall() {
    auto int count = 0;
    count++;
    printf("Called Function:%d\n", count);

}

int main() {
    countCall();
    countCall();
    countCall();
    return 0;
}