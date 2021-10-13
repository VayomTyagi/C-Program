#include<stdio.h>
int main()
{
     int r;
     float v;
     printf("Enter Radius : ");
     scanf("%d",&r);

     v=(4/3.0)*3.14*r*r*r;

     printf("\nVolume of Sphere = %f",v);
return(0);
}