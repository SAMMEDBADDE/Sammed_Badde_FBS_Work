// Check the given number is Perfect number or not.
// Input: n = 28
// Output: Perfect

#include <stdio.h>
void check_perfect()
{
    int n = 28;
    int i;
    int sum = 0;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
    {
        printf("Perfect");
    }
    else
    {
        printf("Not Perfect");
    }

    return;
}
int main()
{
    check_perfect();
    return 0;
}
