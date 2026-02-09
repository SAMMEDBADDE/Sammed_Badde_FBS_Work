// Find factorial of given number.
// Input: n = 5
// Output: 120

#include <stdio.h>
void check_fact()
{
    int n = 5;
    int i;
    int fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);
    return;
}
int main()
{
    check_fact();
    return 0;
}
