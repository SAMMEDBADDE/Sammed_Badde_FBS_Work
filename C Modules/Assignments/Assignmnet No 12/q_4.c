#include <stdio.h>
int main() {
    char str[100], temp;
    int i, length = 0;

    printf("Enter string: ");
    gets(str);

    while(str[length] != '\0')
        length++;

    temp = str[0];
    str[0] = str[length - 1];
    str[length - 1] = temp;

    printf("Modified string: %s", str);

    return 0;
}