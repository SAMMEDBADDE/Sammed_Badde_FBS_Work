#include <stdio.h>
int mystrncmp(char s1[], char s2[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        if(s1[i] != s2[i])
            return s1[i] - s2[i];

        if(s1[i] == '\0' || s2[i] == '\0')
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

    if(mystrncmp(s1, s2, n) == 0)
        printf("Strings are equal upto %d characters", n);
    else
        printf("Strings are not equal");

    return 0;
}