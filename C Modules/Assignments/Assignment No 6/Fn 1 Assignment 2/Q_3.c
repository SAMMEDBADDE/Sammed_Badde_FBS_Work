// Write a program to find greatest of three numbers using nested if-else.

#include <stdio.h>
void check_num()
{

    int n1, n2, n3;
    printf("Enter three numbers");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("%d is greater", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("%d is greater", n2);
    }
    else if (n3 > n2 && n3 > n1)
    {
        printf("%d is greater", n3);
    }
    return;
}
int main()
{
    check_num();
    return 0;
}