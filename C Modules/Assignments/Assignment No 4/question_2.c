//Print prime numbers in the given range 1 to n.
#include <stdio.h>
int main()
{
    int n = 10;       
    int num, i;       
    int count;         

    for (num = 2; num <= n; num++)  
    {
        count = 0;                 

    for (i = 1; i <= num; i++)  
        {
            if (num % i == 0)        
            {
                count++;            
            }
        }

        if (count == 2)            
        {
            printf("%d ", num);    
        }
    }

    return 0;                      
}


