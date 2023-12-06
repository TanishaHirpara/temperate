#include <stdio.h>

 main()
 {
    int i, n, num1 = 0, num2 = 1, nextNum;

    printf("Enter the numbers of fibonacci numbers to generate = ");\
    scanf("%d", &n);

    printf("Fibonacci series is = ");

    for (i=1;i<=n; i++)
	 {
        printf("%d, ", num1);
        nextNum = num1 + num2;
        num1 = num2;
        num2 = nextNum;
    }

}

