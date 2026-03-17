#include <stdio.h>
int add(int x , int y){
return (x*y);
}
int main()
{
    int a;
    printf("Enter 1st Number : ");
    scanf("%d", &a);
    int b;
    printf("Enter 2st Number : ");
    scanf("%d", &b);
    int ans = add(a,b);
    printf("Answer is : %d", ans);
    return 0;

}
