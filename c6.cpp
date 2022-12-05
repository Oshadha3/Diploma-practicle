#include<stdio.h>
int main()
{ int height,base = 0;
float area;

printf("Enter the height of the triangle : ");
scanf("%d",&height);
printf("Enter the base of the triangle : ");
scanf("%d",&base);
area = (height*base)/2;
printf("Area of the triangle is %0.2f",area);
return 0;
}