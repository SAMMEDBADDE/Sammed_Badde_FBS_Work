#include <stdio.h>
int main()
{
    int num, choice;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("\nMENU");
    printf("\n1. Even or Odd");
    printf("\n2. Prime or Not");
    printf("\n3. Palindrome or Not");
    printf("\n4. Positive/Negative/Zero");
    printf("\n5. Reverse Number");
    printf("\n6. Sum of Digits");

    printf("\nEnter choice: ");
    scanf("%d", &choice);

  
    if(choice == 1)
    {
        if(num % 2 == 0)
            printf("Even Number");
        else
            printf("Odd Number");
    }

    else if(choice == 2)
    {
        int i, flag = 1;

        if(num <= 1)
            flag = 0;

        for(i = 2; i <= num/2; i++)
        {
            if(num % i == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag)
            printf("Prime Number");
        else
            printf("Not Prime");
    }


    else if(choice == 3)
    {
        int temp = num, rev = 0, digit;

        while(temp > 0)
        {
            digit = temp % 10;
            rev = rev * 10 + digit;
            temp = temp / 10;
        }

        if(rev == num)
            printf("Palindrome");
        else
            printf("Not Palindrome");
    }

  
    else if(choice == 4)
    {
        if(num > 0)
            printf("Positive");
        else if(num < 0)
            printf("Negative");
        else
            printf("Zero");
    }

 
    else if(choice == 5)
    {
        int temp = num, rev = 0, digit;

        while(temp > 0)
        {
            digit = temp % 10;
            rev = rev * 10 + digit;
            temp = temp / 10;
        }

        printf("Reverse = %d", rev);
    }

    
    else if(choice == 6)
    {
        int temp = num, sum = 0;

        while(temp > 0)
        {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }

        printf("Sum of digits = %d", sum);
    }

    else
    {
        printf("Invalid choice");
    }

    return 0;
}
