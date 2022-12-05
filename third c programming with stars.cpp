#include<stdio.h>
int main()
{
    int r,p,q;
    printf("Enter the rows do you want:- ");
    scanf("%d",&r);
    for(p=1;p<=r;p++)
    {
        for(q=1;q<=(p*2);q++){
        printf("*");
        }
         printf("\n");
    }
   
    
}