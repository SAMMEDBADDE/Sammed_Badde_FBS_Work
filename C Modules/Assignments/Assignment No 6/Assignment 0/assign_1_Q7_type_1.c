#include <stdio.h>
void time()
{

    int totalmin = 180;
    int hr = totalmin / 60;
    int remmin = totalmin % 60;

    printf("Hours of it will be: %d\n", hr);
    printf("remaining minutes of it will be: %d", remmin);
}
int main()
{
    time();
    return 0;
}