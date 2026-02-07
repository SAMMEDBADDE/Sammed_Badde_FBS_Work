// Print armstrong numbers in the given range 1 to n.
#include <stdio.h>
int main()
{
    int n, i, num, sum, digit, temp;
    printf("Enter the upper limit n: ");
    scanf("%d", &n);
    printf("Armstrong numbers between 1 and %d are:\n", n);
    for (i = 1; i <= n; i++)
    {
        sum = 0;
        temp = i;
        while (temp != 0)
        {
            digit = temp % 10;
            sum += digit * digit * digit; 
            temp /= 10;
        }
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}