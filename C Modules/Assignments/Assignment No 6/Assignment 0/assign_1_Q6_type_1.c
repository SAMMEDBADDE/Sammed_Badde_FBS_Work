#include <stdio.h>
void cube_square()
{
    int n = 2;
    int square;
    int cube;

    square = n * n;
    cube = n * n * n;
    printf("Square of this number is :%d\n", square);
    printf("Cube of this number is :%d", cube);
}
int main()

{
    cube_square();
    return 0;
}