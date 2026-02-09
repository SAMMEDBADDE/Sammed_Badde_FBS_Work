// Check the given number is prime or not.
// Input: user
// Output: Prime

#include <stdio.h>
void check_prime()
{
    int n, i;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Not Prime");
    }

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("Not Prime");
        }
    }

    printf("Prime");

    return;
}

int main()
{
    check_prime();
    return 0;
}
