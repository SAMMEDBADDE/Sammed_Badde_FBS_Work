#include <stdio.h>
int mystrnstr(char str[], char sub[], int n) {
    int i, j;
    for(i = 0; i < n && str[i] != '\0'; i++) {
        for(j = 0; sub[j] != '\0'; j++) {
            if(str[i+j] != sub[j] || i+j >= n)
                break;
        }
        if(sub[j] == '\0')
            return i;
    }

    return -1;
}

int main() {
    char str[100], sub[100];
    int n, pos;

    printf("Enter main string: ");
    gets(str);
    printf("Enter substring: ");
    gets(sub);

    printf("Enter limit: ");
    scanf("%d", &n);

    pos = mystrnstr(str, sub, n);

    if(pos != -1)
        printf("Substring found at index %d within limit", pos);
    else
        printf("Substring not found");

    return 0;
}