#include <stdio.h>
int main() {
    char str[100];
    int i, count = 0;

    printf("Enter string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i+1] != ' ')
            count++;
    }

    printf("Number of words = %d", count + 1);

    return 0;
}