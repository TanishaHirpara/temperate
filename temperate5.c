#include<stdio.h>

main()

{
	int n, s, ans = 0, temp;
	printf("Enter the value = ");
	scanf("%d" ,&n);
	temp = n;
	while(n!=0)
	{
		s = n%10;
		ans = ans * 10 + s;
		n = n/10;
	}
	printf("Reverse of the entered number is = %d\n" ,ans);
      if(ans == temp)
      {
      	printf("The entered number is a palindrome");
	  }
	  else 
	  {
	  	printf("The entered number is not a palindrome");
	  }
	  
}
