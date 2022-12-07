#include<stdio.h>
int main()
{
	int x,y,z,k,b=0;
	printf("Enter the height :- ");
	scanf("%d",&x);
	k=x;
	
	for(y=1;y<=x;y++)
	{
		for(b=1;b<=k;b++)
		{
			printf(" ");
		}
		for(z=1;z<=y;z++)
		{
			printf("* ");
		}
		k--;
		printf("\n");
	}
	k=x;
	y,b,z=0;
	for(y=1;y<=x;y++)
	{
		for(b=1;b<=k;b++)
		{
			printf(" ");
		}
		for(z=1;z<=y;z++)
		{
			printf("* ");
		}
		k--;
		printf("\n");
	}

}