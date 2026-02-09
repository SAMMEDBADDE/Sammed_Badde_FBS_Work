#include <stdio.h>
void check_vowel()
{

    char ch = 'A';
    if (ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' ||
        ch == 'O' || ch == 'U')
    {
        printf("The character is a Vowel");
    }
    else
    {
        printf("The character is a Consonant");
    }
    return;
}

int main()
{
    check_vowel();
   
    return 0;
}