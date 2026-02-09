#include <stdio.h>
void arm()
{
    int n, temp, d, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0)
    {
        d = temp % 10;
        sum += d * d * d;
        temp /= 10;
    }

    if (sum == n)
        printf("Armstrong number");
    else
        printf("Not Armstrong number");

    return;
}
int main()
{
    arm();
    return 0;
}
