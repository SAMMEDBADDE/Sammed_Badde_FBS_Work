// Accept a number and check if it is divisible by 3, 5, or both.
// (Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
// both" or” Divisible by None”)

#include <stdio.h>
void check(){
printf("Enter a number : ");
    int num;
    scanf("%d", &num);

    if (num % 5 == 0 && num % 3 == 0)
    {
        printf("Divisible by both");
    }
    else if (num % 3 == 0 && num % 5 != 0)
    {
        printf("Divisible by 3 but not by 5");
    }
    else if (num % 5 == 0 && num % 3 != 0 )
    {
        printf("Divisible by 5 but not by 3");
    }
    else if (num % 3 != 0 && num % 5 != 0)

{
    printf("Divisible by none");
} return ;


}
int main()
{
    check();
    return 0;
}

