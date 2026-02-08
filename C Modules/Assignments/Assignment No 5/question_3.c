// Print an inverted right-angled triangle pattern
// Input: n = 5
// Output:

// *****
// ****
// ***
// **
// *


#include<stdio.h>
int main(){
    int row;
    int col;
    for(row=5; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("* ");
        } printf(" \n");
    }
  
}