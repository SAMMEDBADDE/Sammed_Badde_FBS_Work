#include <stdio.h>
void england()
{
printf("You are in England\n");
return;
}
void australia()
{
rintf("You are in Australia\n");
england();
}
void india()
{
printf("You are in India\n");
australia();
return;
}
int main()
{
 india();
}



