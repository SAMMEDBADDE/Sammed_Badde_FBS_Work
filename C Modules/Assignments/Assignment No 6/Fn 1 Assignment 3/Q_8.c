// Check the given number is Strong number or not.
// Input: n = 145
// Output: Strong

#include <stdio.h>
void check_strong()
{
    int n = 145;
    int temp = n;
    int digit, i, fact, sum = 0;

    while (temp > 0)
    {
        digit = temp % 10;
        fact = 1;

        for (i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == n)
        printf("Strong");
    else
        printf("Not Strong");
    return;
}
int main()
{
    check_strong();
    return 0;
}
