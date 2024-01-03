//Q.1 WAP to print all even numbers from a given range using UDF.

#include<stdio.h>

int even(int first, int last)
{
	if(first%2!=0)
	{
		first++;
	}
	
	int i;
	
	for(i=first;i<=last;i++)
	{
		if(i%2==0)
		{
			printf("%d \n",i);
		}
	}
}

void main()
{
	int first,last;

	printf("Enter the first digit of a range :- ");
	scanf("%d",&first);
	printf("Enter the last digit of a range :-");
	scanf("%d",&last);
	
	even(first,last);
}


//output

//Enter the first digit of a range :- 1
//Enter the last digit of a range :-10
//2345678910
//--------------------------------
//Process exited after 3.876 seconds with return value 11
//Press any key to continue . . .












