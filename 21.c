#include <stdio.h>
int main()
{
    float cel, fah;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &cel);
    
    fah = (cel * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit", cel, fah);

return 0;
}