#include <stdio.h>
int mystrchr(char str[], char ch) {
    int i = 0;
    while(str[i] != '\0') {
        if(str[i] == ch)
            return i;
        i++;
    }
    return -1;
}

int main() {
    char str[100], ch;
    int pos;

    printf("Enter string: ");
    gets(str);

    printf("Enter character: ");
    scanf("%c", &ch);

    pos = mystrchr(str, ch);

    if(pos != -1)
        printf("Character found at index %d", pos);
    else
        printf("Character not found");

    return 0;
}