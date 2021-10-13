#include <stdio.h>
int main()  
{  
    int a1, a2, a3;
    
    printf("Input two angles of triangle : ");  
    scanf("%d%d", &a1, &a2);  
  
    a3 = 180 - (a1 + a2);
  
    printf("Third angle of the triangle :  %d\n", a3);  
  
    return 0;  
}  