#include<stdio.h>
int main()
{
    int divid, divis, que, rema;
    printf("Enter dividend: ");
    scanf("%d", &divid);
    printf("Enter divisor: ");
    scanf("%d", &divis);
    que = divid / divis;
    rema = divid % divis;

    printf("Quotient = %d\n", que);
    printf("Remainder = %d", rema);
return(0);
}