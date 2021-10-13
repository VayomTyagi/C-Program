#include <stdio.h>
#include <math.h>
int main()
{
    int n, r;
    
    printf("Enter any number to find the square root::\n");
    scanf("%d", &n);

    r = sqrt(n);

    printf("\nSquare root of %.2d = %.2d", n, r);

    return 0;
}