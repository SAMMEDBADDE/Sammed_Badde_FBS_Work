//Write a C program to find the square and cube of a given number.
#include <stdio.h>
int main()

{
    int n = 2;
    int square;
    int cube;

    square = n * n;
    cube = n * n * n;
    printf("Square of this number is :%d\n", square);
    printf("Cube of this number is :%d", cube);
    return 0;
}
