#include<stdio.h>
int main()
{
    int r,i,p=0;
    printf("Enter the rows do you want ?");
    scanf("%d",&p);
    for(r=1;r<=p;r++)
    {
        for(i=1;i<=r;i++)
        {
            printf("*");
        }
        printf("\n");
    }
}