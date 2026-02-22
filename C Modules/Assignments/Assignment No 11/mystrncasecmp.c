#include <stdio.h>
int mystrncasecmp(char s1[], char s2[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        char c1 = s1[i], c2 = s2[i];

        if(c1 >= 'A' && c1 <= 'Z') c1 += 32;
        if(c2 >= 'A' && c2 <= 'Z') c2 += 32;

        if(c1 != c2)
            return c1 - c2;

        if(c1 == '\0' || c2 == '\0')
            break;
    }

    return 0;
}

int main() {
    char s1[100], s2[100];
    int n;

    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    printf("Enter number of characters to compare: ");
    scanf("%d", &n);

    if(mystrncasecmp(s1, s2, n) == 0)
        printf("Strings are equal (case insensitive) upto %d characters", n);
    else
        printf("Strings are not equal");

    return 0;
}