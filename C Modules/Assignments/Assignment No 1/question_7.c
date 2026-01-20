#include <stdio.h>
int main()
{
    int basic_salary = 33000;
    float da, ta, hra;
    float total_salary;

    if (basic_salary <= 5000)
    {
        da  = (10 / 100.0) * basic_salary;
        ta  = (20 / 100.0) * basic_salary;
        hra = (25 / 100.0) * basic_salary;
    }
    else
    {
        da  = (15 / 100.0) * basic_salary;
        ta  = (25 / 100.0) * basic_salary;
        hra = (30 / 100.0) * basic_salary;
    }

    total_salary = basic_salary + da + ta + hra;

    printf("Basic Salary = %d\n", basic_salary);
    printf("DA = %.2f\n", da);
    printf("TA = %.2f\n", ta);
    printf("HRA = %.2f\n", hra);
    printf("Total Salary = %.2f\n", total_salary);

    return 0;
}
