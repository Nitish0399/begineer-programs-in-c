// squareroot table

#include<stdio.h>
#include<math.h>
void main()
{
	float x,y,i;
	printf("Number ");
	for(i=0;i<1;i+=0.1)
	printf("%.1f    ",i);
	printf("\n");
	for(x=0;x<10;x++)
	{
		printf("%.1f    ",x);
		for(y=0;y<1;y+=0.1)
		{
			printf("%.3f  ",sqrt(x+y));
		}
		printf("\n\n");
	}
}
