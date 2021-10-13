#include<stdio.h>
int main()
{
    int itype;
    float ftype;
    double dtype;
    char ctype;

    printf("Size of int: %zu bytes\n", sizeof(itype));
    printf("Size of float: %zu bytes\n", sizeof(ftype));
    printf("Size of double: %zu bytes\n", sizeof(dtype));
    printf("Size of char: %zu byte\n", sizeof(ctype));
    
return(0);
}