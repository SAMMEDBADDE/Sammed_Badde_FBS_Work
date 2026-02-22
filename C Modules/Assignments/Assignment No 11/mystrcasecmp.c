#include <stdio.h>
int mystrcasecmp(char s1[], char s2[]) {
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0') {
        char c1 = s1[i], c2 = s2[i];

        if(c1 >= 'A' && c1 <= 'Z') c1 += 32;
        if(c2 >= 'A' && c2 <= 'Z') c2 += 32;

        if(c1 != c2)
            return c1 - c2;
        i++;
    }
    return s1[i] - s2[i];
}

int main() {
    char s1[100], s2[100];

    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    if(mystrcasecmp(s1, s2) == 0)
        printf("Strings are equal (case insensitive)");
    else
        printf("Strings are not equal");

    return 0;
}