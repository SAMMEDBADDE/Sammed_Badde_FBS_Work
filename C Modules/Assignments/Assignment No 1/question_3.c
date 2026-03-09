#include <stdio.h>
int main()
{
    int year = 2024;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("The year is a Leap Year");
    }
    else
    {
        printf("The year is NOT a Leap Year");
    }
    return 0;
}


