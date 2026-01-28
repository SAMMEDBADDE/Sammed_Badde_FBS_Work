// Check the given number is Palindrome number or not.
// Input: n = 121
// Output: Palindrome

#include <stdio.h>
int main()
{
    int n = 121;
    int temp = n;
    int rev = 0, digit;

    while (temp > 0)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

    if (rev == n)
        printf("Palindrome");
    else
        printf("Not Palindrome");

}
