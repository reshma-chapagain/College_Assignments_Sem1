#include<stdio.h>
void namaste();
void bonjour();
int main(){

    char ch;
    printf("Indian or bonjour");
    scanf("%c", &ch);
    if (ch == 'i') {
        namaste();
    }

    else {
        bonjour();
    }
    return 0;
}

void namaste()  {
    printf("Namaste");
}

void bonjour() {
    printf("Bonjour");
}