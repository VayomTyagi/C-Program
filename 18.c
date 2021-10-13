#include <stdio.h>
int main()
{
    float l, w, a;

    printf("Enter the length & width of the rectangle::\n");
    scanf("%f", &l);
    scanf("%f", &w);

    a = l * w ;

    printf("\nThe Perimeter of rectangle = %f units ", a);
return 0;
}
