//AP to print all even numbers from a given 2D array using Pointer.\

#include<stdio.h>

void main()
{
	int n,i,j;
	
	printf("Enter the size of an array :- ");
	scanf("%d",&n);
	
	int m1[n][n],m2;
	
	printf("Enter the elements of an array :- \n");
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("m1[%d][%d] = \t",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",m1[i][j]);

		}
	}
	
	printf("\n");
	
}
