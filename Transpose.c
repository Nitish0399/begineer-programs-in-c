// transpose of a mxn matrix

#include<stdio.h>
void main()
{
int mat[10][10],m,n,i,j;
printf("enter size of matrix(mxn)\n");
scanf("%d %d",&m,&n);
puts("enter elements");
for(i=0;i<m;i++)
{
	for (j=0;j<n;j++)
	scanf("%d",&mat[i][j]);
}
puts("the given matrix is");
for(i=0;i<m;i++)
{
	for (j=0;j<n;j++)
	printf("%d ",mat[i][j]);
	printf("\n");
}
puts("the transpose of the given matrix is");
for(i=0;i<n;i++)
{
	for (j=0;j<m;j++)
	printf("%d ",mat[j][i]);
	printf("\n");
}
}
