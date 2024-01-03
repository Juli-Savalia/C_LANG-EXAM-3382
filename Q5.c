// Write a Program to print the below pattern using nested for loop.          

//   		 *
//        *     *
//      *         *
//    *             *
//  *                 *


#include<stdio.h>

void main()
{
	int n,i,j;
	
	printf("Enter the value of n :- ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			if(i==1 || j==1||n==0)
			{
				printf("*");
			}
			else
			{
				printf("  ");
			}
		}
		
		for(j=1;j<i;j++)
		{
			if(i==1 || j==1||n==0)
			{
				printf(" * ");
			}
			else
			{
				printf("    ");
			}
		}
		
		printf("\n");
	}
}
