// Print a pattern of stars in diamond shape
// Input: n = 4
// Output:

// *
// **
// ***
// ****
// ***
// **
// *

#include <stdio.h>
int main()
{
    int row, col;
    int n = 4;

  
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
}
