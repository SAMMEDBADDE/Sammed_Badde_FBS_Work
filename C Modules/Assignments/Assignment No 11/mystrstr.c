#include <stdio.h>
int mystrstr(char str[], char sub[]) {
    int i, j;
    for(i = 0; str[i] != '\0'; i++) {
        for(j = 0; sub[j] != '\0'; j++) {
            if(str[i+j] != sub[j])
                break;
        }
        if(sub[j] == '\0')
            return i;
    }
    return -1;
}

int main() {
    char str[100], sub[100];
    int pos;

    printf("Enter main string: ");
    gets(str);
    printf("Enter substring: ");
    gets(sub);

    pos = mystrstr(str, sub);

    if(pos != -1)
        printf("Substring found at index %d", pos);
    else
        printf("Substring not found");

    return 0;
}