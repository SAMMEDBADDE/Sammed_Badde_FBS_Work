//Write a C program to convert given minutes into hours and remaining minutes.
#include <stdio.h>
int main()
{
    int totalmin = 180;
    int hr = totalmin / 60;
    int remmin = totalmin % 60;

    printf("Hours of it will be: %d\n", hr);
    printf("remaining minutes of it will be: %d", remmin);

    return 0;
}
