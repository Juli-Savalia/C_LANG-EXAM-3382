//Q.3 WAP to find Fibonacci Series to n Numbers and Store it into textfile. 

#include<stdio.h>

void main()
{
	FILE *fibo;
	
	fibo = fopen("fibo.txt","w");
	
	int n1=0,n2=1,n3,i,no;
	
	printf("Enter the value of no :-");
	scanf("%d",&no);
	
	printf("%d ",n1);
	printf("%d ",n2);
	
	for(i=1;i<no;i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		
		printf("%d ",i);
	}
	
	fclose("fibo.txt");
	
	fibo = fopen("fio.txt","r");
}

//Enter the value of no :-4
//0 1 1 2 3
//--------------------------------
//Process exited after 1.554 seconds with return value 4
//Press any key to continue . . .




