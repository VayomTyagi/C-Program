#include <stdio.h>
int main()
{
    int p, q;
    int sum, sub, mul, mod;
    float div;

    printf("Enter two numbers:\n");
    scanf("%d%d", &p, &q);

    sum = p + q;
    sub = p - q;
    mul = p * q;
    div = (float)p / q;
    mod = p % q;

    printf("Addition of number %d\n", sum);
    printf("Subtraction of number %d\n", sub);
    printf("Multiplication of number %d\n", mul);
    printf("Division of number %f\n", div);
    printf("Modulus of number %d\n", mod);
return 0;
}