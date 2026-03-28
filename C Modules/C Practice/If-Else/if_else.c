//Take a number from user and tell if it is even or odd.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a nmber : ");
    scanf("%d", &n);
    if(n%2==0)
    {
        printf("Even Number");
    } if(n%2!=0)
    {
        printf("Odd Number");
    } 
    return 0;

}