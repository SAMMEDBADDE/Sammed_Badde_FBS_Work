#include <stdio.h>
void tempetature()
{

    float celsius = 10, fahrenheit;
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("temperature in fahrenheit : %4f\n", fahrenheit);
}
int main()
{
    tempetature();
    return 0;
}