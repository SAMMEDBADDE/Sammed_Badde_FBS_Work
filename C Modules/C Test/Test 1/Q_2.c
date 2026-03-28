// Test 1 - Q.2 

#include<stdio.h>
int main() {

int n, i;
long term=0, sum=0;
printf("Enter the number of terms : ");
scanf("%d", &n);

for(i=1; i<=n; i++) {
term = term * 10+1;
printf("%lld",term);

if(i<n){

printf("+");
}
sum += term;
}
printf("\nSum = %lld", sum);
return 0;

}