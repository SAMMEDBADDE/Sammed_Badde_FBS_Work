// Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.

#include <stdio.h>
void result(){
 int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    if (op == '+')
    {
        printf("Result = %d", a + b);
    }
    else if (op == '-')
    {
        printf("Result = %d", a - b);
    }
    else if (op == '*')
    {
        printf("Result = %d", a * b);
    }
    else if (op == '/')
    {
        printf("Result = %d", a / b);
    }
    else if (op == '%')
    {
        printf("Result = %d", a % b);
    }
    else
    {
        printf("Invalid operator");
    }
    return;


}
int main()
{
   
    result();
    return 0;
}
