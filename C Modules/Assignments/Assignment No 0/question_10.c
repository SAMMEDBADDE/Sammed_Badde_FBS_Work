#include <stdio.h>
int main()
{
    int s1 = 20;
    int s2 = 20;
    int s3 = 20;
    int s4 = 20;
    int s5 = 50;

int total = s1 + s2 + s3 + s4 + s5;
float per = (total / 500.0) * 100;

    printf("Total of marks :%.d\n", total);
    printf("Percentage of total is :%.2f", per);

    return 0;

}


