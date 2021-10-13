#include <stdio.h>
int main()
{
    float l, w, p;

    printf("Enter the length & width of the rectangle::\n");
    scanf("%f", &l);
    scanf("%f", &w);

    p = 2 * (l + w);

    printf("\nThe Perimeter of rectangle = %f units ", p);

return 0;
}