#include <stdio.h>
int main()
{
    float c, m, k;

    printf("Enter the length in centimeter::\n");
    scanf("%f", &c);

    m = (float)(c / 100);
    k = (float)(c / 100000);

    printf("\nLength in Meter  = %f meter \n", m);
    printf("Length in Kilometer  = %f kilometer\n", k);

return 0;
}