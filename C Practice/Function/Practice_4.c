#include <stdio.h>
void vote(){
     int age;
printf("Please Enter your age :  ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You are eligible to vote!");
    } else {

    printf("Sorry, You are not eligible to vote");
    } return;
}
int main()
{

   vote();
   return 0;

}

