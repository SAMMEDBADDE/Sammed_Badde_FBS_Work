//Write a C program to input the length and width of a rectangle and find its perimeter.
#include <stdio.h>
int main()
{

    int w = 10;
    int l = 25;
    int perimeter = 2 * (l + w);

    printf("perimeter of rectangle is : %d", perimeter);
    return 0;
}
