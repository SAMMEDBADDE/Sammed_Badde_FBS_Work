#include <stdio.h>
void mystrcat(char dest[], char src[]) {
    int i = 0, j = 0;

    while(dest[i] != '\0')
        i++;

    while(src[j] != '\0') {
        dest[i] = src[j];
        i++; j++;
    }

    dest[i] = '\0';
}

int main() {
    char s1[200], s2[100];

    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    mystrcat(s1, s2);

    printf("Concatenated string: %s", s1);
    return 0;
}