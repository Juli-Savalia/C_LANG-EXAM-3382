// WAP to find a square of all elements from a given 1D array.

#include<stdio.h>

void main()
{
	int n,i;
	
	printf("Enter the size of an array :- ");
	scanf("%d",&n);
	
	int m1[n],m2;
	
	printf("Enter the elements of an array :- \n");
	
	for(i=1;i<=n;i++)
	{
		printf("m1[%d] = \t",i);
		scanf("%d",&m1[i]);
	}
	
	for(i=1;i<=n;i++)
	{
		printf(" %d \n",i);
	}
	
	printf("sqaure of 1d array is :- \n");
	
	for(i=1;i<=n;i++)
	{
		m1[i] = m1[i] * m1[i];
		printf("%d ",m1[i]);
	}
}

//output
//
//
//Enter the size of an array :- 3
//Enter the elements of an array :-
//m1[1] =         1
//m1[2] =         2
//m1[3] =         3
// 1
// 2
// 3
//sqaure of 1d array is :-
//1 4 9
//--------------------------------
//Process exited after 2.853 seconds with return value 3
//Press any key to continue . . .










