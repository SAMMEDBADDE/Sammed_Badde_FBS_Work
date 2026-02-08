// Print a solid square pattern
// Input: n = 4
// Output:

// * * * *
// * * * *
// * * * *
// * * * *

#include <stdio.h>
int main()
{
    for (int row = 1; row <= 4; row++)
    {
        for (int col = 1; col <= 4; col++)
        {

            printf("* ");
        }
            printf("\n");
    }

}