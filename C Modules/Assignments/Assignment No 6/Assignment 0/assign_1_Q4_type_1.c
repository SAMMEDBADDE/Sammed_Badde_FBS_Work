#include <stdio.h>
void swap()
{
    int a = 5, b = 8, temp;
    printf("Before swapping : \n");
    printf("a=%d, b=%d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping : \n");
    printf("a=%d, b=%d\n", a, b);
}
int main()
{
    swap();
    return 0;
}
