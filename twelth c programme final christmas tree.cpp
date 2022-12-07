#include<stdio.h>
int main()
{
	int x,y,z,k,b,h,i,p=0;
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
	for(y=(x/2);y<=x;y++)
	{
		for(b=(x/2);b<=k;b++)
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
	for(y=(x/2);y<=x;y++)
	{
		for(b=(x/2);b<=k;b++)
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
	 for(h=1;h<=(x/2);h++)
  {
  	for(p=1;p<=(x/2);p++)
  	{
  		printf(" ");
	  }
  	for(i=1;i<=(x/2);i++)
  	{
  		printf(" |");
	  }
  	printf("\n");
  }
}