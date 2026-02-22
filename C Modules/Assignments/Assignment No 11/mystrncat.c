#include <stdio.h>
void mystrncat(char dest[], char src[], int n) {
    int i = 0, j = 0;

    while(dest[i] != '\0')
        i++;

    while(j < n && src[j] != '\0') {
        dest[i] = src[j];
        i++; j++;
    }

    dest[i] = '\0';
}
int main() {
    char s1[200], s2[100];
    int n;

    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    printf("Enter number of characters to concatenate: ");
    scanf("%d", &n);

    mystrncat(s1, s2, n);

    printf("Result string: %s", s1);
    return 0;
}