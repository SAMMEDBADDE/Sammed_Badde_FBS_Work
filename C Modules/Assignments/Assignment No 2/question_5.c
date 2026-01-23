// Accept the price from user. Ask the user if he is a student (user may say y or n). If he
// is a student and he has purchased more than 500 than discount is 20% otherwise
// discount is 10%.But if he is not a student then if he has purchased more than 600
// discount is 15% otherwise there is not discount.

#include <stdio.h>
int main()
{
    int price; 
    float dis;
    char ch;
    printf("Enter The Price :");
    scanf("%d", &price);
    printf("Are you a student? : ");
    scanf("%d", &ch);
    if (ch == 'y')
    {
        if (price > 500)
        {
            dis = 0.2 * price;
            printf("Discount:%f", dis); // discount for more than 500 purchase
        }
        else if (price < 500)
        {
            dis = 0.1 * price;
            printf("Discount:%f", dis); // discount for less than 500 purchase
        }
    }
    if (ch == 'n')
    {
        dis = 0.15 * price;
        printf("Discount:%f", dis); // discount for more than 600 purchase
    }
    else
    {
        printf("No discount");
    }
}