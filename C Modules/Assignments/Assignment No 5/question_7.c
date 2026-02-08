// Print a Floyd’s triangle pattern
// Input: n = 4
// Output:
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <stdio.h>
int main()
{
    int row, col;
    int n = 4;
    int num = 1;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }
}
