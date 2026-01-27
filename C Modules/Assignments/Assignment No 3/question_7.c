// Find factorial of given number.
// Input: n = 5
// Output: 120
#include <stdio.h>

int main()
{
    int n = 5;
    int i;
    int f = 1;

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("Factorial is: %d", f);
}
