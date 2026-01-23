// Accept three sides of a triangle from the user and determine whether the triangle isequilateral, isosceles, or scalene.

#include <stdio.h>
int main()
{

    printf("Enter three sides of triangle");
    int s1, s2, s3;

    scanf("%d",&s1);
    scanf("%d",&s2);
    scanf("%d",&s3);

    if (s1 == s2 && s2 == s3 && s3 == s1)
    {
        printf("triangle is equilateral");
    }
    else
    {
        if (s1 == s2 || s2 == s3 || s3 == s1)
        {
            printf(" triangle is isoscale");
        }
        else
        {
            printf("Triangle is scelen");
        }
    }
}
