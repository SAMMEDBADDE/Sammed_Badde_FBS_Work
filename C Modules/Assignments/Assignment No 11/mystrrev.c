#include <stdio.h>

int mystrlen(char str[]) {
    int i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}

void mystrrev(char str[]) {
    int i, len = mystrlen(str);
    char temp;

    for(i = 0; i < len/2; i++) {
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter string: ");
    gets(str);

    mystrrev(str);

    printf("Reversed string: %s", str);
    return 0;
}