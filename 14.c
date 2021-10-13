#include <stdio.h>
int main()
{
    int num;
    char ch;
    float f;

    printf("Enter the integer: ");
    scanf("%d", &num);
  
    printf("\nEntered integer is: %d", num);
  
    printf("\n\nEnter the float: ");
    scanf("%f", &f);

    printf("\nEntered float is: %f", f);
  
    printf("\n\nEnter the Character: ");
    scanf("%c", &ch);
  
    printf("\nEntered integer is: %c", ch);
  
    return 0;
}