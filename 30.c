#include <stdio.h>
int main()
{
    float p, t, r, SI;
    
    printf("Enter the principal amount, time, rate::\n");
    scanf("%f%f%f", &p, &t, &r);

    SI = (p * t * r) / 100;

    printf("\nSimple Interest = %.2f", SI);

return 0;
}