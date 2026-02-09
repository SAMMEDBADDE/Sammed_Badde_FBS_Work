#include <stdio.h>
void area()
{
    int base = 20;
    int height = 10;
    float area = 0.5 * base * height;
    printf("Area of triangle is : %.2f", area);
}
int main()
{

    area();
    return 0;
}