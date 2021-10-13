#include <stdio.h>
int main()
{
    float cel,fah;
 
    printf("\nEnter temperature in Fahrenheit:");
    scanf("%f",&fah);
 
    cel=(fah - 32)*5/9;
    
    printf("\nCelsius = %.3f",cel);
return 0;
}