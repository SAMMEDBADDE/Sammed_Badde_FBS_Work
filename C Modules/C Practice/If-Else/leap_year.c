// Determine weather the year is leap or not.

#include <stdio.h>
int main()
{

    int yr;
    printf("Enter Year : ");
    scanf("%d", &yr);

    if (yr % 4 == 0 && yr % 4 != 0 || yr % 400 ==0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a leap year");
    }
}