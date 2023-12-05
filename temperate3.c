#include<stdio.h>

main()

{
	int n, count=0;
	printf("Enter the value of N = ");
	scanf("%d" ,&n);
	
	while(n!=0)
	{
		n= n/10;
		count++;
}
		printf("The number of digits are = %d " ,count);
	
	
	
}
