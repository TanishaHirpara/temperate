#include<stdio.h>

main()
{
	int n, i=1, f=1;
	
	printf("Enter the value N =");
	scanf("%d" ,&n);
	
	do
	{ 
	f=f*i;
	i++;
	}while(i<=n);
	
	printf("The factorial of %d is %d" ,n,f);
}
