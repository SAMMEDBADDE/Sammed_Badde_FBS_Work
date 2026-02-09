#include <stdio.h>
void add()
{
    int number1 = 10;
    int number2 = 20;
    int sum;

    sum = number1 + number2;
    printf("The sum of %d and %d is: %d\n", number1, number2, sum);
}

int main()
{
    add();

    return 0;
}