#include <stdio.h>
void area(){

 float radius, area;
    const float PI = 3.14159; 
    printf("Enter the radius of circle : ");
    scanf("%f", &radius); 
    area = PI * radius * radius;
    printf("The area of circle is : %.2f\n", area);


}
int main() {
   area();
    return 0;
}