#include <stdio.h>
int main()
{
    char ch = 'G';   
    if (ch >= 'A' && ch <= 'Z')
    {
     printf("The character is Uppercase");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
     printf("The character is Lowercase");
    }
    else
    {
     printf("The character is not an Alphabet");
    }

    return 0;
}



