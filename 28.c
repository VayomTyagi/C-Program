#include<stdio.h>
#include<math.h>

int main()
{
    float si, Ar;

    printf("Please Enter Length of any side\n");
    scanf("%f",&si);

    Ar = (sqrt(3)/4)*(si*si);

    printf("\n Area of Equilateral Triangle = %f\n",Ar);
return 0;
}