// Ask the user to enter marks.
// Then show the result based on these rules:
// If marks are more than 75 → show "Distinction"
// If marks are more than 65 → show "First Class"
// If marks are more than 55 → show "Second Class"
// If marks are 40 or more → show "Pass Class"
// If marks are less than 40 → show "Fail"
#include <stdio.h>
int main()
{
    printf("Enter Marks ");
    int mark;
    scanf("%d", &mark);

    if (mark >= 75)
    {
        printf("Distinction");
    }
    else if (mark >= 65 && mark <= 75)
    {
        printf("First Class");
    }
    else if (mark >= 55 && mark <= 65)
    {
        printf("Second class");
    }
    else if (mark >= 40 && mark <= 55)
    {
        printf("Pass class");
    }
    else if (mark < 40)
    {
        printf("FAIL");
    }
}