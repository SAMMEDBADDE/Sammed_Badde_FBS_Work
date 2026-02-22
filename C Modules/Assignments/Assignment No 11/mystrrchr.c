#include <stdio.h>
int mystrrchr(char str[], char ch) {
    int i, pos = -1;

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch)
            pos = i;
    }

    return pos;
}

int main() {
    char str[100], ch;
    int pos;

    printf("Enter string: ");
    gets(str);

    printf("Enter character: ");
    scanf("%c", &ch);

    pos = mystrrchr(str, ch);

    if(pos != -1)
        printf("Last occurrence at index %d", pos);
    else
        printf("Character not found");

    return 0;
}