// EVM- Electronic Voting Machine. candidates are numbered from 1 to 5.

#include<stdio.h>
int voting(int);
int counting(int);
void result(int);
int i=0;
void main()
{
	int arr[20],count[6]={0};
	for(i=0;i>=0;i+=1)
	{
		printf("enter preference 1 to 5\n");
		printf("enter 0 to exit program\n");
		scanf("%d",&arr[i]);
		if(arr[i]==0)
		{
		printf("the program has been ended\n");
		break;
		}
	}
for(i=0;arr[i]!=0;i++)
	{
		switch(arr[i])
		{
			case 1: count[0]++;
						break;
			case 2: count[1]++;
						break;
			case 3: count[2]++;
						break;
			case 4: count[3]++;
						break;
			case 5: count[4]++;
						break;
			default: count[5]++;
						break;
		}
	}
	printf("the number of votes for candidate \n");
	for(i=0;i<5;i+=1)
	{
		printf("%d are %d \n",i+1,count[i]);
	}
	printf("the number of spoilt ballots are %d\n",count[5]);
}
			



	
