#include<stdio.h>
int main()
{
    float a, b, h;
    float area;
 
    printf("Enter the value for 1st bases of the trapezium: \n");
    scanf("%f", &a);
    printf("Enter the value for 2nd bases of the trapezium: \n");
    scanf("%f", &b);
    printf("Enter the valuefor Hight of the trapezium: \n");
    scanf("%f", &h);
    
    area = 0.5 * (a + b) * h ;
    
    printf("Area of the trapezium is: %.3f", area);

return(0);
}