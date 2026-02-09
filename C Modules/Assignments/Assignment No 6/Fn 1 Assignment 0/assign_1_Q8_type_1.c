#include <stdio.h>
void peri()
{
    int w = 10;
    int l = 25;
    int perimeter = 2 * (l + w);

    printf("perimeter of rectangle is : %d", perimeter);
}
int main()
{

    peri();
    return 0;
}