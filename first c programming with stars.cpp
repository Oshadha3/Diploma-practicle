#include<stdio.h>
int main()
{
    int i,r,p,q=0;
    printf("Enter the height of the rectangle:- ");
    scanf("%d",&p);
    printf("Enter the length of the rectangle:- ");
    scanf("%d",&q);
    
    for(i=1;i<=p;i++)
    {
        for(r=1;r<=q;r++)
        {
            printf("*");
        }
        printf("\n");
    }
}