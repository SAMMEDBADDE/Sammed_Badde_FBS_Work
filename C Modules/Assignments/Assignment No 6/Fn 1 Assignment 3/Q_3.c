// Sum of numbers in given range.
// Find sum of numbers from start to end.
// Input: start = 1, end = 5
// Output: 15

#include <stdio.h>
void check_sum()
{
    int s = 0, e = 6, t = 0;
    for (int i = s; i < e; i++)
    {

        s += i;
    }
    printf("%d ", s);
    return;
}
int main()
{
    check_sum();
    return 0;
}

// int i = 1;

// while (i <= 10)
// {
//     printf("%d", i);
//     i = i + 1;
// }