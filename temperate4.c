#include<stdio.h>

main()

{
	int i, n, sum=0, fd, ld;
	
	printf("Enter the value = ");
	scanf("%d" ,&n);
	
	ld = n%10;
	while(n>=10)
	{
		
		n = n/10;
		
	}
	fd = n;
	sum = fd + ld;
	printf("Sum is = %d" ,sum);
}
