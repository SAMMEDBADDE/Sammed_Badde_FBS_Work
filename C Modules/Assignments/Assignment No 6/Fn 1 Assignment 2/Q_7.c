// Accept the age and check if the person is: Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)

#include <stdio.h>

void check_age(){
    printf("Enter your age ");
    int age;
    scanf("%d", &age);

    if (age < 12){
  
        printf("The person is child");
    } 
    else if (age >= 12 && age <= 19) {

        printf("The person is Teenager");
    }
    else if (age >= 20 && age <= 59){

        printf("The person is Adult");
    }
    else
    {

        printf("The person is senior");
    }
    return ;   
}
int main()
{
    check_age();
    return 0;
}