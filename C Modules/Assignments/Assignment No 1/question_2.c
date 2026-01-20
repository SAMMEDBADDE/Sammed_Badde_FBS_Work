#include <stdio.h>
int main()
{
    int num = 121;
    int first, last;
    last = num % 10;
    first = num / 100;

    if (first == last)
    {
        printf("The number is Palindrome");
    }
    else
    {
        printf("The number is Not Palindrome");
    }

    return 0;
}
