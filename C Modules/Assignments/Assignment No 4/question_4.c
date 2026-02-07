//Print strong numbers in the given range 1 to n.
#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        int temp = i, sum = 0;

        while(temp > 0)
        {
            int digit = temp % 10;

            int fact = 1;
            for(int k = 1; k <= digit; k++)
            {
                fact = fact * k;
            }

            sum = sum + fact;
            temp = temp / 10;
        }

        if(sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
