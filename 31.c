#include <stdio.h>
#include <math.h>
int main()
{
    float p, t, r, CI;

    printf("Enter the principal amount, time, and rate::\n");
    scanf("%f%f%f", &p, &t, &r);

    CI = p * (pow((1 + r / 100), t));

    printf("\nCompound Interest = %f", CI);

return 0;
}