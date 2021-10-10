// reverse of a number

#include<stdio.h>
void main()
{
	long x,y;
	printf("enter a number\n");
	scanf("%d",&x);
	while(x!=0)
	{
		y=x/10;
		printf("%d",x%10);
		x=y;
	}
	printf("\n");
	
}

